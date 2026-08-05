#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_F565C1781196F0E8_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179C5180)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179C5370)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179C50B0)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179C5110)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET UNITYSDK_OFFSET(0x179C5210)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179C53F0)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179C5450)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179C54E0)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179C5570)
#define MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179C5600)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillRecommendRowWidgetController_TypeDefinitionIndex = 81809;

	class UISkillRecommendRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_F565C1781196F0E8_1* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshSkillIcon(::Foundation::AssetPath path, ::System::Boolean isTalent)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_REFRESHSKILLICON_OFFSET))(this, path, isTalent);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
