#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::UINavigation { class UINavigationArea; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZoneConfig; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONZONE_ADDCUSTOMINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xAB0F120)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_AWAKE_OFFSET UNITYSDK_OFFSET(0xAB0DA10)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CANENTER_OFFSET UNITYSDK_OFFSET(0xAB0E280)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARCUSTOMINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0F070)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARSELECTED_OFFSET UNITYSDK_OFFSET(0xAB0EEE0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET UNITYSDK_OFFSET(0xAB0E6F0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTER_OFFSET UNITYSDK_OFFSET(0xAB0E4F0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET UNITYSDK_OFFSET(0xAB0DF50)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GETINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0F2A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAB0D8A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_INCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xAB0D8C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0xAB0D990)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0xAB06360)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_HASVALIDSELECTED_OFFSET UNITYSDK_OFFSET(0xAB0E630)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ISTOPZONE_OFFSET UNITYSDK_OFFSET(0xAB0C0D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB0E0E0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDREBUILDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0xAB0BEE0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDUPDATEINCONTROLHINT_OFFSET UNITYSDK_OFFSET(0xAB0AB00)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xAB0DDC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAB0DC30)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0xAB0EE70)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xAB0E090)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SAVESELECTED_OFFSET UNITYSDK_OFFSET(0xAB0ED40)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SETUPINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0EF30)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xAB0D8B0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SHOWRETURNACTIONHINT_OFFSET UNITYSDK_OFFSET(0xAB0F200)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0xAB0FEB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ADDRETURNACTIONHINT_OFFSET UNITYSDK_OFFSET(0xAB0FE20)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET UNITYSDK_OFFSET(0xAB0FCF0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET UNITYSDK_OFFSET(0xAB10000)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__BINDINCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0DAD0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB101D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CHECKSELECTIONINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0xAB0E990)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB100B0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0xAB0E680)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETSELECTEDNAVIGATIONBUTTON_OFFSET UNITYSDK_OFFSET(0xAB0FF40)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xAB0E340)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISINPUTDEVICEMATCH_OFFSET UNITYSDK_OFFSET(0xAB0E470)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDALLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0F340)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDAUTODETECTEDACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0F670)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xAB0F500)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDSELECTEDACTIONHINTS_OFFSET UNITYSDK_OFFSET(0xAB0F980)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REFRESHINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0xAB0E130)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYENTERONENABLE_OFFSET UNITYSDK_OFFSET(0xAB0DCE0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYREBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0xAB0D940)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZone_TypeDefinitionIndex = 41838;

	class UINavigationZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>** StaticGet_AllNavigationZones()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>**)Il2CppClass::FromTypeDefinitionIndex(UINavigationZone_TypeDefinitionIndex)->GetStaticField(0x470A0);
		}
		::RPG::UINavigation::UINavigationZoneConfig* _Config; // 0x18
		::System::Boolean _Active_k__BackingField; // 0x20
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x28
		::UnityEngine::GameObject* _Selected; // 0x30
		::System::Int32 _CurrentZoneIndex; // 0x38
		::System::Boolean _ZoneEnableCalled; // 0x3C
		::System::Boolean _ShouldRebuildInControlAction; // 0x3D
		::System::Boolean _ShouldUpdateInControlHint; // 0x3E
		::RPG::UINavigation::UINavigationArea* _NavigationArea; // 0x40
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

		::System::Void set_Active(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SET_ACTIVE_OFFSET))(this, value);
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

		::System::Void EnterOnGameObjectSelected(::UnityEngine::GameObject* selected)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET))(this, selected);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONREMOVED_OFFSET))(this);
		}

		::System::Boolean HasValidSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_HASVALIDSELECTED_OFFSET))(this);
		}

		::System::Void SetupInControlActionHints(::Il2CppArray<::System::String*>* hintNames)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SETUPINCONTROLACTIONHINTS_OFFSET))(this, hintNames);
		}

		::System::Void ClearCustomInControlActionHints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARCUSTOMINCONTROLACTIONHINTS_OFFSET))(this);
		}

		::System::Void AddCustomInControlActionHint(::Il2CppArray<::System::String*>* hints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ADDCUSTOMINCONTROLACTIONHINT_OFFSET))(this, hints);
		}

		::System::Void ShowReturnActionHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SHOWRETURNACTIONHINT_OFFSET))(this, show);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetInControlActionHints()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GETINCONTROLACTIONHINTS_OFFSET))(this);
		}

		::System::Void SaveSelected(::UnityEngine::GameObject* selected)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_SAVESELECTED_OFFSET))(this, selected);
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

		::System::Void _RebuildSelectedActionHints(::System::Boolean addSubmitActionHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDSELECTEDACTIONHINTS_OFFSET))(this, addSubmitActionHint);
		}

		::System::Void _AddReturnActionHint(::System::Collections::Generic::List_1<::System::String*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ADDRETURNACTIONHINT_OFFSET))(this, result);
		}

		::System::Void _AddActionHint(::RPG::UINavigation::UINavigationInControlAction* action, ::System::Collections::Generic::List_1<::System::String*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationInControlAction*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ADDACTIONHINT_OFFSET))(this, action, result);
		}

		::System::Void _AppendHints(::System::Collections::Generic::List_1<::System::String*>* hints, ::System::Collections::Generic::List_1<::System::String*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET))(this, hints, result);
		}

		::System::Void _AppendHint(::System::String* hint, ::System::Collections::Generic::List_1<::System::String*>* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET))(this, hint, result);
		}

		::RPG::UINavigation::UINavigationButton* _GetSelectedNavigationButton()
		{
			return ((::RPG::UINavigation::UINavigationButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__GETSELECTEDNAVIGATIONBUTTON_OFFSET))(this);
		}

		::System::Boolean _CheckSelectionInControlHints(::UnityEngine::GameObject* selected)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CHECKSELECTIONINCONTROLHINTS_OFFSET))(this, selected);
		}

		::System::Void _BindInControlButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__BINDINCONTROLBUTTON_OFFSET))(this);
		}
	};
}
