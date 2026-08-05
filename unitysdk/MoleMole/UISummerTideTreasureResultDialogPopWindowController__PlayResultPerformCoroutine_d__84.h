#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController; }
namespace MoleMole { class UISummerTideTreasureInLevelItemWidgetController_Data; }
namespace MoleMole { class UISummerTideTreasureResultDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17D64090)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17D645A0)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17D64600)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17D645B0)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D64080)
#define MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84__CTOR_OFFSET UNITYSDK_OFFSET(0x17D64070)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureResultDialogPopWindowController__PlayResultPerformCoroutine_d__84_TypeDefinitionIndex = 66051;

	class UISummerTideTreasureResultDialogPopWindowController__PlayResultPerformCoroutine_d__84 : public ::System::Object
	{
	public:
		::MoleMole::UISummerTideTreasureInLevelItemWidgetController* _leftCtrl_5__4; // 0x10
		::MoleMole::UISummerTideTreasureResultDialogPopWindowController* __4__this; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _visibleRewardIds_5__9; // 0x20
		::MoleMole::UISummerTideTreasureInLevelItemWidgetController_Data* _leftData_5__3; // 0x28
		::System::Single _rewardTrailDuration_5__10; // 0x30
		::System::Boolean _hasRewardTrail_5__8; // 0x34
		::System::Boolean _hasFoodRecycleTrail_5__5; // 0x35
		::System::Single _foodRecycleTrailDuration_5__7; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Single __2__current; // 0x40
		::System::Int32 _foodRecycleValue_5__6; // 0x44
		::System::Int32 _i_5__2; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURERESULTDIALOGPOPWINDOWCONTROLLER__PLAYRESULTPERFORMCOROUTINE_D__84_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
