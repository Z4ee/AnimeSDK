#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5E2FBACADDB625B7_39;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182D48D0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182D4860)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182D4630)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182D4960)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182D4440)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x182D45C0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_SHOWPICNPCTAG_OFFSET UNITYSDK_OFFSET(0x182D4A10)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182D4A60)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182D4B40)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x182D4BD0)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x182D4C60)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182D4D00)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182D4D90)
#define MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x182D4E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityInteractWidgetController_TypeDefinitionIndex = 89324;

	class UIMainCityInteractWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_39* _view; // 0x2C0
		::System::Int32 _picIndex; // 0x2C8
		::System::Int32 _npcTag; // 0x2CC
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _children; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 ShowPicNpcTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER_SHOWPICNPCTAG_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYINTERACTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
