#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/RPG/GameCore/ShortCutWheelGotoType.h"
#include "unitysdk/RPG/GameCore/WheelItemType.h"
#include "unitysdk/System/Object.h"

class Class_1_2DC11B40D5B2411E;
class Class_3_1F78364A7A605FE7;
class Class_3_1F78364A7A605FE7_1;
class Class_3_1F78364A7A605FE7_2;
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

#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKACTIONTIPANDRESPOND_OFFSET UNITYSDK_OFFSET(0xBD351C0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0xBD34880)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_BUTTONVALIDTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xBD30570)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_CHECKISCANCLOSEMARQUEE_OFFSET UNITYSDK_OFFSET(0xBD35AC0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD309A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ELLIPSIS_OFFSET UNITYSDK_OFFSET(0xBD30400)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ENABLEACTIONSET_OFFSET UNITYSDK_OFFSET(0xBD339D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETADVENTUREACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0xBD32EC0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETBATTLEACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0xBD32F80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLACTIONDATA_OFFSET UNITYSDK_OFFSET(0xBD2ED90)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLKEYSTRING_OFFSET UNITYSDK_OFFSET(0xBD35A30)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETLITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0xBD324A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETMENUACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0xBD2E370)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GETSPECIALACTIONBYNAME_OFFSET UNITYSDK_OFFSET(0xBD32E00)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ADVENTUREACTIONS_OFFSET UNITYSDK_OFFSET(0xBD32790)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BATTLEACTIONS_OFFSET UNITYSDK_OFFSET(0xBD327A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BLOCKACTIONWHILTE_OFFSET UNITYSDK_OFFSET(0xBD327D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_CURLONGPRESSEVENT_OFFSET UNITYSDK_OFFSET(0xBD32710)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INCONTROLINPUTEVENTENABLED_OFFSET UNITYSDK_OFFSET(0xBD32680)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INITCONFIGDATAREADY_OFFSET UNITYSDK_OFFSET(0xBD32530)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBD365E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCKBYTASK_OFFSET UNITYSDK_OFFSET(0xBD32670)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xBD32610)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0xBD32540)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINLONGPRESSING_OFFSET UNITYSDK_OFFSET(0xBD326A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINPUTFILEDSELECTED_OFFSET UNITYSDK_OFFSET(0xBD32550)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_JOYSTICKACTIONNAMES_OFFSET UNITYSDK_OFFSET(0xBD327C0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_KEYBOARDLAYOUTTYPE_OFFSET UNITYSDK_OFFSET(0xBD327E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTBINDINGSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xBD32730)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICECLASS_OFFSET UNITYSDK_OFFSET(0xBD32760)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_LASTINPUTDEVICESTYLE_OFFSET UNITYSDK_OFFSET(0xBD32770)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_MENUACTIONS_OFFSET UNITYSDK_OFFSET(0xBD327B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_SPECIALACTIONS_OFFSET UNITYSDK_OFFSET(0xBD32780)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDELITTLEWHEELITEM_OFFSET UNITYSDK_OFFSET(0xBD32750)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_TUTORIALGUIDEWHEELITEM_OFFSET UNITYSDK_OFFSET(0xBD32740)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_INITONDATAREADY_OFFSET UNITYSDK_OFFSET(0xBD30FF0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xBD30D00)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISCONTROLLERINPUT_OFFSET UNITYSDK_OFFSET(0xBD30220)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISLITTLEWHEELITEMBLOCK_OFFSET UNITYSDK_OFFSET(0xBD32350)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISTEXTPROOPEN_OFFSET UNITYSDK_OFFSET(0xBD304B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELITEMBLOCK_OFFSET UNITYSDK_OFFSET(0xBD322E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELLOCKED_OFFSET UNITYSDK_OFFSET(0xBD323C0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUTBYDEBUGUI_OFFSET UNITYSDK_OFFSET(0xBD33450)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUT_OFFSET UNITYSDK_OFFSET(0xBD33270)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKWHEELITEMWITHWHITELIST_OFFSET UNITYSDK_OFFSET(0xBD32140)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_NOLEADINGCHARS_OFFSET UNITYSDK_OFFSET(0xBD30350)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_ONPLAYERTOUCH_OFFSET UNITYSDK_OFFSET(0xBD35800)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_OVERRIDELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0xBD32400)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_REFRESHACTIONBINDINGS_OFFSET UNITYSDK_OFFSET(0xBD331F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_REGISTERWHEELITEMSELECTLISTENER_OFFSET UNITYSDK_OFFSET(0xBD32200)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETACTIONBINDINGS_OFFSET UNITYSDK_OFFSET(0xBD33160)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETLITTLEWHEELSELECTCONFIGTODEFAULT_OFFSET UNITYSDK_OFFSET(0xBD32450)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0xBD34810)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONWHITELIST_OFFSET UNITYSDK_OFFSET(0xBD34560)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETADVENTUREACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0xBD33040)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETBATTLEACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0xBD330D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETDROPDOWNSHOW_OFFSET UNITYSDK_OFFSET(0xBD30270)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETNAVIGATIONEVENTSENABLE_OFFSET UNITYSDK_OFFSET(0xBD31E80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SETSUBMITEVENTSENABLE_OFFSET UNITYSDK_OFFSET(0xBD31FE0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_CURLONGPRESSEVENT_OFFSET UNITYSDK_OFFSET(0xBD32720)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTSBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBD32980)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTS_OFFSET UNITYSDK_OFFSET(0xBD327F0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTSBYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xBD32C80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTS_OFFSET UNITYSDK_OFFSET(0xBD32B00)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_INCONTROLINPUTEVENTENABLED_OFFSET UNITYSDK_OFFSET(0xBD32690)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINLONGPRESSING_OFFSET UNITYSDK_OFFSET(0xBD326B0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINPUTFILEDSELECTED_OFFSET UNITYSDK_OFFSET(0xBD32560)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_SHAREDRAGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xBD30510)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TOPCONTROLLERONENTER_OFFSET UNITYSDK_OFFSET(0xBD35320)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYEXITTOPDIALOGORPAGE_OFFSET UNITYSDK_OFFSET(0xBD35570)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYGETACTION_OFFSET UNITYSDK_OFFSET(0xBD33770)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETACTIONENABLE_OFFSET UNITYSDK_OFFSET(0xBD33700)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETADVENTUREACTIONENABLE_OFFSET UNITYSDK_OFFSET(0xBD33630)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_TUTORIALSETACTIONSENABLE_OFFSET UNITYSDK_OFFSET(0xBD33C90)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UNLOCKWHEELITEM_OFFSET UNITYSDK_OFFSET(0xBD321A0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UNREGISTERWHEELITEMSELECTLISTENER_OFFSET UNITYSDK_OFFSET(0xBD32250)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER_UPDATETOUCHINPUT_OFFSET UNITYSDK_OFFSET(0xBD353E0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD36610)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xBD305D0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__GETINPUTCONTROL_OFFSET UNITYSDK_OFFSET(0xBD35CE0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITADVENTUREACTIONS_OFFSET UNITYSDK_OFFSET(0xBD31A80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITBATTLEACTIONS_OFFSET UNITYSDK_OFFSET(0xBD31B90)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITINCONTROLACTIONDATA_OFFSET UNITYSDK_OFFSET(0xBD31710)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITMENUACTIONS_OFFSET UNITYSDK_OFFSET(0xBD31CA0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INITSPECIALACTIONS_OFFSET UNITYSDK_OFFSET(0xBD31970)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__INPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xBD35890)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONAPPLICATIONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xBD36240)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONKEYBOARDLAYOUTCHANEGED_OFFSET UNITYSDK_OFFSET(0xBD36550)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0xBD35F80)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHACTIONS_OFFSET UNITYSDK_OFFSET(0xBD33CF0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEINFO_OFFSET UNITYSDK_OFFSET(0xBD31DB0)
#define RPG_CLIENT_INCONTROLACTIONSMANAGER__REFRESHLASTDEVICEUI_OFFSET UNITYSDK_OFFSET(0xBD360A0)

namespace RPG::Client
{
	inline static constexpr unsigned int InControlActionsManager_TypeDefinitionIndex = 57305;

	class InControlActionsManager : public ::System::Object
	{
	public:
		static ::Class_1_2DC11B40D5B2411E** StaticGet_s_InControlAudioManager()
		{
			return (::Class_1_2DC11B40D5B2411E**)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0x43AC0);
		}
		static ::System::Single* StaticGet_DragThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0xC020);
		}
		static ::System::Single* StaticGet_PressValidPadingThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0xC024);
		}
		static ::System::Single* StaticGet_PressValidThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InControlActionsManager_TypeDefinitionIndex)->GetStaticField(0xC028);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::InControlActionData*>* _InControlActionDataDic; // 0x10
		::RPG::Client::LittleWheelSelectConfig* _OverrideConfig; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* _BlockActionWhilte; // 0x20
		::Class_3_1F78364A7A605FE7* _BattleActions; // 0x28
		::Class_3_1F78364A7A605FE7_1* _SpecialActions; // 0x30
		::Class_3_1F78364A7A605FE7_2* _MenuActions; // 0x38
		::RPG::Client::LongPressEvent* _CurLongPressEvent; // 0x40
		::RPG::Client::PlayerAdventureActions* _AdventureActions; // 0x48
		::Il2CppArray<::System::UInt32>* _CloseMarqueeInputControlType; // 0x50
		::System::Collections::Generic::HashSet_1<::System::String*>* _JoyStickActionNames; // 0x58
		::System::Action* _OnWheelItemSelectCallback; // 0x60
		::System::Boolean _IsWheelLocked; // 0x68
		::System::Boolean _EnableNavigationEventsByTutorial; // 0x69
		::System::Boolean _IsBlockByTask; // 0x6A
		::System::Boolean _IsInLongPressing; // 0x6B
		::InControl::BindingSourceType _LastBindingSourceType; // 0x6C
		::System::Boolean _InControlInputEventEnabled; // 0x70
		::System::Boolean _InitConfigDataReady; // 0x71
		::System::Boolean _EnableSubmitEvents; // 0x72
		::System::Boolean _IsBlockByTutorial; // 0x73
		::RPG::GameCore::ShortCutWheelGotoType _AllowLittleWheelItem; // 0x74
		::InControl::InputDeviceClass _LastInputDeviceClass; // 0x78
		::InControl::InputDeviceStyle _LastInputDeviceStyle; // 0x7C
		::RPG::GameCore::WheelItemType _AllowWheelItem; // 0x80
		::System::UInt32 _DebugUIBlockID; // 0x84
		::System::Boolean _IsInputFiledSelected; // 0x88
		::System::Boolean _EnableSubmitEventsByTutorial; // 0x89
		::System::Boolean _EnableNavigationEvents; // 0x8A
		::System::Boolean _IsDropdownShow; // 0x8B
		::System::UInt32 _BlockID; // 0x8C
		::System::Int32 _KeyboardLayoutType; // 0x90

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

		::System::Void SetDropdownShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETDROPDOWNSHOW_OFFSET))(this, a1);
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

		::System::Void SetNavigationEventsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETNAVIGATIONEVENTSENABLE_OFFSET))(this, a1);
		}

		::System::Void SetSubmitEventsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETSUBMITEVENTSENABLE_OFFSET))(this, a1);
		}

		::System::Void LockWheelItemWithWhiteList(::RPG::GameCore::WheelItemType a1, ::RPG::GameCore::ShortCutWheelGotoType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::WheelItemType, ::RPG::GameCore::ShortCutWheelGotoType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKWHEELITEMWITHWHITELIST_OFFSET))(this, a1, a2);
		}

		::System::Void UnlockWheelItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UNLOCKWHEELITEM_OFFSET))(this);
		}

		::System::Void RegisterWheelItemSelectListener(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_REGISTERWHEELITEMSELECTLISTENER_OFFSET))(this, a1);
		}

		::System::Void UnregisterWheelItemSelectListener(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UNREGISTERWHEELITEMSELECTLISTENER_OFFSET))(this, a1);
		}

		::System::Boolean IsWheelItemBlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELITEMBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsLittleWheelItemBlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISLITTLEWHEELITEMBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsWheelLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ISWHEELLOCKED_OFFSET))(this);
		}

		::System::Void OverrideLittleWheelSelectConfig(::RPG::Client::LittleWheelSelectConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleWheelSelectConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_OVERRIDELITTLEWHEELSELECTCONFIG_OFFSET))(this, a1);
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

		::System::Void set_IsInputFiledSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINPUTFILEDSELECTED_OFFSET))(this, a1);
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

		::System::Void set_InControlInputEventEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_INCONTROLINPUTEVENTENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLongPressing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ISINLONGPRESSING_OFFSET))(this);
		}

		::System::Void set_IsInLongPressing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ISINLONGPRESSING_OFFSET))(this, a1);
		}

		::RPG::Client::LongPressEvent* get_CurLongPressEvent()
		{
			return ((::RPG::Client::LongPressEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_CURLONGPRESSEVENT_OFFSET))(this);
		}

		::System::Void set_CurLongPressEvent(::RPG::Client::LongPressEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LongPressEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_CURLONGPRESSEVENT_OFFSET))(this, a1);
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

		::Class_3_1F78364A7A605FE7_1* get_SpecialActions()
		{
			return ((::Class_3_1F78364A7A605FE7_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_SPECIALACTIONS_OFFSET))(this);
		}

		::RPG::Client::PlayerAdventureActions* get_AdventureActions()
		{
			return ((::RPG::Client::PlayerAdventureActions*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_ADVENTUREACTIONS_OFFSET))(this);
		}

		::Class_3_1F78364A7A605FE7* get_BattleActions()
		{
			return ((::Class_3_1F78364A7A605FE7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_BATTLEACTIONS_OFFSET))(this);
		}

		::Class_3_1F78364A7A605FE7_2* get_MenuActions()
		{
			return ((::Class_3_1F78364A7A605FE7_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GET_MENUACTIONS_OFFSET))(this);
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

		::System::Void set_EnableNavigationEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTS_OFFSET))(this, a1);
		}

		::System::Void set_EnableNavigationEventsByTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLENAVIGATIONEVENTSBYTUTORIAL_OFFSET))(this, a1);
		}

		::System::Void set_EnableSubmitEvents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTS_OFFSET))(this, a1);
		}

		::System::Void set_EnableSubmitEventsByTutorial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SET_ENABLESUBMITEVENTSBYTUTORIAL_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* GetSpecialActionByName(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETSPECIALACTIONBYNAME_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* GetAdventureActionByName(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETADVENTUREACTIONBYNAME_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* GetBattleActionByName(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETBATTLEACTIONBYNAME_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* GetMenuActionByName(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETMENUACTIONBYNAME_OFFSET))(this, a1);
		}

		::System::Void SetAdventureActionsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETADVENTUREACTIONSENABLE_OFFSET))(this, a1);
		}

		::System::Void SetBattleActionsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETBATTLEACTIONSENABLE_OFFSET))(this, a1);
		}

		::System::Void ResetActionBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_RESETACTIONBINDINGS_OFFSET))(this);
		}

		::System::Void RefreshActionBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_REFRESHACTIONBINDINGS_OFFSET))(this);
		}

		::RPG::Client::InControlActionData* GetInControlActionData(::System::String* a1)
		{
			return ((::RPG::Client::InControlActionData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLACTIONDATA_OFFSET))(this, a1);
		}

		::System::Void LockActionInput(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUT_OFFSET))(this, a1);
		}

		::System::Void LockActionInputByDebugUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_LOCKACTIONINPUTBYDEBUGUI_OFFSET))(this, a1);
		}

		::System::Void TrySetAdventureActionEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETADVENTUREACTIONENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void TrySetActionEnable(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYSETACTIONENABLE_OFFSET))(this, a1, a2);
		}

		::InControl::PlayerAction* TryGetAction(::System::String* a1)
		{
			return ((::InControl::PlayerAction*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYGETACTION_OFFSET))(this, a1);
		}

		::System::Void EnableActionSet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ENABLEACTIONSET_OFFSET))(this, a1);
		}

		::System::Void TutorialSetActionsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TUTORIALSETACTIONSENABLE_OFFSET))(this, a1);
		}

		::System::Void SetActionWhiteList(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONWHITELIST_OFFSET))(this, a1, a2);
		}

		::System::Void SetActionsEnable(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_SETACTIONSENABLE_OFFSET))(this, a1, a2);
		}

		::System::Void BlockInputActions(::System::Boolean a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKINPUTACTIONS_OFFSET))(this, a1, a2);
		}

		::System::Void BlockActionTipAndRespond(::System::Boolean a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_BLOCKACTIONTIPANDRESPOND_OFFSET))(this, a1, a2);
		}

		::System::Void TopControllerOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TOPCONTROLLERONENTER_OFFSET))(this);
		}

		::System::Void UpdateTouchInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_UPDATETOUCHINPUT_OFFSET))(this);
		}

		::System::Void TryExitTopDialogOrPage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_TRYEXITTOPDIALOGORPAGE_OFFSET))(this, a1);
		}

		::System::Void OnPlayerTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_ONPLAYERTOUCH_OFFSET))(this);
		}

		::System::String* GetInControlKeyString(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER_GETINCONTROLKEYSTRING_OFFSET))(this, a1);
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

		::System::Void _OnLastInputTypeChanged(::InControl::BindingSourceType a1, ::InControl::InputDeviceClass a2, ::InControl::InputDeviceStyle a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::BindingSourceType, ::InControl::InputDeviceClass, ::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONLASTINPUTTYPECHANGED_OFFSET))(this, a1, a2, a3);
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

		::System::Void _OnApplicationFocusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONAPPLICATIONFOCUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnKeyBoardLayoutChaneged(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__ONKEYBOARDLAYOUTCHANEGED_OFFSET))(this, a1, a2);
		}

		::InControl::InputControl* _GetInputControl(::InControl::InputControlType a1)
		{
			return ((::InControl::InputControl*(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_INCONTROLACTIONSMANAGER__GETINPUTCONTROL_OFFSET))(this, a1);
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
