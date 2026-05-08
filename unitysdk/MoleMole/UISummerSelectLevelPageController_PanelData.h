#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF7F1C413CECBBD_3.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_ISTABLOCK_OFFSET UNITYSDK_OFFSET(0x14DD6010)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_SHOWLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x14DD6080)
#define MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD60F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerSelectLevelPageController_PanelData_TypeDefinitionIndex = 72811;

	class UISummerSelectLevelPageController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* SelectEquipText; // 0x28
		::System::String* ScoreTitleText; // 0x30
		::System::String* Title; // 0x38
		::System::String* StartButtonText; // 0x40
		::System::Int32 TabLock2; // 0x48
		::System::Boolean IsOpenByMainPanel; // 0x4C
		::System::Boolean IsShooting; // 0x4D
		::System::Int32 TabLock1; // 0x50
		::Enum_3_7CF7F1C413CECBBD_3 LevelGroupType; // 0x54
		::System::Int32 SelectLevelId; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean IsTabLock(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_ISTABLOCK_OFFSET))(this, index);
		}

		::System::Void ShowLockTips(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERSELECTLEVELPAGECONTROLLER_PANELDATA_SHOWLOCKTIPS_OFFSET))(this, index);
		}
	};
}
