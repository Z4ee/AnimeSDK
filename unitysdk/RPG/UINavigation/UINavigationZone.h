#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/UINavigation/UINavigationZone_OccupiedHint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::UINavigation { class UINavigation; }
namespace RPG::UINavigation { class UINavigationButton; }
namespace RPG::UINavigation { class UINavigationInControlAction; }
namespace RPG::UINavigation { class UINavigationZoneConfig; }
namespace RPG::UINavigation { class UINavigationZoneManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }

#define RPG_UINAVIGATION_UINAVIGATIONZONE_ADDCUSTOMINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0x1B51DAB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B51C4C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CANENTER_OFFSET UNITYSDK_OFFSET(0x1B51CEB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARCUSTOMINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0x1B51DA20)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_CLEARSELECTED_OFFSET UNITYSDK_OFFSET(0x1B517B80)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET UNITYSDK_OFFSET(0x1B51D3D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ENTER_OFFSET UNITYSDK_OFFSET(0x1B51D110)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET UNITYSDK_OFFSET(0x1B51CB30)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GETINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0x1B51DC20)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B50F2A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ALLNAVIGATIONZONES_OFFSET UNITYSDK_OFFSET(0x1B50FD40)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_INCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0x1B51C320)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_SELECTED_OFFSET UNITYSDK_OFFSET(0x1B517B40)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B50F200)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ISMANAGERFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B519970)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ISTOPZONE_OFFSET UNITYSDK_OFFSET(0x1B50EA60)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B51CD00)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDREBUILDINCONTROLACTION_OFFSET UNITYSDK_OFFSET(0x1B50FDA0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_MARKSHOULDUPDATEINCONTROLHINT_OFFSET UNITYSDK_OFFSET(0x1B5159A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B51C6F0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B51C990)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B51C800)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B51CBB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_ONZONEREMOVED_OFFSET UNITYSDK_OFFSET(0x1B51D820)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SAVESELECTED_OFFSET UNITYSDK_OFFSET(0x1B51D7D0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SETUPINCONTROLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0x1B51D890)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1B51C1C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE_SHOWRETURNACTIONHINT_OFFSET UNITYSDK_OFFSET(0x1B51DBA0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET UNITYSDK_OFFSET(0x1B51E310)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET UNITYSDK_OFFSET(0x1B51EA70)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDSORTEDACTIONHINTS_OFFSET UNITYSDK_OFFSET(0x1B51E440)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__BINDINCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x1B51C5C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B51F0C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CHECKSELECTIONINCONTROLHINTS_OFFSET UNITYSDK_OFFSET(0x1B51D4C0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CLASSIFYSHORTCUT_OFFSET UNITYSDK_OFFSET(0x1B51EB70)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B51EFC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ENTERWITHOUTSELECTION_OFFSET UNITYSDK_OFFSET(0x1B51D370)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETENTERINCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x1B51ED50)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETFIRSTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1B51D2A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__GETSELECTEDNAVIGATIONBUTTON_OFFSET UNITYSDK_OFFSET(0x1B51E7E0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__HANDLEENTEREXITONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x1B51EEC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__HASVALIDSELECTED_OFFSET UNITYSDK_OFFSET(0x1B51D250)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISINPUTDEVICEMATCH_OFFSET UNITYSDK_OFFSET(0x1B51D090)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ISOWNERFOCUSED_OFFSET UNITYSDK_OFFSET(0x1B51C440)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__MARKSHOULDUPDATENAVIGATIONZONE_OFFSET UNITYSDK_OFFSET(0x1B51EE10)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x1B51C250)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDALLACTIONHINTS_OFFSET UNITYSDK_OFFSET(0x1B51DCC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0x1B51DEB0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__REFRESHINCONTROLACTIONHINT_OFFSET UNITYSDK_OFFSET(0x1B51CDC0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYAPPENDBUTTONSUBMITFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B51E850)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYAPPENDRETURNFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B51E9A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYENTERONENABLE_OFFSET UNITYSDK_OFFSET(0x1B51C910)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYREBUILDINCONTROLACTIONS_OFFSET UNITYSDK_OFFSET(0x1B51C3A0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__TRYUPDATEZONEMANAGER_OFFSET UNITYSDK_OFFSET(0x1B51C2B0)
#define RPG_UINAVIGATION_UINAVIGATIONZONE__UNBINDINCONTROLBUTTON_OFFSET UNITYSDK_OFFSET(0x1B51C740)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationZone_TypeDefinitionIndex = 52041;

	class UINavigationZone : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>** StaticGet__AllNavigationZones()
		{
			return (::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationZone*>**)Il2CppClass::FromTypeDefinitionIndex(UINavigationZone_TypeDefinitionIndex)->GetStaticField(0x31010);
		}
		// static const ::System::String* _RETURN_ACTION_HINT_NAME; // 0x0
		::System::Boolean _Active; // 0x18
		::RPG::UINavigation::UINavigationZoneConfig* _Config; // 0x20
		::RPG::UINavigation::UINavigationZoneManager* _ZoneManager; // 0x28
		::System::Boolean _ShouldUpdateZoneManager; // 0x30
		::UnityEngine::GameObject* _Selected; // 0x38
		::System::Int32 _CurrentZoneIndex; // 0x40
		::System::Boolean _IsZoneEnabled; // 0x44
		::RPG::UINavigation::UINavigation* _Navigation; // 0x48
		::System::Boolean _EnterOnEnableCalled; // 0x50
		::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* _InControlActions; // 0x58
		::System::Boolean _ShouldRebuildInControlAction; // 0x60
		::System::Boolean _ShouldUpdateInControlHint; // 0x61
		::System::Collections::Generic::List_1<::System::String*>* _CustomActionHints; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* _AllActionHints; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _TempSortedHints; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* _OverrideActionHints; // 0x80
		::System::Boolean _HasOverride; // 0x88
		::System::Boolean _ShowReturnActionHint; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::UINavigation::UINavigationZone*>* get_AllNavigationZones()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::UINavigation::UINavigationZone*>*(*)())((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_GET_ALLNAVIGATIONZONES_OFFSET))();
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

		::System::Boolean IsManagerFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ISMANAGERFOCUSED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONDESTROY_OFFSET))(this);
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

		::System::Void _EnterWithoutSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ENTERWITHOUTSELECTION_OFFSET))(this);
		}

		::System::Void EnterOnGameObjectSelected(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ENTERONGAMEOBJECTSELECTED_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_EXIT_OFFSET))(this);
		}

		::System::Void OnZoneRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE_ONZONEREMOVED_OFFSET))(this);
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

		::System::Void _TryUpdateZoneManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__TRYUPDATEZONEMANAGER_OFFSET))(this);
		}

		::System::Boolean _IsOwnerFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__ISOWNERFOCUSED_OFFSET))(this);
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

		::System::Void _TryAppendButtonSubmitFallback(::RPG::UINavigation::UINavigationButton* a1, ::RPG::UINavigation::UINavigationZone_OccupiedHint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationButton*, ::RPG::UINavigation::UINavigationZone_OccupiedHint))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__TRYAPPENDBUTTONSUBMITFALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _TryAppendReturnFallback(::RPG::UINavigation::UINavigationZone_OccupiedHint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::UINavigation::UINavigationZone_OccupiedHint))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__TRYAPPENDRETURNFALLBACK_OFFSET))(this, a1);
		}

		::RPG::UINavigation::UINavigationZone_OccupiedHint _AppendSortedActionHints(::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::RPG::UINavigation::UINavigationZone_OccupiedHint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::UINavigation::UINavigationInControlAction*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDSORTEDACTIONHINTS_OFFSET))(this, a1, a2);
		}

		static ::RPG::UINavigation::UINavigationZone_OccupiedHint _ClassifyShortcut(::RPG::UINavigation::UINavigationInControlAction* a1)
		{
			return ((::RPG::UINavigation::UINavigationZone_OccupiedHint(*)(::RPG::UINavigation::UINavigationInControlAction*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__CLASSIFYSHORTCUT_OFFSET))(a1);
		}

		static ::System::Void _AppendHints(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINTS_OFFSET))(a1, a2);
		}

		static ::System::Void _AppendHint(::System::String* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__APPENDHINT_OFFSET))(a1, a2);
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

		::System::Void _UnbindInControlButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__UNBINDINCONTROLBUTTON_OFFSET))(this);
		}

		::UnityEngine::UI::Button* _GetEnterInControlButton()
		{
			return ((::UnityEngine::UI::Button*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONZONE__GETENTERINCONTROLBUTTON_OFFSET))(this);
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
