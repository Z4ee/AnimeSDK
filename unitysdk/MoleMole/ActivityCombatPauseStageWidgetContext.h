#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C47E10)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityCombatPauseStageWidgetContext_TypeDefinitionIndex = 49009;

	class ActivityCombatPauseStageWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* onSelectQuest; // 0x28
		::Class_4_01F9221F8B6A9296_Enum_3_05BF65C41833FF20 activityBattleType; // 0x30
		::System::Int32 activityID; // 0x34
		::System::Int32 targetQuestID; // 0x38
		::System::Boolean scrollToQuest; // 0x3C
		::System::Boolean scrollToUnlockQuest; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYCOMBATPAUSESTAGEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
