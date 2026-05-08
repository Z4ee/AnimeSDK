#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_B9D6E7E76075C6E2;
namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__NPCLEVEL_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x62B8C0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__NPCLEVEL_D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__NPCLevel_d__58_TypeDefinitionIndex = 75517;

	struct alignas(8) UIRidusGotBooPageController__NPCLevel_d__58
	{
		::System::Collections::Generic::List_1<::Class_1_B9D6E7E76075C6E2*>* _popups_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x38
		::System::Int32 _i_5__5; // 0x40
		::System::Boolean _firstSkillPlayed_5__4; // 0x44
		::System::Int32 __1__state; // 0x48
		::System::Int32 _interval_5__3; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__NPCLEVEL_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__NPCLEVEL_D__58_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
