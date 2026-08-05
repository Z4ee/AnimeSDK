#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A68785F6A7B435D9.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVMISSIONTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1148E300)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMissionTopTabWidgetController_Context_TypeDefinitionIndex = 44555;

	class UIZenkovMissionTopTabWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* AfterClick; // 0x28
		::System::Int32 DungeonId; // 0x30
		::System::Int32 Difficulty; // 0x34
		::System::Boolean MapIsLocked; // 0x38
		::Enum_3_A68785F6A7B435D9 UnlockType; // 0x3C
		::System::Int32 LockTipId; // 0x40
		::System::Int32 UnlockQuestId; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMISSIONTOPTABWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
