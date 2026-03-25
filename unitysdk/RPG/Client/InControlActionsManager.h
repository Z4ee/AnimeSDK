#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_49711CDB46CFD3AE;
class Class_3_B4445CE2009A84E3;
class Class_3_B4445CE2009A84E3_1;
class Class_3_B4445CE2009A84E3_2;
namespace InControl { class InputControl; }
namespace InControl { class PlayerAction; }
namespace RPG::Client { class InControlActionData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class PlayerAdventureActions; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKACTIONTIPANDRESPOND_OFFSET UNITYSDK_OFFSET(0x99457A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x9944E80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BUTTONVALIDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9941040)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_CHECKISCANCLOSEMARQUEE_OFFSET UNITYSDK_OFFSET(0x99460D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9941450)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0x9940ED0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ENABLEACTIONSET_OFFSET UNITYSDK_OFFSET(0x9944210)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETADVENTUREACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x9943850)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETBATTLEACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x99438B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLACTIONDATA_OFFSET UNITYSDK_OFFSET(0x993F880)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLKEYSTRING_OFFSET UNITYSDK_OFFSET(0x9946050)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETLITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x9942EA0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETMENUACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x993EF10)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETSPECIALACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0x99437F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ADVENTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x9943190)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BATTLEACTIONS_OFFSET UNITYSDK_OFFSET(0x99431A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BLOCKACTIONWHILTE_OFFSET UNITYSDK_OFFSET(0x99431D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_CURLONGPRESSEVENT_OFFSET UNITYSDK_OFFSET(0x9943110)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INCONTROLINPUTEVENTENABLED_OFFSET UNITYSDK_OFFSET(0x9943080)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INITCONFIGDATAREADY_OFFSET UNITYSDK_OFFSET(0x9942F30)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9946C10)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCKBYTASK_OFFSET UNITYSDK_OFFSET(0x9943070)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x9943010)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0x9942F40)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINLONGPRESSING_OFFSET UNITYSDK_OFFSET(0x99430A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINPUTFILEDSELECTED_OFFSET UNITYSDK_OFFSET(0x9942F50)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_JOYSTICKACTIONNAMES_OFFSET UNITYSDK_OFFSET(0x99431C0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_KEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0x99431E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTBINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x9943130)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICECLASS_OFFSET UNITYSDK_OFFSET(0x9943160)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICESTYLE_OFFSET UNITYSDK_OFFSET(0x9943170)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_MENUACTIONS_OFFSET UNITYSDK_OFFSET(0x99431B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_SPECIALACTIONS_OFFSET UNITYSDK_OFFSET(0x9943180)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDELITTLEWHEELITEM_OFFSET UNITYSDK_OFFSET(0x9943150)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDEWHEELITEM_OFFSET UNITYSDK_OFFSET(0x9943140)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_INITONDATAREADY_OFFSET UNITYSDK_OFFSET(0x9941A60)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9941790)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0x9940CF0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISLITTLEWHEELITEMBLOCK_OFFSET UNITYSDK_OFFSET(0x9942D50)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISTEXTPROOPEN_OFFSET UNITYSDK_OFFSET(0x9940F80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELITEMBLOCK_OFFSET UNITYSDK_OFFSET(0x9942CE0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELLOCKED_OFFSET UNITYSDK_OFFSET(0x9942DC0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUTBYDEBUGUI_OFFSET UNITYSDK_OFFSET(0x9943EC0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUT_OFFSET UNITYSDK_OFFSET(0x9943CF0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKWHEELITEMWITHWHITELIST_OFFSET UNITYSDK_OFFSET(0x9942B40)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0x9940E20)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ONPLAYERTOUCH_OFFSET UNITYSDK_OFFSET(0x9945E20)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_OVERRIDELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x9942E00)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_REFRESHACTIONBINDINGS_OFFSET UNITYSDK_OFFSET(0x9943C70)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_REGISTERWHEELITEMSELECTLISTENER_OFFSET UNITYSDK_OFFSET(0x9942C00)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETACTIONBINDINGS_OFFSET UNITYSDK_OFFSET(0x9943A50)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETLITTLEWHEELSELECTCONFIGTODEFAULT_OFFSET UNITYSDK_OFFSET(0x9942E50)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0x9944E10)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONWHITELIST_OFFSET UNITYSDK_OFFSET(0x9944CB0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETADVENTUREACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0x9943910)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETBATTLEACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0x99439B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0x9940D40)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETNAVIGATIONEVENTSENABLE_OFFSET UNITYSDK_OFFSET(0x9942880)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETSUBMITEVENTSENABLE_OFFSET UNITYSDK_OFFSET(0x99429E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_CURLONGPRESSEVENT_OFFSET UNITYSDK_OFFSET(0x9943120)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTSBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9943370)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0x99431F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTSBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0x9943670)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTS_OFFSET UNITYSDK_OFFSET(0x99434F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_INCONTROLINPUTEVENTENABLED_OFFSET UNITYSDK_OFFSET(0x9943090)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINLONGPRESSING_OFFSET UNITYSDK_OFFSET(0x99430B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINPUTFILEDSELECTED_OFFSET UNITYSDK_OFFSET(0x9942F60)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SHAREDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x9940FE0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TOPCONTROLLERONENTER_OFFSET UNITYSDK_OFFSET(0x9945920)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYEXITTOPDIALOGORPAGE_OFFSET UNITYSDK_OFFSET(0x9945B80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYGETACTION_OFFSET UNITYSDK_OFFSET(0x9944170)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETACTIONENABLE_OFFSET UNITYSDK_OFFSET(0x9944100)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETADVENTUREACTIONENABLE_OFFSET UNITYSDK_OFFSET(0x9944090)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TUTORIALSETACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0x9944400)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UNLOCKWHEELITEM_OFFSET UNITYSDK_OFFSET(0x9942BA0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UNREGISTERWHEELITEMSELECTLISTENER_OFFSET UNITYSDK_OFFSET(0x9942C50)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UPDATETOUCHINPUT_OFFSET UNITYSDK_OFFSET(0x99459F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9946C40)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x99410A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__GETINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0x99462F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITADVENTUREACTIONS_OFFSET UNITYSDK_OFFSET(0x99424A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITBATTLEACTIONS_OFFSET UNITYSDK_OFFSET(0x99425A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITINCONTROLACTIONDATA_OFFSET UNITYSDK_OFFSET(0x9942170)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITMENUACTIONS_OFFSET UNITYSDK_OFFSET(0x99426A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITSPECIALACTIONS_OFFSET UNITYSDK_OFFSET(0x99423A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x9945EB0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x9946870)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONKEYBOARDLAYOUTCHANEGED_OFFSET UNITYSDK_OFFSET(0x9946B80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x99465B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHACTIONS_OFFSET UNITYSDK_OFFSET(0x9944470)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x99427A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEUI_OFFSET UNITYSDK_OFFSET(0x99466D0)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlActionsManager_TypeDefinitionIndex = 49707;

	class InControlActionsManager : public ::System::Object
	{
	public:
		static ::Class_1_49711CDB46CFD3AE** StaticGet_s_InControlAudioManager()
		{
			return (::Class_1_49711CDB46CFD3AE**)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0x209A0);
		}
		static ::System::Single* StaticGet_DragThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0x8A60);
		}
		static ::System::Single* StaticGet_PressValidPadingThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0x8A64);
		}
		static ::System::Single* StaticGet_PressValidThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0x8A68);
		}
		::System::Collections::Generic::HashSet_1<::System::String*>* _JoyStickActionNames; // 0x10
		::RPG::Client::LongPressEvent* _CurLongPressEvent; // 0x18
		::Class_3_B4445CE2009A84E3* _SpecialActions; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _BlockActionWhilte; // 0x28
		::RPG::Client::PlayerAdventureActions* _AdventureActions; // 0x30
		::RPG::Client::LittleWheelSelectConfig* _OverrideConfig; // 0x38
		::System::Action* _OnWheelItemSelectCallback; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::InControlActionData*>* _InControlActionDataDic; // 0x48
		::Il2CppArray<::System::UInt32>* _CloseMarqueeInputControlType; // 0x50
		::Class_3_B4445CE2009A84E3_1* _BattleActions; // 0x58
		::Class_3_B4445CE2009A84E3_2* _MenuActions; // 0x60
		::InControl::InputDeviceStyle _LastInputDeviceStyle; // 0x68
		::System::UInt32 _DebugUIBlockID; // 0x6C
		::System::Boolean _IsWheelLocked; // 0x70
		::System::Boolean _IsBlockByTutorial; // 0x71
		::System::Boolean _EnableSubmitEvents; // 0x72
		::System::Boolean _EnableNavigationEvents; // 0x73
		::System::UInt32 _BlockID; // 0x74
		::InControl::InputDeviceClass _LastInputDeviceClass; // 0x78
		::RPG::GameCore::WheelItemType _AllowWheelItem; // 0x7C
		::System::Boolean _IsDropdownShow; // 0x80
		::System::Boolean _EnableNavigationEventsByTutorial; // 0x81
		::System::Boolean _InControlInputEventEnabled; // 0x82
		::System::Boolean _EnableSubmitEventsByTutorial; // 0x83
		::InControl::BindingSourceType _LastBindingSourceType; // 0x84
		::System::Int32 _KeyboardLayoutType; // 0x88
		::System::Boolean _IsInputFiledSelected; // 0x8C
		::System::Boolean _IsInLongPressing; // 0x8D
		::System::Boolean _InitConfigDataReady; // 0x8E
		::System::Boolean _IsBlockByTask; // 0x8F
		::RPG::GameCore::ShortCutWheelGotoType _AllowLittleWheelItem; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean IsControllerInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISCONTROLLERINPUT_OFFSET))(this);
		}

		::System::Void SetDropdownShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETDROPDOWNSHOW_OFFSET))(this, isShow);
		}

		::Il2CppArray<::System::Int32>* NoLeadingChars()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_NOLEADINGCHARS_OFFSET))(this);
		}

		::System::Int32 Ellipsis()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ELLIPSIS_OFFSET))(this);
		}

		::System::Boolean IsTextProOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISTEXTPROOPEN_OFFSET))(this);
		}

		::System::Single ShareDragThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SHAREDRAGTHRESHOLD_OFFSET))(this);
		}

		::System::Single ButtonValidThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_BUTTONVALIDTHRESHOLD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_INIT_OFFSET))(this);
		}

		::System::Void InitOnDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_INITONDATAREADY_OFFSET))(this);
		}

		::System::Void SetNavigationEventsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETNAVIGATIONEVENTSENABLE_OFFSET))(this, enable);
		}

		::System::Void SetSubmitEventsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETSUBMITEVENTSENABLE_OFFSET))(this, enable);
		}

		::System::Void LockWheelItemWithWhiteList(::RPG::GameCore::WheelItemType allowWheelItemType, ::RPG::GameCore::ShortCutWheelGotoType allowLittleWheelItemType)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WheelItemType, ::RPG::GameCore::ShortCutWheelGotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKWHEELITEMWITHWHITELIST_OFFSET))(this, allowWheelItemType, allowLittleWheelItemType);
		}

		::System::Void UnlockWheelItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UNLOCKWHEELITEM_OFFSET))(this);
		}

		::System::Void RegisterWheelItemSelectListener(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_REGISTERWHEELITEMSELECTLISTENER_OFFSET))(this, callback);
		}

		::System::Void UnregisterWheelItemSelectListener(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UNREGISTERWHEELITEMSELECTLISTENER_OFFSET))(this, callback);
		}

		::System::Boolean IsWheelItemBlock(::System::UInt32 wheelItemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELITEMBLOCK_OFFSET))(this, wheelItemID);
		}

		::System::Boolean IsLittleWheelItemBlock(::System::UInt32 littleWheelItemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISLITTLEWHEELITEMBLOCK_OFFSET))(this, littleWheelItemID);
		}

		::System::Boolean IsWheelLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELLOCKED_OFFSET))(this);
		}

		::System::Void OverrideLittleWheelSelectConfig(::RPG::Client::LittleWheelSelectConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleWheelSelectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_OVERRIDELITTLEWHEELSELECTCONFIG_OFFSET))(this, config);
		}

		::System::Void ResetLittleWheelSelectConfigToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETLITTLEWHEELSELECTCONFIGTODEFAULT_OFFSET))(this);
		}

		::RPG::Client::LittleWheelSelectConfig* GetLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETLITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_InitConfigDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INITCONFIGDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsDropdownShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISDROPDOWNSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsInputFiledSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINPUTFILEDSELECTED_OFFSET))(this);
		}

		::System::Void set_IsInputFiledSelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINPUTFILEDSELECTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsBlockByTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCKBYTASK_OFFSET))(this);
		}

		::System::Boolean get_InControlInputEventEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INCONTROLINPUTEVENTENABLED_OFFSET))(this);
		}

		::System::Void set_InControlInputEventEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_INCONTROLINPUTEVENTENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsInLongPressing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINLONGPRESSING_OFFSET))(this);
		}

		::System::Void set_IsInLongPressing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINLONGPRESSING_OFFSET))(this, value);
		}

		::RPG::Client::LongPressEvent* get_CurLongPressEvent()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_CURLONGPRESSEVENT_OFFSET))(this);
		}

		::System::Void set_CurLongPressEvent(::RPG::Client::LongPressEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_CURLONGPRESSEVENT_OFFSET))(this, value);
		}

		::InControl::BindingSourceType get_LastBindingSourceType()
		{
			return ((::InControl::BindingSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTBINDINGSOURCETYPE_OFFSET))(this);
		}

		::RPG::GameCore::WheelItemType get_TutorialGuideWheelItem()
		{
			return ((::RPG::GameCore::WheelItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDEWHEELITEM_OFFSET))(this);
		}

		::RPG::GameCore::ShortCutWheelGotoType get_TutorialGuideLittleWheelItem()
		{
			return ((::RPG::GameCore::ShortCutWheelGotoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDELITTLEWHEELITEM_OFFSET))(this);
		}

		::InControl::InputDeviceClass get_LastInputDeviceClass()
		{
			return ((::InControl::InputDeviceClass(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICECLASS_OFFSET))(this);
		}

		::InControl::InputDeviceStyle get_LastInputDeviceStyle()
		{
			return ((::InControl::InputDeviceStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICESTYLE_OFFSET))(this);
		}

		::Class_3_B4445CE2009A84E3* get_SpecialActions()
		{
			return ((::Class_3_B4445CE2009A84E3*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_SPECIALACTIONS_OFFSET))(this);
		}

		::RPG::Client::PlayerAdventureActions* get_AdventureActions()
		{
			return ((::RPG::Client::PlayerAdventureActions*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ADVENTUREACTIONS_OFFSET))(this);
		}

		::Class_3_B4445CE2009A84E3_1* get_BattleActions()
		{
			return ((::Class_3_B4445CE2009A84E3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BATTLEACTIONS_OFFSET))(this);
		}

		::Class_3_B4445CE2009A84E3_2* get_MenuActions()
		{
			return ((::Class_3_B4445CE2009A84E3_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_MENUACTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get_JoyStickActionNames()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_JOYSTICKACTIONNAMES_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get_BlockActionWhilte()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BLOCKACTIONWHILTE_OFFSET))(this);
		}

		::System::Int32 get_KeyboardLayoutType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_KEYBOARDLAYOUTTYPE_OFFSET))(this);
		}

		::System::Void set_EnableNavigationEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTS_OFFSET))(this, value);
		}

		::System::Void set_EnableNavigationEventsByTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTSBYTUTORIAL_OFFSET))(this, value);
		}

		::System::Void set_EnableSubmitEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTS_OFFSET))(this, value);
		}

		::System::Void set_EnableSubmitEventsByTutorial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTSBYTUTORIAL_OFFSET))(this, value);
		}

		::InControl::PlayerAction* GetSpecialActionByName(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETSPECIALACTIONBYNAME_OFFSET))(this, actionName);
		}

		::InControl::PlayerAction* GetAdventureActionByName(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETADVENTUREACTIONBYNAME_OFFSET))(this, actionName);
		}

		::InControl::PlayerAction* GetBattleActionByName(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETBATTLEACTIONBYNAME_OFFSET))(this, actionName);
		}

		::InControl::PlayerAction* GetMenuActionByName(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETMENUACTIONBYNAME_OFFSET))(this, actionName);
		}

		::System::Void SetAdventureActionsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETADVENTUREACTIONSENABLE_OFFSET))(this, enable);
		}

		::System::Void SetBattleActionsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETBATTLEACTIONSENABLE_OFFSET))(this, enable);
		}

		::System::Void ResetActionBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETACTIONBINDINGS_OFFSET))(this);
		}

		::System::Void RefreshActionBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_REFRESHACTIONBINDINGS_OFFSET))(this);
		}

		::RPG::Client::InControlActionData* GetInControlActionData(::System::String* actionName)
		{
			return ((::RPG::Client::InControlActionData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLACTIONDATA_OFFSET))(this, actionName);
		}

		::System::Void LockActionInput(::System::Boolean bIsLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUT_OFFSET))(this, bIsLock);
		}

		::System::Void LockActionInputByDebugUI(::System::Boolean bIsLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUTBYDEBUGUI_OFFSET))(this, bIsLock);
		}

		::System::Void TrySetAdventureActionEnable(::System::String* actionName, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETADVENTUREACTIONENABLE_OFFSET))(this, actionName, enable);
		}

		::System::Void TrySetActionEnable(::System::String* actionName, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETACTIONENABLE_OFFSET))(this, actionName, enable);
		}

		::InControl::PlayerAction* TryGetAction(::System::String* actionName)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYGETACTION_OFFSET))(this, actionName);
		}

		::System::Void EnableActionSet(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ENABLEACTIONSET_OFFSET))(this, enable);
		}

		::System::Void TutorialSetActionsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TUTORIALSETACTIONSENABLE_OFFSET))(this, enable);
		}

		::System::Void SetActionWhiteList(::Il2CppArray<::System::String*>* actionNameArray, ::System::Boolean isHideTip)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONWHITELIST_OFFSET))(this, actionNameArray, isHideTip);
		}

		::System::Void SetActionsEnable(::System::Boolean enable, ::System::Boolean setNavigation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONSENABLE_OFFSET))(this, enable, setNavigation);
		}

		::System::Void BlockInputActions(::System::Boolean isBlock, ::Il2CppArray<::System::String*>* actions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKINPUTACTIONS_OFFSET))(this, isBlock, actions);
		}

		::System::Void BlockActionTipAndRespond(::System::Boolean isBlock, ::Il2CppArray<::System::String*>* whiteActionNameArray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKACTIONTIPANDRESPOND_OFFSET))(this, isBlock, whiteActionNameArray);
		}

		::System::Void TopControllerOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TOPCONTROLLERONENTER_OFFSET))(this);
		}

		::System::Void UpdateTouchInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UPDATETOUCHINPUT_OFFSET))(this);
		}

		::System::Void TryExitTopDialogOrPage(::System::Int32 pageStackCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYEXITTOPDIALOGORPAGE_OFFSET))(this, pageStackCount);
		}

		::System::Void OnPlayerTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ONPLAYERTOUCH_OFFSET))(this);
		}

		::System::String* GetInControlKeyString(::System::Int32 keyNum)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLKEYSTRING_OFFSET))(this, keyNum);
		}

		::System::Boolean CheckIsCanCloseMarquee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_CHECKISCANCLOSEMARQUEE_OFFSET))(this);
		}

		::System::Void _InitInControlActionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INITINCONTROLACTIONDATA_OFFSET))(this);
		}

		::System::Void _InitSpecialActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INITSPECIALACTIONS_OFFSET))(this);
		}

		::System::Void _InitAdventureActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INITADVENTUREACTIONS_OFFSET))(this);
		}

		::System::Void _InitBattleActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INITBATTLEACTIONS_OFFSET))(this);
		}

		::System::Void _InitMenuActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INITMENUACTIONS_OFFSET))(this);
		}

		::System::Void _OnLastInputTypeChanged(::InControl::BindingSourceType bindingSourceType, ::InControl::InputDeviceClass inputDeviceClass, ::InControl::InputDeviceStyle inputDeviceStyle)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONLASTINPUTTYPECHANGED_OFFSET))(this, bindingSourceType, inputDeviceClass, inputDeviceStyle);
		}

		::System::Void _InputDeviceClassSwitched()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__INPUTDEVICECLASSSWITCHED_OFFSET))(this);
		}

		::System::Void _RefreshLastDeviceInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEINFO_OFFSET))(this);
		}

		::System::Void _RefreshLastDeviceUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEUI_OFFSET))(this);
		}

		::System::Void _OnApplicationFocusChange(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, args);
		}

		::System::Void _OnKeyBoardLayoutChaneged(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONKEYBOARDLAYOUTCHANEGED_OFFSET))(this, oldCultureInfo, newCultureInfo);
		}

		::InControl::InputControl* _GetInputControl(::InControl::InputControlType inputControlType)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__GETINPUTCONTROL_OFFSET))(this, inputControlType);
		}

		::System::Void _RefreshActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHACTIONS_OFFSET))(this);
		}

		static ::RPG::Client::InControlActionsManager* get_Instance()
		{
			return ((::RPG::Client::InControlActionsManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
