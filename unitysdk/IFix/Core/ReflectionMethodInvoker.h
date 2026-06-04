#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x17F977F0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x17F97830)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F97170)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 9769;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::System::Reflection::ConstructorInfo* ctor; // 0x10
		::System::Type* mDeclaringType; // 0x18
		::Il2CppArray<::System::Boolean>* outFlags; // 0x20
		::Il2CppArray<::System::Type*>* rawTypes; // 0x28
		::System::Reflection::MethodBase* method; // 0x30
		::Il2CppArray<::System::Boolean>* refFlags; // 0x38
		::IFix::Core::TypeInfo* retTypeInfo; // 0x40
		::System::Type* returnType; // 0x48
		::System::Boolean isNullableValue; // 0x50
		::System::Boolean hasThis; // 0x51
		::System::Boolean IsConstructor; // 0x52
		::System::Boolean hasReturn; // 0x53
		::System::Boolean isNullableHasValue; // 0x54
		::System::Int32 paramCount; // 0x58

		::System::Void _ctor(::System::Reflection::MethodBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_DeclaringType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET))(this);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* a1, ::IFix::Core::Call& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
