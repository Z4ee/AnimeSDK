#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZoneConfig; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONZONE_ADDCUSTOMINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xCFCAF40)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_AWAKE_OFFSET UNITYSDK_OFFSET(0xCFC9640)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CANENTER_OFFSET UNITYSDK_OFFSET(0xCFC9F00)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARCUSTOMINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCAE90)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARSELECTED_OFFSET UNITYSDK_OFFSET(0xCFC5110)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET UNITYSDK_OFFSET(0xCFCA480)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTER_OFFSET UNITYSDK_OFFSET(0xCFCA170)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET UNITYSDK_OFFSET(0xCFC9BD0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GETINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCB0C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xCFC9450)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_INCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xCFC9550)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0xCFC9620)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xCFBC990)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ISTOPZONE_OFFSET UNITYSDK_OFFSET(0xCFC6B30)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCFC9D60)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDREBUILDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xCFBD040)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDUPDATEINCONTROLHINT_OFFSET UNITYSDK_OFFSET(0xCFC2FF0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCFC9A30)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC9840)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0xCFCAC70)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xCFC9D10)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SAVESELECTED_OFFSET UNITYSDK_OFFSET(0xCFCAB90)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SETUPINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCACE0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xCFC9460)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SHOWRETURNACTIONHINT_OFFSET UNITYSDK_OFFSET(0xCFCB020)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0xCFCBE50)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ADDRETURNACTIONHINT_OFFSET UNITYSDK_OFFSET(0xCFCB9C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET UNITYSDK_OFFSET(0xCFCB8A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET UNITYSDK_OFFSET(0xCFCBEE0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__BINDINCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0xCFC9700)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFCC280)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CHECKSELECTIONINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0xCFCA780)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__COLLECTACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCBA50)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCC160)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xCFCA410)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETSELECTEDNAVIGATIONBUTTON_OFFSET UNITYSDK_OFFSET(0xCFCBD90)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__HANDLEENTEREXITONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xCFCC0A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__HASVALIDSELECTED_OFFSET UNITYSDK_OFFSET(0xCFCA3C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xCFC9FC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISINPUTDEVICEMATCH_OFFSET UNITYSDK_OFFSET(0xCFCA0F0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__MARKSHOULDUPDATENAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0xCFCC030)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0xCFC94F0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDALLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCB160)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDAUTODETECTEDACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCB520)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xCFCB320)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDSELECTEDACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xCFCB640)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REFRESHINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xCFC9DB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYENTERONENABLE_OFFSET UNITYSDK_OFFSET(0xCFC9950)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYREBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xCFC95D0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZone_TypeDefinitionIndex = 48424;

	class UINavigationZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>** StaticGet_AllNavigationZones()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>**)Il2CppClass::FromTypeDefinitionIndex(UINavigationZone_TypeDefinitionIndex)->GetStaticField(0x5A60);
		}
		::System::Boolean _Active; // 0x18
		::RPG::UINavigation::UINavigationZoneConfig* _Config; // 0x20
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x28
		::UnityEngine::GameObject* _Selected; // 0x30
		::System::Int32 _CurrentZoneIndex; // 0x38
		::System::Boolean _ZoneEnableCalled; // 0x3C
		::System::Boolean _ShouldRebuildInControlAction; // 0x3D
		::System::Boolean _ShouldUpdateInControlHint; // 0x3E
		::RPG::UINavigation::UINavigation* _Navigation; // 0x40
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _InControlActions; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _CustomActionHints; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* _AutoDetectedActionHints; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* _SelectedActionHints; // 0x60
		::System::Collections::Generic::List_1<::System::String*>* _AllActionHints; // 0x68
		::System::Boolean _HasOverride; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _OverrideActionHints; // 0x78
		::System::Boolean _ShowReturnActionHint; // 0x80
		::System::Boolean _EnterOnEnableCalled; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CCTOR_OFFSET))();
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ACTIVE_OFFSET))(this);
		}

		::System::Void set_Active(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SET_ACTIVE_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationZoneManager* get_ZoneManager()
		{
			return ((::RPG::UINavigation::UINavigationZoneManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ZONEMANAGER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* get_InControlActions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GET_INCONTROLACTIONS_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_Selected()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GET_SELECTED_OFFSET))(this);
		}

		::System::Boolean IsTopZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ISTOPZONE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_LATEUPDATE_OFFSET))(this);
		}

		::System::Boolean CanEnter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_CANENTER_OFFSET))(this);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ENTER_OFFSET))(this);
		}

		::System::Void EnterOnGameObjectSelected(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONREMOVED_OFFSET))(this);
		}

		::System::Void SetupInControlActionHints(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SETUPINCONTROLACTIONHINTS_OFFSET))(this, a1);
		}

		::System::Void ClearCustomInControlActionHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARCUSTOMINCONTROLACTIONHINTS_OFFSET))(this);
		}

		::System::Void AddCustomInControlActionHint(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ADDCUSTOMINCONTROLACTIONHINT_OFFSET))(this, a1);
		}

		::System::Void ShowReturnActionHint(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SHOWRETURNACTIONHINT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetInControlActionHints()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GETINCONTROLACTIONHINTS_OFFSET))(this);
		}

		::System::Void SaveSelected(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SAVESELECTED_OFFSET))(this, a1);
		}

		::System::Void ClearSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARSELECTED_OFFSET))(this);
		}

		::System::Void MarkShouldRebuildInControlAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDREBUILDINCONTROLACTION_OFFSET))(this);
		}

		::System::Void MarkShouldUpdateInControlHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDUPDATEINCONTROLHINT_OFFSET))(this);
		}

		::System::Boolean _IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ISFOCUSED_OFFSET))(this);
		}

		::System::Boolean _IsInputDeviceMatch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ISINPUTDEVICEMATCH_OFFSET))(this);
		}

		::System::Void _RefreshInControlActionHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REFRESHINCONTROLACTIONHINT_OFFSET))(this);
		}

		::System::Boolean _HasValidSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__HASVALIDSELECTED_OFFSET))(this);
		}

		::UnityEngine::GameObject* _GetFirstSelectable()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__GETFIRSTSELECTABLE_OFFSET))(this);
		}

		::System::Void _TryEnterOnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__TRYENTERONENABLE_OFFSET))(this);
		}

		::System::Void _TryRebuildInControlActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__TRYREBUILDINCONTROLACTIONS_OFFSET))(this);
		}

		::System::Void _RebuildInControlActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDINCONTROLACTIONS_OFFSET))(this);
		}

		::System::Void _RebuildAllActionHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDALLACTIONHINTS_OFFSET))(this);
		}

		::System::Boolean _RebuildAutoDetectedActionHints()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDAUTODETECTEDACTIONHINTS_OFFSET))(this);
		}

		::System::Void _RebuildSelectedActionHints(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDSELECTEDACTIONHINTS_OFFSET))(this, a1);
		}

		::System::Boolean _CollectActionHints(::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__COLLECTACTIONHINTS_OFFSET))(this, a1, a2);
		}

		::System::Void _AddReturnActionHint(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ADDRETURNACTIONHINT_OFFSET))(this, a1);
		}

		::System::Void _AddActionHint(::RPG::UINavigation::UINavigationInControlAction* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ADDACTIONHINT_OFFSET))(this, a1, a2);
		}

		::System::Void _AppendHints(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET))(this, a1, a2);
		}

		::System::Void _AppendHint(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET))(this, a1, a2);
		}

		::RPG::UINavigation::UINavigationButton* _GetSelectedNavigationButton()
		{
			return ((::RPG::UINavigation::UINavigationButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__GETSELECTEDNAVIGATIONBUTTON_OFFSET))(this);
		}

		::System::Boolean _CheckSelectionInControlHints(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CHECKSELECTIONINCONTROLHINTS_OFFSET))(this, a1);
		}

		::System::Void _BindInControlButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__BINDINCONTROLBUTTON_OFFSET))(this);
		}

		::System::Void _OnActiveChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ONACTIVECHANGED_OFFSET))(this, a1);
		}

		::System::Void _MarkShouldUpdateNavigationZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__MARKSHOULDUPDATENAVIGATIONZONE_OFFSET))(this);
		}

		::System::Void _HandleEnterExitOnActiveChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__HANDLEENTEREXITONACTIVECHANGED_OFFSET))(this, a1);
		}
	};
}
