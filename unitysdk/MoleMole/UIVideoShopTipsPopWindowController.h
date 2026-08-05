#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_165;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIVideoShopTipsPopWindowContext; }

#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11E2F700)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x11E2F8C0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E305C0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E306C0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E30650)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E2F710)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_SORTFUNC_OFFSET UNITYSDK_OFFSET(0x11E30780)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11E30870)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_0_OFFSET UNITYSDK_OFFSET(0x11E309B0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_1_OFFSET UNITYSDK_OFFSET(0x11E30880)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x11E309F0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11E30A80)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x11E30AB0)
#define MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11E30AC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoShopTipsPopWindowController_TypeDefinitionIndex = 69424;

	class UIVideoShopTipsPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_165* _view; // 0x318
		::MoleMole::UIVideoShopTipsPopWindowContext* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 SortFunc(::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2 lhs, ::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2 rhs)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2, ::Class_2_C6ECC390B9EFAEB9_Struct_2_680BF1744D60EED9_2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER_SORTFUNC_OFFSET))(this, lhs, rhs);
		}

		::System::Void _InitView_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_1_OFFSET))(this);
		}

		::System::Void _InitView_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER__INITVIEW_B__8_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPTIPSPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
