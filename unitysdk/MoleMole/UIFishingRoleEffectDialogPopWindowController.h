#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_2966B6D779CF39AA_1;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x183E73E0)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x183E73D0)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E7B70)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E7C00)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E73F0)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E7640)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183E7C70)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x183E7D00)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_1_OFFSET UNITYSDK_OFFSET(0x183E7D80)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_2_OFFSET UNITYSDK_OFFSET(0x183E7E00)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E7E80)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E7F10)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E7F20)
#define MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x183E7F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingRoleEffectDialogPopWindowController_TypeDefinitionIndex = 76408;

	class UIFishingRoleEffectDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _rowData; // 0x318
		::Class_2_2966B6D779CF39AA_1* _view; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 _OnUIInit_b__6_0(::System::Int32 dataIdx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, dataIdx);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__6_1(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_1_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__6_2(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER__ONUIINIT_B__6_2_OFFSET))(this, controlReference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGROLEEFFECTDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
