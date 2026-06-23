#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleDeployBangbooDetailWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOODETAILWIDGETCONTROLLER__OPENTALENTSKILLDETAIL_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7612E0)
#define MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOODETAILWIDGETCONTROLLER__OPENTALENTSKILLDETAIL_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleDeployBangbooDetailWidgetController__OpenTalentSkillDetail_d__19_TypeDefinitionIndex = 67883;

	struct alignas(8) UISuibianTempleDeployBangbooDetailWidgetController__OpenTalentSkillDetail_d__19
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UISuibianTempleDeployBangbooDetailWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Boolean> __u__1; // 0x28
		::System::Int32 __1__state; // 0x38
		::Foundation::Tuple_2<::System::Int32, ::System::Int32> index; // 0x3C
		::System::Boolean force; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOODETAILWIDGETCONTROLLER__OPENTALENTSKILLDETAIL_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEDEPLOYBANGBOODETAILWIDGETCONTROLLER__OPENTALENTSKILLDETAIL_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
