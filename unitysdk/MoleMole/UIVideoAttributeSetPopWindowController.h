#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_23;
class Class_2_79F6D62CE30E3F8E_145;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xFAE6DC0)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONATTRIBUTESELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xFAE77A0)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONCLOSECLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xFAE7920)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xFAE6DD0)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xFAE7970)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xFAE6E60)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xFAE7130)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUSECLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xFAE7890)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xFAE7240)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xFAE79E0)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xFAE79F0)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xFAE7A80)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xFAE7A90)
#define MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xFAE7AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoAttributeSetPopWindowController_TypeDefinitionIndex = 63118;

	class UIVideoAttributeSetPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_145* _view; // 0x318
		::System::Int32 selectPosition; // 0x320
		::System::Int32 itemID; // 0x324
		::System::Int32 costNum; // 0x328
		::System::Int32 defaultSelectPropertyID; // 0x32C
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_23*>* propertyList; // 0x330
		::Class_2_208CC9941471731A_23* selectPropertyCfg; // 0x338
		::System::Action_1<::Class_2_208CC9941471731A_23*>* selectPropertyHandle; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnAttributeSelectHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONATTRIBUTESELECTHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnUseClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUSECLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnCloseClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONCLOSECLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOATTRIBUTESETPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
