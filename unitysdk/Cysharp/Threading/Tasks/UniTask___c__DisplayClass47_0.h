#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS47_0__ACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1CE0B910)
#define CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE08E90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c__DisplayClass47_0_TypeDefinitionIndex = 42753;

	class UniTask___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _Action_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C__DISPLAYCLASS47_0__ACTION_B__0_OFFSET))(this);
		}
	};
}
