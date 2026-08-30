#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA83500)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1EA835B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA83540)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1EA83550)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitForEndOfFramePromise___c_TypeDefinitionIndex = 42648;

	class UniTask_WaitForEndOfFramePromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitForEndOfFramePromise___c_TypeDefinitionIndex)->GetStaticField(0x591F0);
		}
		static ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitForEndOfFramePromise___c_TypeDefinitionIndex)->GetStaticField(0x591F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}
	};
}
