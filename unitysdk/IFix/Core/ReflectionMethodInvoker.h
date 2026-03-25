#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x15B4F270)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x15B4F2B0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4EB00)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 9807;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* outFlags; // 0x10
		::System::Reflection::ConstructorInfo* ctor; // 0x18
		::System::Type* mDeclaringType; // 0x20
		::Il2CppArray<::System::Type*>* rawTypes; // 0x28
		::Il2CppArray<::System::Boolean>* refFlags; // 0x30
		::System::Reflection::MethodBase* method; // 0x38
		::System::Type* returnType; // 0x40
		::IFix::Core::TypeInfo* retTypeInfo; // 0x48
		::System::Boolean IsConstructor; // 0x50
		::System::Boolean hasThis; // 0x51
		::System::Int32 paramCount; // 0x54
		::System::Boolean isNullableValue; // 0x58
		::System::Boolean isNullableHasValue; // 0x59
		::System::Boolean hasReturn; // 0x5A

		::System::Void _ctor(::System::Reflection::MethodBase* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, method);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* virtualMachine, ::IFix::Core::Call& call, ::System::Boolean isInstantiate)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET))(this, virtualMachine, call, isInstantiate);
		}
	};
}
