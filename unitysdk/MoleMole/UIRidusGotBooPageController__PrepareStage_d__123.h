#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_A78BAD31C5B5D3FD;
namespace MoleMole { class UIRidusGotBooPageController; }
namespace MoleMole { class UIRidusGotBooPageController___c__DisplayClass123_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PREPARESTAGE_D__123_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A7470)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PREPARESTAGE_D__123_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__PrepareStage_d__123_TypeDefinitionIndex = 75548;

	struct alignas(8) UIRidusGotBooPageController__PrepareStage_d__123
	{
		::MoleMole::UIRidusGotBooPageController___c__DisplayClass123_0* __8__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::Class_3_A78BAD31C5B5D3FD* _npcTransform_5__4; // 0x40
		::System::Int32 _buddyID_5__3; // 0x48
		::System::Int32 _i_5__2; // 0x4C
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PREPARESTAGE_D__123_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__PREPARESTAGE_D__123_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
