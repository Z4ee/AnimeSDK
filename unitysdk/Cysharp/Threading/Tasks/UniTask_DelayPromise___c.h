#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAABF70)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAABFB0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FAABFC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayPromise___c_TypeDefinitionIndex = 31863;

	class UniTask_DelayPromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_DelayPromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_DelayPromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayPromise___c_TypeDefinitionIndex)->GetStaticField(0x27320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
