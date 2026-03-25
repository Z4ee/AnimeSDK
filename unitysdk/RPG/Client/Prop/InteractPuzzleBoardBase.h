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

#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEMS_OFFSET UNITYSDK_OFFSET(0xA0ADB20)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEM_OFFSET UNITYSDK_OFFSET(0xA0A5560)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0xA0ACBE0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARSELECTABLEITEMS_OFFSET UNITYSDK_OFFSET(0xA0A5120)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA09F120)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GETNEXTITEMBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xA0ACCB0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GET_INTERACTSTART_OFFSET UNITYSDK_OFFSET(0xA0AD9E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0A0300)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0ACC30)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTYUP_OFFSET UNITYSDK_OFFSET(0xA0AD790)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xA0A4350)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKINPUT_OFFSET UNITYSDK_OFFSET(0xA0AD0D0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKRELEASE_OFFSET UNITYSDK_OFFSET(0xA0AD2A0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0xA0AD350)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0xA0AD2F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSMENU_OFFSET UNITYSDK_OFFSET(0xA0AD410)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSX_OFFSET UNITYSDK_OFFSET(0xA0AD390)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERPRESSY_OFFSET UNITYSDK_OFFSET(0xA0AD3D0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMBEGIN_OFFSET UNITYSDK_OFFSET(0xA0AD610)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMEND_OFFSET UNITYSDK_OFFSET(0xA0AD6D0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xA0AD550)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONFINISH_OFFSET UNITYSDK_OFFSET(0xA0A87D0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xA0A4710)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONPUZZLEINTERACTUPDATE_OFFSET UNITYSDK_OFFSET(0xA0AB0F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONQUIT_OFFSET UNITYSDK_OFFSET(0xA0A7560)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xA0AD4C0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xA0AD450)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERCONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0xA0A1160)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERMOUSEHOVER_OFFSET UNITYSDK_OFFSET(0xA0A16D0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMDRAG_OFFSET UNITYSDK_OFFSET(0xA0ADD40)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_REGISTERSELECTITEMUP_OFFSET UNITYSDK_OFFSET(0xA0ADD80)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_RELEASECONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0xA0A28B0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETBOARD3D_OFFSET UNITYSDK_OFFSET(0xA0ADC30)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETPUZZLECOLLIDERCASTMODE_OFFSET UNITYSDK_OFFSET(0xA0ADC70)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SET_INTERACTSTART_OFFSET UNITYSDK_OFFSET(0xA0AD9F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATECLICKITEM_OFFSET UNITYSDK_OFFSET(0xA0AD7E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATEDRAGGINGITEM_OFFSET UNITYSDK_OFFSET(0xA0AD8E0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0A3030)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USE3DJOYSTICKSELECT_OFFSET UNITYSDK_OFFSET(0xA0ADD00)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_USELATEUPDATEINTERACT_OFFSET UNITYSDK_OFFSET(0xA0ADCC0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CASTCOLLIDER2ITEM_OFFSET UNITYSDK_OFFSET(0xA0ADF20)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0xA0AE0B0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA09FE20)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__GETBOARDLAYER_OFFSET UNITYSDK_OFFSET(0xA0ADDC0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__ISCOVERBYABOVEUI_OFFSET UNITYSDK_OFFSET(0xA0ADE40)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICKUP_OFFSET UNITYSDK_OFFSET(0xA0AC180)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICK_OFFSET UNITYSDK_OFFSET(0xA0AB780)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGBEGIN_OFFSET UNITYSDK_OFFSET(0xA0ABB60)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGEND_OFFSET UNITYSDK_OFFSET(0xA0AC560)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAG_OFFSET UNITYSDK_OFFSET(0xA0ABE70)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONHOVER_OFFSET UNITYSDK_OFFSET(0xA0AC820)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTOFF_OFFSET UNITYSDK_OFFSET(0xA0ADA90)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTON_OFFSET UNITYSDK_OFFSET(0xA0ADA00)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0AE100)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0AE0F0)
#define RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xA0AE110)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InteractPuzzleBoardBase_TypeDefinitionIndex = 64064;

	class InteractPuzzleBoardBase : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		static ::System::Single* StaticGet_MIN_DRAG_DISTANCE()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(InteractPuzzleBoardBase_TypeDefinitionIndex)->GetStaticField(0x8750);
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

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* owner, ::RPG::GameCore::TaskContext* context, ::RPG::GameCore::PropInitPuzzle* puzzleConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_INITPUZZLE_OFFSET))(this, owner, context, puzzleConfig);
		}

		::System::Void OnQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONQUIT_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONFINISH_OFFSET))(this);
		}

		::System::Void OnPuzzleInteractUpdate(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONPUZZLEINTERACTUPDATE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void ClearInteractState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARINTERACTSTATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdatePuzzle(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_LATEUPDATEPUZZLE_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* GetNextItemByDirection(::RPG::Client::Prop::InteractPuzzleItemBase* centerItem, ::UnityEngine::Vector3 dir)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GETNEXTITEMBYDIRECTION_OFFSET))(this, centerItem, dir);
		}

		::System::Void OnControllerJoystickInput(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCONTROLLERJOYSTICKINPUT_OFFSET))(this, x, y);
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

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONHOVERITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Void OnSelectItem(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEM_OFFSET))(this, item);
		}

		::System::Void OnSelectItemUp(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONSELECTITEMUP_OFFSET))(this, item);
		}

		::System::Void OnDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEM_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnDraggingItemBegin(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMBEGIN_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnDraggingItemEnd(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::Vector3 hitPosition)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONDRAGGINGITEMEND_OFFSET))(this, item, mousePosition, hitPosition);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnClickEmptyUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ONCLICKEMPTYUP_OFFSET))(this);
		}

		::System::Void SimulateClickItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATECLICKITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Void SimulateDraggingItem(::RPG::Client::Prop::InteractPuzzleItemBase* item, ::System::Boolean isJoyStickSelect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SIMULATEDRAGGINGITEM_OFFSET))(this, item, isJoyStickSelect);
		}

		::System::Boolean get_InteractStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_GET_INTERACTSTART_OFFSET))(this);
		}

		::System::Void set_InteractStart(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SET_INTERACTSTART_OFFSET))(this, value);
		}

		::System::Void _UIPuzzleCommonSetInteractOn(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTON_OFFSET))(this, obj);
		}

		::System::Void _UIPuzzleCommonSetInteractOff(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__UIPUZZLECOMMONSETINTERACTOFF_OFFSET))(this, obj);
		}

		::System::Void AddSelectableItem(::RPG::Client::Prop::InteractPuzzleItemBase* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEM_OFFSET))(this, item);
		}

		::System::Void AddSelectableItems(::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InteractPuzzleItemBase*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_ADDSELECTABLEITEMS_OFFSET))(this, items);
		}

		::System::Void ClearSelectableItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_CLEARSELECTABLEITEMS_OFFSET))(this);
		}

		::System::Void SetBoard3D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETBOARD3D_OFFSET))(this);
		}

		::System::Void SetPuzzleColliderCastMode(::RPG::Client::Prop::PuzzleColliderCastMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleColliderCastMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE_SETPUZZLECOLLIDERCASTMODE_OFFSET))(this, mode);
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

		::System::Void _ProcessOnHover(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONHOVER_OFFSET))(this, mousePosition, ray);
		}

		::System::Void _ProcessOnClick(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICK_OFFSET))(this, mousePosition, ray);
		}

		::System::Void _ProcessOnClickUp(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONCLICKUP_OFFSET))(this, mousePosition, ray);
		}

		::System::Void _ProcessOnDrag(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAG_OFFSET))(this, mousePosition, ray);
		}

		::System::Void _ProcessOnDragBegin(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGBEGIN_OFFSET))(this, mousePosition, ray);
		}

		::System::Void _ProcessOnDragEnd(::UnityEngine::Vector3 mousePosition, ::UnityEngine::Ray ray)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__PROCESSONDRAGEND_OFFSET))(this, mousePosition, ray);
		}

		::RPG::Client::Prop::InteractPuzzleItemBase* _CastCollider2Item(::UnityEngine::Collider* collider)
		{
			return ((::RPG::Client::Prop::InteractPuzzleItemBase*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE__CASTCOLLIDER2ITEM_OFFSET))(this, collider);
		}

		::System::Void __iFixBaseProxy_InitPuzzle(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TaskContext* P1, ::RPG::GameCore::PropInitPuzzle* P2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_INITPUZZLE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdatePuzzle(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INTERACTPUZZLEBOARDBASE___IFIXBASEPROXY_LATEUPDATEPUZZLE_OFFSET))(this, P0);
		}
	};
}
