#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x1B54A3B0)
#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B54A450)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B549540)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 9784;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::System::Type* mDeclaringType; // 0x10
		::IFix::Core::TypeInfo* retTypeInfo; // 0x18
		::System::Reflection::ConstructorInfo* ctor; // 0x20
		::Il2CppArray<::System::Type*>* rawTypes; // 0x28
		::System::Reflection::MethodBase* method; // 0x30
		::Il2CppArray<::System::Boolean>* outFlags; // 0x38
		::Il2CppArray<::System::Boolean>* refFlags; // 0x40
		::System::Type* returnType; // 0x48
		::System::Int32 paramCount; // 0x50
		::System::Boolean IsDirectCall; // 0x54
		::System::Boolean hasReturn; // 0x55
		::System::Boolean hasThis; // 0x56
		::System::Boolean isNullableValue; // 0x57
		::System::Boolean isNullableHasValue; // 0x58
		::System::Boolean IsConstructor; // 0x59

		::System::Void _ctor(::System::Reflection::MethodBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, a1, a2);
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
