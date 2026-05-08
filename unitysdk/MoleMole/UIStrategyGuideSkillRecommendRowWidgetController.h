#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_741FF4CEF6E2E89E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1267E510)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1267E5A0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1267E440)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1267E4A0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET UNITYSDK_OFFSET(0x1267E620)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1267E8F0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1267E950)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1267E9E0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1267EA70)
#define MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1267EB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillRecommendRowWidgetController_TypeDefinitionIndex = 47959;

	class UIStrategyGuideSkillRecommendRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_741FF4CEF6E2E89E* _view; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshSkillIcon(::Foundation::AssetPath path, ::System::Boolean isTalent, ::System::UInt32 level, ::System::Int32 talentAddLevel, ::System::Boolean showMaxLevelRoot)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET))(this, path, isTalent, level, talentAddLevel, showMaxLevelRoot);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
