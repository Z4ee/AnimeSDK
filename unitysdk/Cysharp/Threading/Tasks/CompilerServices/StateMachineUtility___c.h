#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D747870)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7478B0)
#define CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__GETSTATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x1D7478C0)

namespace Cysharp::Threading::Tasks::CompilerServices
{
	inline static constexpr unsigned int StateMachineUtility___c_TypeDefinitionIndex = 43124;

	class StateMachineUtility___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::CompilerServices::StateMachineUtility___c**)Il2CppClass::FromTypeDefinitionIndex(StateMachineUtility___c_TypeDefinitionIndex)->GetStaticField(0x619A0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(StateMachineUtility___c_TypeDefinitionIndex)->GetStaticField(0x619A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetState_b__0_0(::System::Reflection::FieldInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPILERSERVICES_STATEMACHINEUTILITY___C__GETSTATE_B__0_0_OFFSET))(this, a1);
		}
	};
}
