#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS46_0__ACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1CE0B8E0)
#define CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE08DE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass46_0_TypeDefinitionIndex = 42752;

	class UniTask___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Void _Action_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS46_0__ACTION_B__0_OFFSET))(this);
		}
	};
}
