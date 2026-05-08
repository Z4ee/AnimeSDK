#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4F8010)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F8050)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C4F8060)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitWhilePromise___c_TypeDefinitionIndex = 28602;

	class UniTask_WaitWhilePromise___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise___c**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitWhilePromise___c_TypeDefinitionIndex)->GetStaticField(0x21B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
