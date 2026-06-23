#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAllroundGeneralTutorialPopWindowController.h"

namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController_LogicDelegate; }
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET UNITYSDK_OFFSET(0x183EC630)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183EC640)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183EC690)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183EC6E0)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183EC770)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183EC780)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialMultiGroupPopWindowController_TypeDefinitionIndex = 71447;

	class UIAllroundGeneralTutorialMultiGroupPopWindowController : public ::MoleMole::UIAllroundGeneralTutorialPopWindowController
	{
	public:
		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* _m_logicDelegate_Multi; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate* get__logicDelegate()
		{
			return ((::MoleMole::UIAllroundGeneralTutorialPopWindowController_LogicDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_GET__LOGICDELEGATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALMULTIGROUPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
