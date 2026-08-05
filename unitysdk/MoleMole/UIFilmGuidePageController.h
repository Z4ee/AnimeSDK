#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_979826E0E78F15DC;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18AB9980)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AB9990)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18AB9A00)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18ABA220)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONGETREWARDGUIDEDATARSP_OFFSET UNITYSDK_OFFSET(0x18ABA3F0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18AB9F00)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18ABA150)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONREWARDGUIDEDATACHANGED_OFFSET UNITYSDK_OFFSET(0x18ABA350)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AB9DC0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18ABA040)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AB9AA0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18AB9B80)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA490)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18ABA4A0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x18ABA540)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18ABA5F0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18ABA680)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18ABA710)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18ABA720)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ABA7E0)
#define MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ABA7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuidePageController_TypeDefinitionIndex = 42930;

	class UIFilmGuidePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _dataPreFetched; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_979826E0E78F15DC* get__viewModel()
		{
			return ((::Class_2_979826E0E78F15DC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void OnRewardGuideDataChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONREWARDGUIDEDATACHANGED_OFFSET))(this, args);
		}

		::System::Void OnGetRewardGuideDataRsp(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER_ONGETREWARDGUIDEDATARSP_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
