#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_6EC930B690591576;
class Class_2_6EC930B690591576_Class_1_EA06DA1092863621;
class Class_2_C9AC68D5E8DE2708;
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIOperationYumMainWidgetController; }
namespace MoleMole { class UIOperationYumTabWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GETACTUALNPCNAME_OFFSET UNITYSDK_OFFSET(0x16A6D070)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GETNPCNAMEBYID_OFFSET UNITYSDK_OFFSET(0x16A6D380)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16A6B2A0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_INITTABS_OFFSET UNITYSDK_OFFSET(0x16A6B830)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A6B2B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0x16A6D2B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16A6BF80)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A6C140)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A6B340)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A6BC30)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_PLAYWIDGETANIMATION_OFFSET UNITYSDK_OFFSET(0x16A6BE60)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16A6C1B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A6D4C0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__INITTABS_B__21_0_OFFSET UNITYSDK_OFFSET(0x16A6D720)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__ONUIINIT_B__17_0_OFFSET UNITYSDK_OFFSET(0x16A6D550)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__ONUIINIT_B__17_1_OFFSET UNITYSDK_OFFSET(0x16A6D690)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16A6D850)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16A6D8E0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16A6D9A0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16A6D9B0)
#define MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A6D9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOperationYumPageController_TypeDefinitionIndex = 40283;

	class UIOperationYumPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 TAB_COUNT = 0x5; // 0x0
		::Class_2_C9AC68D5E8DE2708* _view; // 0x318
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _limitTimeTaskBtnWidgetController; // 0x320
		::Class_2_6EC930B690591576* _operationYumModel; // 0x328
		::MoleMole::UIOperationYumMainWidgetController* _mainWidget1; // 0x330
		::MoleMole::UIOperationYumMainWidgetController* _mainWidget2; // 0x338
		::MoleMole::UIOperationYumMainWidgetController* _mainWidget3; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIOperationYumTabWidgetController*>* _tabBtns; // 0x348
		::System::Boolean _needPlayRefresh; // 0x350
		::System::Single _fadeInAniLength; // 0x354
		::System::Single _refreshAniLength; // 0x358
		::System::Int32 _curSelectIndex; // 0x35C
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_6EC930B690591576_Class_1_EA06DA1092863621*>* _npcNameDic; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_INITTABS_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean playAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, playAnimation);
		}

		::System::Void PlayWidgetAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_PLAYWIDGETANIMATION_OFFSET))(this);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void GetNPCNameByID(::System::Int32 npcID, ::System::String*& name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GETNPCNAMEBYID_OFFSET))(this, npcID, name);
		}

		::System::String* GetActualNpcName(::System::Int32 questID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER_GETACTUALNPCNAME_OFFSET))(this, questID);
		}

		::System::Void _OnUIInit_b__17_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__ONUIINIT_B__17_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__17_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__ONUIINIT_B__17_1_OFFSET))(this, args);
		}

		::System::Void _InitTabs_b__21_0(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER__INITTABS_B__21_0_OFFSET))(this, idx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOPERATIONYUMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
