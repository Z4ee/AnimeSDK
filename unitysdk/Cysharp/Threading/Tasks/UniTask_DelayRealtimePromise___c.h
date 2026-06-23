#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3CD0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C3D10)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E6C3D20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayRealtimePromise___c_TypeDefinitionIndex = 31248;

	class UniTask_DelayRealtimePromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayRealtimePromise___c_TypeDefinitionIndex)->GetStaticField(0x258C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
