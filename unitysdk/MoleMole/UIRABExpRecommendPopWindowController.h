#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController.h"

namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController_LogicDelegate; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate; }

#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_CALLBACK_OFFSET UNITYSDK_OFFSET(0x1757C790)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET UNITYSDK_OFFSET(0x1757C6C0)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1757C6D0)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1757C840)
#define MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1757C8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpRecommendPopWindowController_TypeDefinitionIndex = 52708;

	class UIRABExpRecommendPopWindowController : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController
	{
	public:
		::MoleMole::UIRABExpRecommendPopWindowController_RABExpRecommendLogicDelegate* _logic; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* get__logicDelegate()
		{
			return ((::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Callback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER_CALLBACK_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPRECOMMENDPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
