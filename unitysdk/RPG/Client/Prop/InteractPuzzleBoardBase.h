#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/PuzzleColliderCastMode.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEMS_OFFSET UNITYSDK_OFFSET(0xC5732A0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0xC56A880)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0xC572370)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARSELECTABLEITEMS_OFFSET UNITYSDK_OFFSET(0xC56A420)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5638E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xC572440)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GET_INTERACTSTART_OFFSET UNITYSDK_OFFSET(0xC573160)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC564AA0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC5723C0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0xC572F10)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xC569610)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xC572850)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xC572A20)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xC572AD0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xC572A70)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xC572B90)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xC572B10)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSY_OFFSET UNITYSDK_OFFSET(0xC572B50)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xC572D90)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xC572E50)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC572CD0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xC56DCD0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xC5699E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xC5708C0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONQUIT_OFFSET UNITYSDK_OFFSET(0xC56C9F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC572C40)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC572BD0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERCONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC565B30)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERMOUSEHOVER_OFFSET UNITYSDK_OFFSET(0xC5666E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMDRAG_OFFSET UNITYSDK_OFFSET(0xC573480)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xC5734C0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_RELEASECONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0xC567A00)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETBOARD3D_OFFSET UNITYSDK_OFFSET(0xC573370)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETPUZZLECOLLIDERCASTMODE_OFFSET UNITYSDK_OFFSET(0xC5733B0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SET_INTERACTSTART_OFFSET UNITYSDK_OFFSET(0xC573170)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATECLICKITEM_OFFSET UNITYSDK_OFFSET(0xC572F60)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATEDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xC573060)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC568190)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USE3DJOYSTICKSELECT_OFFSET UNITYSDK_OFFSET(0xC573440)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USELATEUPDATEINTERACT_OFFSET UNITYSDK_OFFSET(0xC573400)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CASTCOLLIDER2ITEM_OFFSET UNITYSDK_OFFSET(0xC573680)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC573810)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC564580)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__GETBOARDLAYER_OFFSET UNITYSDK_OFFSET(0xC573500)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__ISCOVERBYABOVEUI_OFFSET UNITYSDK_OFFSET(0xC573580)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICKUP_OFFSET UNITYSDK_OFFSET(0xC571920)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICK_OFFSET UNITYSDK_OFFSET(0xC570F50)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xC571320)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGEND_OFFSET UNITYSDK_OFFSET(0xC571CF0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAG_OFFSET UNITYSDK_OFFSET(0xC571620)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONHOVER_OFFSET UNITYSDK_OFFSET(0xC571FB0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTOFF_OFFSET UNITYSDK_OFFSET(0xC573210)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTON_OFFSET UNITYSDK_OFFSET(0xC573180)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC573830)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xC573820)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xC573840)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InteractPuzzleBoardBase_TypeDefinitionIndex = 73133;

	class InteractPuzzleBoardBase : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Single* StaticGet_MIN_DRAG_DISTANCE()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InteractPuzzleBoardBase_TypeDefinitionIndex)->GetStaticField(0x8000);
		}
		::System::Boolean _InteractStart_k__BackingField; // 0x48
		::System::Boolean _IsUILayerBoard; // 0x49
		::RPG::Client::Prop::InteractPuzzleItemBase* _HoverItem; // 0x50
		::RPG::Client::Prop::InteractPuzzleItemBase* _SelectItem; // 0x58
		::UnityEngine::Vector3 _DragStartMousePosition; // 0x60
		::System::Boolean _UseLateUpdateInteract; // 0x6C
		::System::Boolean _IsNeedMouseHover; // 0x6D
		::System::Boolean _IsNeedDragSelectItem; // 0x6E
		::System::Boolean _IsNeedSelectItemUp; // 0x6F
		::System::Boolean _Is3DJoystickSelect; // 0x70
		::RPG::Client::Prop::PuzzleColliderCastMode _PuzzleColliderCastMode; // 0x74
		::UnityEngine::EventSystems::PointerEventData* _Pointer; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _UIRaycastResult; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* _SelectableItems; // 0x88
		::System::Boolean _IsDraggingStart; // 0x90
		::System::Boolean _IsMouseButtonDown; // 0x91
		::System::Boolean _IsPressJoystick; // 0x92
		::System::Int32 _InputToken; // 0x94
		::System::Int32 _ReleaseInputToken; // 0x98
		::System::Int32 _JoystickConfirmToken; // 0x9C
		::System::Int32 _JoystickCancelToken; // 0xA0
		::System::Int32 _JoystickXToken; // 0xA4
		::System::Int32 _JoystickYToken; // 0xA8
		::System::Int32 _JoystickMenuOptionToken; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONQUIT_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONFINISH_OFFSET))(this);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONPUZZLEINTERACTUPDATE_OFFSET))(this, a1);
		}

		::System::Void ClearInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARINTERACTSTATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GETNEXTITEMBYDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerJoystickInput(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, a1, a2);
		}

		::System::Void OnControllerJoystickRelease()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKRELEASE_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void OnControllerPressX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSX_OFFSET))(this);
		}

		::System::Void OnControllerPressY()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSY_OFFSET))(this);
		}

		::System::Void OnControllerPressMenu()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENU_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEM_OFFSET))(this, a1);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEMUP_OFFSET))(this, a1);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMBEGIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMEND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::System::Void SimulateClickItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATECLICKITEM_OFFSET))(this, a1, a2);
		}

		::System::Void SimulateDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATEDRAGGINGITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_InteractStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GET_INTERACTSTART_OFFSET))(this);
		}

		::System::Void set_InteractStart(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SET_INTERACTSTART_OFFSET))(this, a1);
		}

		::System::Void _UIPuzzleCommonSetInteractOn(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTON_OFFSET))(this, a1);
		}

		::System::Void _UIPuzzleCommonSetInteractOff(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTOFF_OFFSET))(this, a1);
		}

		::System::Void AddSelectableItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEM_OFFSET))(this, a1);
		}

		::System::Void AddSelectableItems(::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEMS_OFFSET))(this, a1);
		}

		::System::Void ClearSelectableItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARSELECTABLEITEMS_OFFSET))(this);
		}

		::System::Void SetBoard3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETBOARD3D_OFFSET))(this);
		}

		::System::Void SetPuzzleColliderCastMode(::RPG::Client::Prop::PuzzleColliderCastMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleColliderCastMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETPUZZLECOLLIDERCASTMODE_OFFSET))(this, a1);
		}

		::System::Void UseLateUpdateInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USELATEUPDATEINTERACT_OFFSET))(this);
		}

		::System::Void Use3DJoystickSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USE3DJOYSTICKSELECT_OFFSET))(this);
		}

		::System::Void RegisterMouseHover()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERMOUSEHOVER_OFFSET))(this);
		}

		::System::Void RegisterSelectItemDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMDRAG_OFFSET))(this);
		}

		::System::Void RegisterSelectItemUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMUP_OFFSET))(this);
		}

		::System::Void RegisterControllerJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERCONTROLLERJOYSTICK_OFFSET))(this);
		}

		::System::Void ReleaseControllerJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_RELEASECONTROLLERJOYSTICK_OFFSET))(this);
		}

		::System::Int32 _GetBoardLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__GETBOARDLAYER_OFFSET))(this);
		}

		::System::Boolean _IsCoverByAboveUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__ISCOVERBYABOVEUI_OFFSET))(this);
		}

		::System::Void _ProcessOnHover(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONHOVER_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessOnClick(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICK_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessOnClickUp(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICKUP_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessOnDrag(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessOnDragBegin(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGBEGIN_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessOnDragEnd(::UnityEngine::Vector3 a1, ::UnityEngine::Ray a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGEND_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* _CastCollider2Item(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CASTCOLLIDER2ITEM_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}
	};
}
