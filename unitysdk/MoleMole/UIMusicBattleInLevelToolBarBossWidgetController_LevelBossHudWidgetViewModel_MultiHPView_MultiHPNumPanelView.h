#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_ANIM_OFFSET UNITYSDK_OFFSET(0x15D61F80)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_NUM_OFFSET UNITYSDK_OFFSET(0x15D61ED0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x15D62040)
#define MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15D620F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel_MultiHPView_MultiHPNumPanelView_TypeDefinitionIndex = 62785;

	class UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel_MultiHPView_MultiHPNumPanelView : public ::System::Object
	{
	public:
		::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMusicBattleInLevelToolBarBossWidgetController_LevelBossHudWidgetViewModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW__CTOR_OFFSET))(this, uiController);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_Num()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_NUM_OFFSET))(this);
		}

		::UnityEngine::Animation* get_Anim()
		{
			return ((::UnityEngine::Animation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_ANIM_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELTOOLBARBOSSWIDGETCONTROLLER_LEVELBOSSHUDWIDGETVIEWMODEL_MULTIHPVIEW_MULTIHPNUMPANELVIEW_GET_ROOT_OFFSET))(this);
		}
	};
}
