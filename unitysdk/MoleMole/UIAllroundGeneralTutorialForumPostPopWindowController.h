#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController.h"

class Class_2_79AE422BA06F6D26_30;
namespace MoleMole { class UIAllroundGeneralTutorialForumPostPopWindowController_LogicDelegate_PostGroup; }
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController_LogicDelegate; }
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET UNITYSDK_OFFSET(0x16125260)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16125340)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16125270)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x161253D0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET UNITYSDK_OFFSET(0x16125460)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x161254A0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x161254B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialForumPostPopWindowController_TypeDefinitionIndex = 74078;

	class UIAllroundGeneralTutorialForumPostPopWindowController : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_30* postView; // 0x348
		::MoleMole::UIAllroundGeneralTutorialForumPostPopWindowController_LogicDelegate_PostGroup* postDelegate; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* get__logicDelegate()
		{
			return ((::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void _OnUIInit_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER__ONUIINIT_B__4_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALFORUMPOSTPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
