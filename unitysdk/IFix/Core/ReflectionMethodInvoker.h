#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1714D320)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1714D360)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1714CBB0)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 9942;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* ctor; // 0x10
		::Il2CppArray<::System::Type*>* rawTypes; // 0x18
		::IFix::Core::TypeInfo* retTypeInfo; // 0x20
		::System::Reflection::MethodBase* method; // 0x28
		::System::Type* mDeclaringType; // 0x30
		::Il2CppArray<::System::Boolean>* refFlags; // 0x38
		::System::Type* returnType; // 0x40
		::Il2CppArray<::System::Boolean>* outFlags; // 0x48
		::System::Boolean hasThis; // 0x50
		::System::Boolean isNullableValue; // 0x51
		::System::Boolean isNullableHasValue; // 0x52
		::System::Boolean IsConstructor; // 0x53
		::System::Boolean hasReturn; // 0x54
		::System::Int32 paramCount; // 0x58

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
