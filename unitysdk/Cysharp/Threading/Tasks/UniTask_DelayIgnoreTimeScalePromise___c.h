#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC29F00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC29F40)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FC29F50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayIgnoreTimeScalePromise___c_TypeDefinitionIndex = 31865;

	class UniTask_DelayIgnoreTimeScalePromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayIgnoreTimeScalePromise___c_TypeDefinitionIndex)->GetStaticField(0x27170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
