#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Call.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class MethodBase; }

#define IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E084690)
#define IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E084030)

namespace IFix::Core
{
	inline static constexpr unsigned int ReflectionMethodInvoker_TypeDefinitionIndex = 6943;

	class ReflectionMethodInvoker : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* outFlags; // 0x10
		::System::Type* returnType; // 0x18
		::System::Reflection::MethodBase* method; // 0x20
		::Il2CppArray<::System::Boolean>* refFlags; // 0x28
		::Il2CppArray<::System::Type*>* rawTypes; // 0x30
		::System::Reflection::ConstructorInfo* ctor; // 0x38
		::System::Boolean isValueTypeInstance; // 0x40
		::System::Boolean isNullableValue; // 0x41
		::System::Boolean hasReturn; // 0x42
		::System::Boolean isNullableHasValue; // 0x43
		::System::Int32 paramCount; // 0x44
		::System::Boolean isNullableGetValueOrDefault; // 0x48
		::System::Boolean hasThis; // 0x49

		::System::Void _ctor(::System::Reflection::MethodBase* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodBase*))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER__CTOR_OFFSET))(this, method);
		}

		::System::Void Invoke(::IFix::Core::VirtualMachine* virtualMachine, ::IFix::Core::Call& call, ::System::Boolean isInstantiate)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*, ::IFix::Core::Call&, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_REFLECTIONMETHODINVOKER_INVOKE_OFFSET))(this, virtualMachine, call, isInstantiate);
		}
	};
}
