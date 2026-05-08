#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_803;
class Class_2_719AB4D2FEFA4E3C;
class Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__PREPARESTARTGAME_D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75E440)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__PREPARESTARTGAME_D__51_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__PrepareStartGame_d__51_TypeDefinitionIndex = 74569;

	struct alignas(8) UIQuestionsAnswerWidgetController__PrepareStartGame_d__51
	{
		::Class_2_719AB4D2FEFA4E3C* _config_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::System::Collections::Generic::List_1_Enumerator<::System::Int32> __7__wrap5; // 0x28
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x40
		::Class_2_208CC9941471731A_803* _specialStage_5__5; // 0x48
		::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* _npcList_5__3; // 0x50
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_2_EC5A7AD641CF932C_Class_1_31AC555A20473204*> __u__2; // 0x58
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x70
		::System::Collections::Generic::List_1<::Class_2_EC5A7AD641CF932C_Struct_2_532EB3129DF46CFB>* _scenenpcList_5__4; // 0x80
		::System::Int32 stageId; // 0x88
		::System::Int32 __1__state; // 0x8C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__PREPARESTARTGAME_D__51_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__PREPARESTARTGAME_D__51_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
