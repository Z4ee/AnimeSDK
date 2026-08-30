#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/InControlTipType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class InControlActionData; }
namespace RPG::Client { class LocalizedText; }
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

#define RPG_CLIENT_MONOINCONTROLTIP_ADDLONGPRESSPROGRESSEVENT_OFFSET UNITYSDK_OFFSET(0xD83C8C0)
#define RPG_CLIENT_MONOINCONTROLTIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xD83C0A0)
#define RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSPROGRESSEVENT_OFFSET UNITYSDK_OFFSET(0xD83CBF0)
#define RPG_CLIENT_MONOINCONTROLTIP_CLEARLONGPRESSVIEW_OFFSET UNITYSDK_OFFSET(0xD83DC40)
#define RPG_CLIENT_MONOINCONTROLTIP_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD83D150)
#define RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIPBYSELECTED_OFFSET UNITYSDK_OFFSET(0xD83DA50)
#define RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0xD83D9E0)
#define RPG_CLIENT_MONOINCONTROLTIP_GET__ISSHOWTIPINTERNAL_OFFSET UNITYSDK_OFFSET(0xD83D9F0)
#define RPG_CLIENT_MONOINCONTROLTIP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD83CA30)
#define RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLKEY_OFFSET UNITYSDK_OFFSET(0xD83DB10)
#define RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLTIPKEY_OFFSET UNITYSDK_OFFSET(0xD83B2D0)
#define RPG_CLIENT_MONOINCONTROLTIP_SETISSUPPORTHOTSWITCH_OFFSET UNITYSDK_OFFSET(0xD83DBF0)
#define RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIPBYSELECTED_OFFSET UNITYSDK_OFFSET(0xD83DA60)
#define RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIP_OFFSET UNITYSDK_OFFSET(0xD83A5A0)
#define RPG_CLIENT_MONOINCONTROLTIP_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD83D0F0)
#define RPG_CLIENT_MONOINCONTROLTIP_UPDATE_OFFSET UNITYSDK_OFFSET(0xD83D4F0)
#define RPG_CLIENT_MONOINCONTROLTIP__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD83C720)
#define RPG_CLIENT_MONOINCONTROLTIP__CCTOR_OFFSET UNITYSDK_OFFSET(0xD840500)
#define RPG_CLIENT_MONOINCONTROLTIP__CLEAR_OFFSET UNITYSDK_OFFSET(0xD83CA80)
#define RPG_CLIENT_MONOINCONTROLTIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD8403E0)
#define RPG_CLIENT_MONOINCONTROLTIP__GETCONTROLLERTIPICON_OFFSET UNITYSDK_OFFSET(0xD840140)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLGROUPTIPICON_OFFSET UNITYSDK_OFFSET(0xD83F830)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICONBYACTION_OFFSET UNITYSDK_OFFSET(0xD83E8C0)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICON_OFFSET UNITYSDK_OFFSET(0xD83F760)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTEXTID_OFFSET UNITYSDK_OFFSET(0xD83E960)
#define RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTYPE_OFFSET UNITYSDK_OFFSET(0xD83D7E0)
#define RPG_CLIENT_MONOINCONTROLTIP__GETMOUSETIPICON_OFFSET UNITYSDK_OFFSET(0xD840230)
#define RPG_CLIENT_MONOINCONTROLTIP__HIDEPARENTNODE_OFFSET UNITYSDK_OFFSET(0xD83E520)
#define RPG_CLIENT_MONOINCONTROLTIP__INITACTIONGROUPPREFABOBJECT_OFFSET UNITYSDK_OFFSET(0xD83F010)
#define RPG_CLIENT_MONOINCONTROLTIP__INITACTIONPREFABOBJECT_OFFSET UNITYSDK_OFFSET(0xD83E2E0)
#define RPG_CLIENT_MONOINCONTROLTIP__INITUINODE_OFFSET UNITYSDK_OFFSET(0xD83EA40)
#define RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONGROUPLOAD_OFFSET UNITYSDK_OFFSET(0xD83FE50)
#define RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONLOAD_OFFSET UNITYSDK_OFFSET(0xD83ED20)
#define RPG_CLIENT_MONOINCONTROLTIP__ONIHIDEINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0xD83D4A0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTACTIONWHITELISTCHANGED_OFFSET UNITYSDK_OFFSET(0xD83D2F0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xD83E100)
#define RPG_CLIENT_MONOINCONTROLTIP__ONINPUTFILEDSELECTEDCHANGED_OFFSET UNITYSDK_OFFSET(0xD83D1B0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONKEYBOARDLAYOUTCHANGED_OFFSET UNITYSDK_OFFSET(0xD840320)
#define RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSING_OFFSET UNITYSDK_OFFSET(0xD83DCA0)
#define RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSRELEASE_OFFSET UNITYSDK_OFFSET(0xD83DF20)
#define RPG_CLIENT_MONOINCONTROLTIP__ONREFRESHINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0xD83E0B0)
#define RPG_CLIENT_MONOINCONTROLTIP__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xD83CF50)
#define RPG_CLIENT_MONOINCONTROLTIP__RESETLONGPRESSING_OFFSET UNITYSDK_OFFSET(0xD83CE00)
#define RPG_CLIENT_MONOINCONTROLTIP__SHOWPARENTNODE_OFFSET UNITYSDK_OFFSET(0xD83E830)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFORAND_OFFSET UNITYSDK_OFFSET(0xD83FC90)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETACTIONLISTFOROR_OFFSET UNITYSDK_OFFSET(0xD83F6C0)
#define RPG_CLIENT_MONOINCONTROLTIP__TRYGETINCONTROLACTIONDATABYGROUP_OFFSET UNITYSDK_OFFSET(0xD83FD30)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD83E160)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONCALLBACK_OFFSET UNITYSDK_OFFSET(0xD83E5B0)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xD83F260)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUP_OFFSET UNITYSDK_OFFSET(0xD83E290)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTION_OFFSET UNITYSDK_OFFSET(0xD83E1E0)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYICONPATH_OFFSET UNITYSDK_OFFSET(0xD83FB60)
#define RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIP_OFFSET UNITYSDK_OFFSET(0xD83C230)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlTip_TypeDefinitionIndex = 61439;

	class MonoInControlTip : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlTipUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlTip_TypeDefinitionIndex)->GetStaticField(0x85D0);
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
		::RPG::Client::LocalizedText* _DescText; // 0x50
		::System::Boolean _EnableAutoHide; // 0x58
		::UnityEngine::GameObject* _PrefabObject; // 0x60
		::System::String* _PrefabName; // 0x68
		::System::String* _PrefabPath; // 0x70
		::RPG::Client::IAssetOperation* _AssetOperation; // 0x78
		::UnityEngine::Transform* _KeyMapInfo; // 0x80
		::UnityEngine::Transform* _ImgMarkInfo; // 0x88
		::UnityEngine::Transform* _NodePressProgress; // 0x90
		::UnityEngine::Transform* _ExtendPanel; // 0x98
		::UnityEngine::Transform* _ExtendAddMark; // 0xA0
		::UnityEngine::Transform* _ExtendKeyMapInfo; // 0xA8
		::UnityEngine::Transform* _ExtendImgMarkInfo; // 0xB0
		::UnityEngine::UI::Image* _ExtendImage; // 0xB8
		::UnityEngine::UI::Text* _ExtendText; // 0xC0
		::UnityEngine::UI::Image* _Image; // 0xC8
		::UnityEngine::UI::SmoothMask* _PressProgress; // 0xD0
		::UnityEngine::UI::Text* _Text; // 0xD8
		::System::Boolean _IsBottom; // 0xE0
		::System::Boolean _IsSupportHotSwitch; // 0xE1
		::System::Boolean _IsShowTip; // 0xE2
		::System::Boolean _IsShowTipBackup; // 0xE3
		::System::Boolean _IsShowTipBySelected; // 0xE4
		::RPG::Client::UIContextAssetLoader* _AssetLoader; // 0xE8
		::RPG::Client::UIController* _Controller; // 0xF0
		::RPG::Client::MonoInControlEvent* _MonoInControlEvent; // 0xF8
		::System::Collections::Generic::HashSet_1<::System::String*>* _BlockActionWhilte; // 0x100
		::System::String* _Enter_Chat_Action_Name; // 0x108
		::System::Int32 _KeyboardLayoutType; // 0x110
		::System::Boolean _IsKeyboardLayoutSwitched; // 0x114
		::RPG::Client::InControlTipType _CurInControlTipType; // 0x118

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

		::System::Void _ResetLongPressing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__RESETLONGPRESSING_OFFSET))(this);
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

		::System::Void _OnInputFiledSelectedChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTFILEDSELECTEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnInputActionWhiteListChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTACTIONWHITELISTCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnIHideInControlTip(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONIHIDEINCONTROLTIP_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_IsShowTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIP_OFFSET))(this);
		}

		::System::Void set_IsShowTip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowTipBySelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET_ISSHOWTIPBYSELECTED_OFFSET))(this);
		}

		::System::Void set_IsShowTipBySelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SET_ISSHOWTIPBYSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get__IsShowTipInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_GET__ISSHOWTIPINTERNAL_OFFSET))(this);
		}

		::System::Void SetInControlTipKey(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLTIPKEY_OFFSET))(this, a1, a2);
		}

		::System::Void SetInControlKey(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETINCONTROLKEY_OFFSET))(this, a1, a2);
		}

		::System::Void SetIsSupportHotSwitch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP_SETISSUPPORTHOTSWITCH_OFFSET))(this, a1);
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

		::System::Void _OnLongPressing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSING_OFFSET))(this, a1);
		}

		::System::Void _OnLongPressRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONLONGPRESSRELEASE_OFFSET))(this);
		}

		::System::Void _OnRefreshInControlTip(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONREFRESHINCONTROLTIP_OFFSET))(this, a1);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _UpdateInControlTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIP_OFFSET))(this);
		}

		::System::Void _UpdateDescText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEDESCTEXT_OFFSET))(this, a1);
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

		::System::Boolean _OnAsyncActionLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONLOAD_OFFSET))(this, a1);
		}

		::System::Void _UpdateInControlTipByActionGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUP_OFFSET))(this);
		}

		::System::Void _UpdateInControlTipByActionGroupCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYACTIONGROUPCALLBACK_OFFSET))(this);
		}

		::System::Void _UpdateInControlTipByIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__UPDATEINCONTROLTIPBYICONPATH_OFFSET))(this, a1);
		}

		::System::Void _InitActionGroupPrefabObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__INITACTIONGROUPPREFABOBJECT_OFFSET))(this);
		}

		::System::Boolean _OnAsyncActionGroupLoad(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONASYNCACTIONGROUPLOAD_OFFSET))(this, a1);
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

		::System::String* _GetInControlTipIcon(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICON_OFFSET))(this, a1);
		}

		::System::String* _GetInControlGroupTipIcon(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLGROUPTIPICON_OFFSET))(this, a1);
		}

		::System::String* _GetInControlTipIconByAction(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPICONBYACTION_OFFSET))(this, a1);
		}

		::RPG::Client::InControlTipType _GetInControlTipType()
		{
			return ((::RPG::Client::InControlTipType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETINCONTROLTIPTYPE_OFFSET))(this);
		}

		::System::String* _GetMouseTipIcon(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETMOUSETIPICON_OFFSET))(this, a1);
		}

		::System::String* _GetControllerTipIcon(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__GETCONTROLLERTIPICON_OFFSET))(this, a1);
		}

		::System::Void _OnKeyboardLayoutChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLTIP__ONKEYBOARDLAYOUTCHANGED_OFFSET))(this, a1);
		}
	};
}
