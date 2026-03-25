#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/InControlTipType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class InControlActionData; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlEvent; }
namespace RPG::Client { class UIContextAssetLoader; }
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MONOINCONTROLTIP_ADDLONGPRESSPROGRESSEVENT_OFFSET UNITYSDK_OFFSET(0x9D0E750)
#define RPG_CLIENT_MONOINCONTROLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0x9D0E0E0)
#define RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSPROGRESSEVENT_OFFSET UNITYSDK_OFFSET(0x9D0EA50)
#define RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSVIEW_OFFSET UNITYSDK_OFFSET(0x9D0FA40)
#define RPG_CLIENT_MONOINCONTROLTIP_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D0ED30)
#define RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIPBYSELECTED_OFFSET UNITYSDK_OFFSET(0x9D0F7D0)
#define RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0x9D0F760)
#define RPG_CLIENT_MONOINCONTROLTIP_GET__ISSHOWTIPINTERNAL_OFFSET UNITYSDK_OFFSET(0x9D0F770)
#define RPG_CLIENT_MONOINCONTROLTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D0E890)
#define RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLKEY_OFFSET UNITYSDK_OFFSET(0x9D0F910)
#define RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLTIPKEY_OFFSET UNITYSDK_OFFSET(0x9D0F890)
#define RPG_CLIENT_MONOINCONTROLTIP_SETISSUPPORTHOTSWITCH_OFFSET UNITYSDK_OFFSET(0x9D0F9F0)
#define RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIPBYSELECTED_OFFSET UNITYSDK_OFFSET(0x9D0F7E0)
#define RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0x9D0C370)
#define RPG_CLIENT_MONOINCONTROLTIP_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D0ECD0)
#define RPG_CLIENT_MONOINCONTROLTIP_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D0F210)
#define RPG_CLIENT_MONOINCONTROLTIP__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D0E610)
#define RPG_CLIENT_MONOINCONTROLTIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D11FC0)
#define RPG_CLIENT_MONOINCONTROLTIP__CLEAR_OFFSET UNITYSDK_OFFSET(0x9D0E8E0)
#define RPG_CLIENT_MONOINCONTROLTIP__CTOR_OFFSET UNITYSDK_OFFSET(0x9D11ED0)
#define RPG_CLIENT_MONOINCONTROLTIP__GETCONTROLLERTIPICON_OFFSET UNITYSDK_OFFSET(0x9D11C70)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLGROUPTIPICON_OFFSET UNITYSDK_OFFSET(0x9D11720)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICONBYACTION_OFFSET UNITYSDK_OFFSET(0x9D10690)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICON_OFFSET UNITYSDK_OFFSET(0x9D11490)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTEXTID_OFFSET UNITYSDK_OFFSET(0x9D10720)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTYPE_OFFSET UNITYSDK_OFFSET(0x9D0F560)
#define RPG_CLIENT_MONOINCONTROLTIP__GETMOUSETIPICON_OFFSET UNITYSDK_OFFSET(0x9D11D40)
#define RPG_CLIENT_MONOINCONTROLTIP__HIDEPARENTNODE_OFFSET UNITYSDK_OFFSET(0x9D10320)
#define RPG_CLIENT_MONOINCONTROLTIP__INITACTIONGROUPPREFABOBJECT_OFFSET UNITYSDK_OFFSET(0x9D10D10)
#define RPG_CLIENT_MONOINCONTROLTIP__INITACTIONPREFABOBJECT_OFFSET UNITYSDK_OFFSET(0x9D100F0)
#define RPG_CLIENT_MONOINCONTROLTIP__INITUINODE_OFFSET UNITYSDK_OFFSET(0x9D10800)
#define RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONGROUPLOAD_OFFSET UNITYSDK_OFFSET(0x9D11A40)
#define RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONLOAD_OFFSET UNITYSDK_OFFSET(0x9D10AE0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONIHIDEINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0x9D0F1C0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTACTIONWHITELISTCHANGED_OFFSET UNITYSDK_OFFSET(0x9D0EF70)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0x9D0FFB0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTFILEDSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0x9D0ED90)
#define RPG_CLIENT_MONOINCONTROLTIP__ONKEYBOARDLAYOUTCHANGED_OFFSET UNITYSDK_OFFSET(0x9D11E10)
#define RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSING_OFFSET UNITYSDK_OFFSET(0x9D0FAA0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSRELEASE_OFFSET UNITYSDK_OFFSET(0x9D0FD70)
#define RPG_CLIENT_MONOINCONTROLTIP__ONREFRESHINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0x9D0FF60)
#define RPG_CLIENT_MONOINCONTROLTIP__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9D0EB90)
#define RPG_CLIENT_MONOINCONTROLTIP__SHOWPARENTNODE_OFFSET UNITYSDK_OFFSET(0x9D10600)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFORAND_OFFSET UNITYSDK_OFFSET(0x9D11560)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFOROR_OFFSET UNITYSDK_OFFSET(0x9D113F0)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETINCONTROLACTIONDATABYGROUP_OFFSET UNITYSDK_OFFSET(0x9D11600)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D103B0)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x9D10F50)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUP_OFFSET UNITYSDK_OFFSET(0x9D100A0)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTION_OFFSET UNITYSDK_OFFSET(0x9D10010)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0x9D0E250)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlTip_TypeDefinitionIndex = 49749;

	class MonoInControlTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlTipUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlTip_TypeDefinitionIndex)->GetStaticField(0x11360);
		}
		::System::String* Key; // 0x18
		::System::Boolean MouseTipEnable; // 0x20
		::System::Boolean KeyboardTipEnable; // 0x21
		::System::Boolean ControllerTipEnable; // 0x22
		::UnityEngine::GameObject* NeedHideNode; // 0x28
		::UnityEngine::GameObject* NeedShowNode; // 0x30
		::RPG::Client::LongPressEvent* LongPressEvent; // 0x38
		::System::Boolean LongPressProgressEnable; // 0x40
		::RPG::Client::MonoInControlButton* MonoInControlButton; // 0x48
		::System::Boolean _EnableAutoHide; // 0x50
		::UnityEngine::GameObject* _PrefabObject; // 0x58
		::System::String* _PrefabName; // 0x60
		::System::String* _PrefabPath; // 0x68
		::RPG::Client::IAssetOperation* _AssetOperation; // 0x70
		::UnityEngine::Transform* _KeyMapInfo; // 0x78
		::UnityEngine::Transform* _ImgMarkInfo; // 0x80
		::UnityEngine::Transform* _NodePressProgress; // 0x88
		::UnityEngine::Transform* _ExtendPanel; // 0x90
		::UnityEngine::Transform* _ExtendAddMark; // 0x98
		::UnityEngine::Transform* _ExtendKeyMapInfo; // 0xA0
		::UnityEngine::Transform* _ExtendImgMarkInfo; // 0xA8
		::UnityEngine::UI::Image* _ExtendImage; // 0xB0
		::UnityEngine::UI::Text* _ExtendText; // 0xB8
		::UnityEngine::UI::Image* _Image; // 0xC0
		::UnityEngine::UI::SmoothMask* _PressProgress; // 0xC8
		::UnityEngine::UI::Text* _Text; // 0xD0
		::System::Boolean _IsBottom; // 0xD8
		::System::Boolean _IsSupportHotSwitch; // 0xD9
		::System::Boolean _IsShowTip; // 0xDA
		::System::Boolean _IsShowTipBackup; // 0xDB
		::System::Boolean _IsShowTipBySelected; // 0xDC
		::RPG::Client::UIContextAssetLoader* _AssetLoader; // 0xE0
		::RPG::Client::UIController* _Controller; // 0xE8
		::RPG::Client::MonoInControlEvent* _MonoInControlEvent; // 0xF0
		::System::Collections::Generic::HashSet_1<::System::String*>* _BlockActionWhilte; // 0xF8
		::System::String* _Enter_Chat_Action_Name; // 0x100
		::System::Int32 _KeyboardLayoutType; // 0x108
		::System::Boolean _IsKeyboardLayoutSwitched; // 0x10C
		::RPG::Client::InControlTipType _CurInControlTipType; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__CLEAR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_DESPAWNED_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnInputFiledSelectedChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTFILEDSELECTEDCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnInputActionWhiteListChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTACTIONWHITELISTCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnIHideInControlTip(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONIHIDEINCONTROLTIP_OFFSET))(this, arg);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsShowTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIP_OFFSET))(this);
		}

		::System::Void set_IsShowTip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIP_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowTipBySelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIPBYSELECTED_OFFSET))(this);
		}

		::System::Void set_IsShowTipBySelected(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIPBYSELECTED_OFFSET))(this, value);
		}

		::System::Boolean get__IsShowTipInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET__ISSHOWTIPINTERNAL_OFFSET))(this);
		}

		::System::Void SetInControlTipKey(::System::String* actionName, ::System::Boolean isBottom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLTIPKEY_OFFSET))(this, actionName, isBottom);
		}

		::System::Void SetInControlKey(::System::String* key, ::System::Boolean isBottom)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLKEY_OFFSET))(this, key, isBottom);
		}

		::System::Void SetIsSupportHotSwitch(::System::Boolean isSupport)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETISSUPPORTHOTSWITCH_OFFSET))(this, isSupport);
		}

		::System::Void AddLongPressProgressEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_ADDLONGPRESSPROGRESSEVENT_OFFSET))(this);
		}

		::System::Void ClearLongPressProgressEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSPROGRESSEVENT_OFFSET))(this);
		}

		::System::Void ClearLongPressView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSVIEW_OFFSET))(this);
		}

		::System::Void _OnLongPressing(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSING_OFFSET))(this, value);
		}

		::System::Void _OnLongPressRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSRELEASE_OFFSET))(this);
		}

		::System::Void _OnRefreshInControlTip(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONREFRESHINCONTROLTIP_OFFSET))(this, arg);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, arg);
		}

		::System::Void _UpdateInControlTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIP_OFFSET))(this);
		}

		::System::Void _UpdateInControlTipByAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTION_OFFSET))(this);
		}

		::System::Void _UpdateInControlTipByActionCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONCALLBACK_OFFSET))(this);
		}

		::System::Void _InitActionPrefabObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__INITACTIONPREFABOBJECT_OFFSET))(this);
		}

		::System::Boolean _OnAsyncActionLoad(::RPG::Client::IAssetOperation* operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONLOAD_OFFSET))(this, operation);
		}

		::System::Void _UpdateInControlTipByActionGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUP_OFFSET))(this);
		}

		::System::Void _UpdateInControlTipByActionGroupCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUPCALLBACK_OFFSET))(this);
		}

		::System::Void _InitActionGroupPrefabObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__INITACTIONGROUPPREFABOBJECT_OFFSET))(this);
		}

		::System::Boolean _OnAsyncActionGroupLoad(::RPG::Client::IAssetOperation* operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONGROUPLOAD_OFFSET))(this, operation);
		}

		::System::Void _InitUINode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__INITUINODE_OFFSET))(this);
		}

		::System::Void _ShowParentNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__SHOWPARENTNODE_OFFSET))(this);
		}

		::System::Void _HideParentNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__HIDEPARENTNODE_OFFSET))(this);
		}

		::RPG::Client::TextID _GetInControlTipTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTEXTID_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* _TryGetActionListForOr()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFOROR_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* _TryGetActionListForAnd()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFORAND_OFFSET))(this);
		}

		::RPG::Client::InControlActionData* _TryGetInControlActionDataByGroup()
		{
			return ((::RPG::Client::InControlActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__TRYGETINCONTROLACTIONDATABYGROUP_OFFSET))(this);
		}

		::System::String* _GetInControlTipIcon(::System::String* tipAction)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICON_OFFSET))(this, tipAction);
		}

		::System::String* _GetInControlGroupTipIcon(::System::String* actionGroupName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLGROUPTIPICON_OFFSET))(this, actionGroupName);
		}

		::System::String* _GetInControlTipIconByAction(::System::String* actionName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICONBYACTION_OFFSET))(this, actionName);
		}

		::RPG::Client::InControlTipType _GetInControlTipType()
		{
			return ((::RPG::Client::InControlTipType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTYPE_OFFSET))(this);
		}

		::System::String* _GetMouseTipIcon(::System::String* actionName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETMOUSETIPICON_OFFSET))(this, actionName);
		}

		::System::String* _GetControllerTipIcon(::System::String* actionName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETCONTROLLERTIPICON_OFFSET))(this, actionName);
		}

		::System::Void _OnKeyboardLayoutChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONKEYBOARDLAYOUTCHANGED_OFFSET))(this, arg);
		}
	};
}
