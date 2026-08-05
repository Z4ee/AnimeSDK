#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DE516C6CF47482AF.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_0_16E4307DCC419505_36;
class Class_0_16E4307DCC419505_496;
class Class_1_BCE58899AE60B399_1;
class Class_2_DDB10B4C7B4CA8F8_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFlipCardGameRewardPopWindowController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GETFILPCARDGAMEROWFISHANINAME_OFFSET UNITYSDK_OFFSET(0x183E9E60)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GETUIFLIPCARDGAMEREWARDBINDER_OFFSET UNITYSDK_OFFSET(0x183EA140)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183E8210)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x183E8280)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x183E98F0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183E8D80)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x183E89D0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x183EA290)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183E8E20)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSELECTCHANGED_OFFSET UNITYSDK_OFFSET(0x183E8860)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E8340)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x183E8F20)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_SETFLIPCARDMODEL_OFFSET UNITYSDK_OFFSET(0x183E82F0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_SHOWREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x183E9C00)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183EA410)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__20_0_OFFSET UNITYSDK_OFFSET(0x183EA420)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x183EA630)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x183EA640)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x183EA6E0)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x183EA770)
#define MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183EA810)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameRowWidgetController_TypeDefinitionIndex = 75619;

	class UIFlipCardGameRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_0_16E4307DCC419505_496* _flipCardModel; // 0x2F0
		::System::Int32 _dataIndex; // 0x2F8
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall0; // 0x300
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall1; // 0x308
		::System::Action_2<::System::Int32, ::System::Single>* FlipCardSuccessAction; // 0x310
		::System::Action_1<::System::Boolean>* OnGamePadSelectChanged; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DDB10B4C7B4CA8F8_1* get__viewModel()
		{
			return ((::Class_2_DDB10B4C7B4CA8F8_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_1_BCE58899AE60B399_1* get__view()
		{
			return ((::Class_1_BCE58899AE60B399_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GET__VIEW_OFFSET))(this);
		}

		::System::Void SetFlipCardModel(::Class_0_16E4307DCC419505_496* model)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_496*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_SETFLIPCARDMODEL_OFFSET))(this, model);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSelectChanged(::System::Boolean obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSELECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::String* GetFilpCardGameRowFishAniName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GETFILPCARDGAMEROWFISHANINAME_OFFSET))(this);
		}

		::Enum_3_DE516C6CF47482AF GetUIFlipCardGameRewardBinder()
		{
			return ((::Enum_3_DE516C6CF47482AF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_GETUIFLIPCARDGAMEREWARDBINDER_OFFSET))(this);
		}

		::System::Void OnRequestFlipCardSuccess(::Class_0_16E4307DCC419505_36* rcvmessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET))(this, rcvmessage);
		}

		::MoleMole::UIFlipCardGameRewardPopWindowController* ShowRewardPopWindow(::System::Int32 cardID)
		{
			return ((::MoleMole::UIFlipCardGameRewardPopWindowController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER_SHOWREWARDPOPWINDOW_OFFSET))(this, cardID);
		}

		::System::Void _OnRequestFlipCardSuccess_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
