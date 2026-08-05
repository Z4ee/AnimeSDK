#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_C225B1CBD64C56CE;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivitySkyNormalRewardWidgetController; }
namespace MoleMole { class UIActivitySkySpecialRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_CREATEREWARD_OFFSET UNITYSDK_OFFSET(0x16009540)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_FINDFOCUSINDEX_OFFSET UNITYSDK_OFFSET(0x16009C10)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_GETTAGTEXT_OFFSET UNITYSDK_OFFSET(0x16009A20)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16009090)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16009AC0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16008740)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16009120)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16008550)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160086D0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16008820)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REMOVEREWARD_OFFSET UNITYSDK_OFFSET(0x160091D0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16009DF0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16009F40)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16009F90)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16009FE0)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1600A030)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1600A070)
#define MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1600A0B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkyWidgetController_TypeDefinitionIndex = 72782;

	class UIActivitySkyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C225B1CBD64C56CE* _view; // 0x2C0
		::Class_1_D375C91CCE5D3999* _rootActivity; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySkyNormalRewardWidgetController*>* _normalRewardWidgets; // 0x2D0
		::MoleMole::UIActivitySkySpecialRewardWidgetController* _specialRewardWidgetController; // 0x2D8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _normalRewardObjs; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void CreateReward(::System::Int32 normalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_CREATEREWARD_OFFSET))(this, normalCount);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Int32 FindFocusIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_FINDFOCUSINDEX_OFFSET))(this);
		}

		::System::Void RemoveReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_REMOVEREWARD_OFFSET))(this);
		}

		::System::String* GetTagText(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER_GETTAGTEXT_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
