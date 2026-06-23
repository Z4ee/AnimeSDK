#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_504F298B4B2B1EEF.h"
#include "unitysdk/Enum_3_A3F38457E644339A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_6535CE33BDD95E74;
class Class_2_208CC9941471731A_940;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x169DFDD0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKREWARDBUFF_OFFSET UNITYSDK_OFFSET(0x169DFF90)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GETREWARDBUFFGAMETAG_OFFSET UNITYSDK_OFFSET(0x169DFF20)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x169DF700)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x169DF880)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x169DF690)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x169DF6D0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x169DF6E0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REWARDBUFF_OFFSET UNITYSDK_OFFSET(0x169DF8A0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x169DF5F0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0x169DF890)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET UNITYSDK_OFFSET(0x169DF6F0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REWARDBUFF_OFFSET UNITYSDK_OFFSET(0x169DF8B0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x169DF8C0)
#define MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x169E0130)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookManualWidgetController_TabItem_TypeDefinitionIndex = 82140;

	class UIHandBookManualWidgetController_TabItem : public ::System::Object
	{
	public:
		::Class_1_6535CE33BDD95E74* _RewardBuff_k__BackingField; // 0x10
		::Class_2_208CC9941471731A_940* entryTemplate; // 0x18
		::System::Func_1<::MoleMole::UIBaseController*>* _CreateWidget_k__BackingField; // 0x20
		::MoleMole::UIBaseController* _controller; // 0x28
		::System::Int64 EndTimeStamp; // 0x30
		::System::Boolean _isFirstShow; // 0x38
		::System::Boolean IsLocked; // 0x39
		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> _RedDotInfo_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM__CTOR_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_TITLE_OFFSET))(this);
		}

		::Foundation::AssetPath get_IconPath()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONPATH_OFFSET))(this);
		}

		::Enum_3_504F298B4B2B1EEF get_IconType()
		{
			return ((::Enum_3_504F298B4B2B1EEF(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_ICONTYPE_OFFSET))(this);
		}

		::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> get_RedDotInfo()
		{
			return ((::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REDDOTINFO_OFFSET))(this);
		}

		::System::Void set_RedDotInfo(::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::UInt32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REDDOTINFO_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_Controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Func_1<::MoleMole::UIBaseController*>* get_CreateWidget()
		{
			return ((::System::Func_1<::MoleMole::UIBaseController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_CREATEWIDGET_OFFSET))(this);
		}

		::System::Void set_CreateWidget(::System::Func_1<::MoleMole::UIBaseController*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::UIBaseController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_CREATEWIDGET_OFFSET))(this, value);
		}

		::Class_1_6535CE33BDD95E74* get_RewardBuff()
		{
			return ((::Class_1_6535CE33BDD95E74*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GET_REWARDBUFF_OFFSET))(this);
		}

		::System::Void set_RewardBuff(::Class_1_6535CE33BDD95E74* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6535CE33BDD95E74*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SET_REWARDBUFF_OFFSET))(this, value);
		}

		::System::Void ShowTab(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_SHOWTAB_OFFSET))(this, isInit);
		}

		::System::Void CheckCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKCOUNTDOWN_OFFSET))(this);
		}

		::Enum_3_A3F38457E644339A GetRewardBuffGameTag()
		{
			return ((::Enum_3_A3F38457E644339A(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_GETREWARDBUFFGAMETAG_OFFSET))(this);
		}

		::System::Void CheckRewardBuff()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_TABITEM_CHECKREWARDBUFF_OFFSET))(this);
		}
	};
}
