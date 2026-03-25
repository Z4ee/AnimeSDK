#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackController_AlleyJoyStickState.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackController_AlleyPackInputPosParam.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ADBD657143C0767D;
class Class_1_D8E694D5C120D13C;
class Class_1_E93F0AA2D7EA238D;
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackConfig; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipCollisionComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackShipData; }
namespace RPG::Client::ActivityAlley { class ClientAlleyPlacingShip; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDALLEYGOOD_OFFSET UNITYSDK_OFFSET(0x8EE17F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDALLEYPACKSHIP_OFFSET UNITYSDK_OFFSET(0x8EE1190)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDUIAREA_OFFSET UNITYSDK_OFFSET(0x8EE9160)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_BEGINDRAGTARGET_OFFSET UNITYSDK_OFFSET(0x8EE5760)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CANCELSETTLECURGOOD_OFFSET UNITYSDK_OFFSET(0x8EE72E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARDRAGMOUSEPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x8ED9EB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARMATCHANI_OFFSET UNITYSDK_OFFSET(0x8EE0C70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARSHIP_OFFSET UNITYSDK_OFFSET(0x8EE1290)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARUIAREA_OFFSET UNITYSDK_OFFSET(0x8EE91D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_COMBINEGOOD_OFFSET UNITYSDK_OFFSET(0x8EDFFB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8EE6CC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x8EE4720)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETALLEYPLACINGSHIPINFO_OFFSET UNITYSDK_OFFSET(0x8EE1C70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETINTERSECTADJUSTYPOS_OFFSET UNITYSDK_OFFSET(0x8EDE3E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETINTERSECTBOUND_OFFSET UNITYSDK_OFFSET(0x8EE38F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_ALLGOODDATADICT_OFFSET UNITYSDK_OFFSET(0x8EE24B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURALLEYPACKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8EE9360)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURGROUPDATA_OFFSET UNITYSDK_OFFSET(0x8EDB0B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x8EE6AC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_SHIPDATA_OFFSET UNITYSDK_OFFSET(0x8EE24A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x8EE6AE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ISINSELECTGROUP_OFFSET UNITYSDK_OFFSET(0x8EE3AF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_LATETICK_OFFSET UNITYSDK_OFFSET(0x8EE2FF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8EE6FA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REGISTERGOODOPERATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE9070)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REMOVECURGOOD_OFFSET UNITYSDK_OFFSET(0x8EE4C10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REMOVESHIP_OFFSET UNITYSDK_OFFSET(0x8EE1710)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_RESETCURSORPOS_OFFSET UNITYSDK_OFFSET(0x8EE9240)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ROTATECURGOOD_OFFSET UNITYSDK_OFFSET(0x8EE4D40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ROTATESHIP_OFFSET UNITYSDK_OFFSET(0x8EE8D20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SELECTGOOD_OFFSET UNITYSDK_OFFSET(0x8EE65F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SETLAYERRECURSIVE_OFFSET UNITYSDK_OFFSET(0x8EE24C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SETTLEGOOD_OFFSET UNITYSDK_OFFSET(0x8EE0B90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SET_CURALLEYPACKCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8EE9370)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SET_CURJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x8EE6AD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SHOWFINISHORDEREFFECT_OFFSET UNITYSDK_OFFSET(0x8EE27C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SWITCHJOYSTICKSTATE_OFFSET UNITYSDK_OFFSET(0x8EE6930)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SWITCHSELECTTARGET_OFFSET UNITYSDK_OFFSET(0x8EE5420)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x8EE2CF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYAUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x8EE7A20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYENDDRAG_OFFSET UNITYSDK_OFFSET(0x8EE79D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYSHOWMATCHANI_OFFSET UNITYSDK_OFFSET(0x8EE7510)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UNSELECTCURGOOD_OFFSET UNITYSDK_OFFSET(0x8EE4890)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UPDATEDRAGMOUSEPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x8ED9F10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8EE6F10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADDALLEYPACKCMPT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE1410)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADDALLEYPACKGOODDATA_OFFSET UNITYSDK_OFFSET(0x8EE1910)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADJUSTPOSFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x8EE1AD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CANCELSETTLEGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE7350)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CHECKGOODCANSETTLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE46A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__COMBINEGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE6FF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE9920)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DECOMBINEGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE8830)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DISPOSEALLEYPACKCMPTCONTAINER_OFFSET UNITYSDK_OFFSET(0x8EE2290)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DISPOSEALLEYPACKGRID_OFFSET UNITYSDK_OFFSET(0x8EE2380)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__GETCURMOUSEHOVERCMPT_OFFSET UNITYSDK_OFFSET(0x8EE55A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__GETVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x8EE69D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITALLEYPACKCMPTCONTAINER_OFFSET UNITYSDK_OFFSET(0x8EE1CC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITALLEYPACKGRID_OFFSET UNITYSDK_OFFSET(0x8EE1D50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITEFFECTASSET_OFFSET UNITYSDK_OFFSET(0x8EE2BB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITINPUTMANAGER_OFFSET UNITYSDK_OFFSET(0x8EE66E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITSHIPCOLLISIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8EE14D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURCMPTOUTSIDESHIP_OFFSET UNITYSDK_OFFSET(0x8EE5B50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURSORINUIAREA_OFFSET UNITYSDK_OFFSET(0x8EE5CE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURSORPOINTGOOD_OFFSET UNITYSDK_OFFSET(0x8EE6A50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__LOADFINISHORDEREFFECT_OFFSET UNITYSDK_OFFSET(0x8EE2A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONALLEYPACKENABLE3DCONTROL_OFFSET UNITYSDK_OFFSET(0x8EE6870)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSMENUCANCEL_OFFSET UNITYSDK_OFFSET(0x8EE5020)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSMENUCONFIRM_OFFSET UNITYSDK_OFFSET(0x8EE43F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSRT_OFFSET UNITYSDK_OFFSET(0x8EE4CE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERREMOVE_OFFSET UNITYSDK_OFFSET(0x8EE4BB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSDRAG_OFFSET UNITYSDK_OFFSET(0x8EE6400)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSENDDRAG_OFFSET UNITYSDK_OFFSET(0x8EE65A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSSELECTITEM_OFFSET UNITYSDK_OFFSET(0x8EE6110)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REFRESHJOYSTICKFACTOR_OFFSET UNITYSDK_OFFSET(0x8EE6010)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REGISTERCONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0x8EE3D20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RELEASEEFFECTASSET_OFFSET UNITYSDK_OFFSET(0x8EE2C60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLEYPACKCMPT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE1FB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLEYPACKGOODDATA_OFFSET UNITYSDK_OFFSET(0x8EE2440)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLGOODS_OFFSET UNITYSDK_OFFSET(0x8EE20D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVECURSHIP_OFFSET UNITYSDK_OFFSET(0x8EE1760)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE80D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVESHIPCOLLISIONCOMPONENT_OFFSET UNITYSDK_OFFSET(0x8EE2220)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RESETCURSORPOS_OFFSET UNITYSDK_OFFSET(0x8EE3FF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RESETINPUTPOSPARAM_OFFSET UNITYSDK_OFFSET(0x8EE67E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ROTATESHIP_B__111_0_OFFSET UNITYSDK_OFFSET(0x8EE9A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__SELECTGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE70C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__SETTLEGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE85B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x8EE3590)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKINPUT_OFFSET UNITYSDK_OFFSET(0x8EE32F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKJOYSTICKMOVECMPT_OFFSET UNITYSDK_OFFSET(0x8EE5060)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKMOUSEINPUTPOSCAL_OFFSET UNITYSDK_OFFSET(0x8EE2DA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKMOUSEINPUT_OFFSET UNITYSDK_OFFSET(0x8EE2D50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKREFRESHCURSORSTATE_OFFSET UNITYSDK_OFFSET(0x8EE35E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE1C10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODCANCELSETTLECALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE9300)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODONDRAGENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE83A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODONDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE5700)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE8B50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODSELECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE7270)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODSETTLECALLBACK_OFFSET UNITYSDK_OFFSET(0x8EE9290)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYENDDRAG_OFFSET UNITYSDK_OFFSET(0x8EE5980)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYSELECT_OFFSET UNITYSDK_OFFSET(0x8EE52C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x8EE4A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNINITINPUTMANAGER_OFFSET UNITYSDK_OFFSET(0x8EE6760)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNREGISTERCONTROLLERJOYSTICK_OFFSET UNITYSDK_OFFSET(0x8EE41F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNSELECTGOOD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x8EE8400)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackController_TypeDefinitionIndex = 60734;

	class AlleyPackController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* _EffectPathSmall; // 0x0
		// static const ::System::String* _EffectPathMedium; // 0x0
		// static const ::System::String* _EffectPathLarge; // 0x0
		::RPG::Client::ActivityAlley::AlleyPackComponent* _AlleyPackShipCmpt; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackComponent*>* _AlleyPackGoodsCmptList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackShipCollisionComponent*>* _AlleyPackShipCollisionComponentList; // 0x28
		::RPG::Client::ActivityAlley::AlleyPackShipData* _ShipData; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackGoodData*>* _AllGoodDataDict; // 0x38
		::System::UInt32 _MaxRuntimeUniqueID; // 0x40
		::Class_1_E93F0AA2D7EA238D* _GridModule; // 0x48
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x50
		::Class_1_D8E694D5C120D13C* AnchorSettleEffectPool; // 0x58
		::UnityEngine::GameObject* _FinishOrderEffect; // 0x60
		::RPG::Client::ActivityAlley::AlleyPackController_AlleyPackInputPosParam InputPosParam; // 0x68
		::System::Boolean UseJoyStickInput; // 0x78
		::System::Boolean DragWithAnchor; // 0x79
		::UnityEngine::Vector3 DragMousePosOffset; // 0x7C
		::UnityEngine::Vector3 CursorPos; // 0x88
		::System::Int32 _JoystickConfirmToken; // 0x94
		::System::Int32 _JoystickRemoveToken; // 0x98
		::System::Int32 _JoystickRotateToken; // 0x9C
		::System::Int32 _JoystickCancelToken2; // 0xA0
		::System::Int32 _JoystickCancelToken3; // 0xA4
		::Class_1_ADBD657143C0767D* _AlleyPackInputManager; // 0xA8
		::System::Boolean _Enable3DControl; // 0xB0
		::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState _CurJoyStickState_k__BackingField; // 0xB4
		::System::Boolean _CursorPointGood; // 0xB8
		::RPG::Client::ActivityAlley::AlleyPackConfig* PackConfig; // 0xC0
		::RPG::Client::ActivityAlley::AlleyPackComponent* _DraggingAlleyPackCmpt; // 0xC8
		::RPG::Client::ActivityAlley::AlleyPackComponent* _UnSettleAlleyPackCmpt; // 0xD0
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>* _GoodOnSelectCallback; // 0xD8
		::System::Action_1<::XLua::LuaTable*>* _GoodOnDragStartCallback; // 0xE0
		::System::Action_1<::XLua::LuaTable*>* _GoodOnDragEndCallback; // 0xE8
		::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>* _GoodOnSettleCallback; // 0xF0
		::System::Action_1<::XLua::LuaTable*>* _GoodOnCancelSettleCallback; // 0xF8
		::System::Action_1<::XLua::LuaTable*>* _GoodOnAddCallback; // 0x100
		::System::Action_1<::XLua::LuaTable*>* _GoodOnRemoveCallback; // 0x108
		::XLua::LuaTable* _GoodOperationCallbackLuaTable; // 0x110
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _UIRectTransList; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void AddAlleyPackShip(::System::UInt32 shipID, ::RPG::Client::ActivityAlley::AlleyPackComponent* shipCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDALLEYPACKSHIP_OFFSET))(this, shipID, shipCmpt);
		}

		::System::Void RemoveShip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REMOVESHIP_OFFSET))(this);
		}

		::System::Void AddAlleyGood(::System::UInt32 goodID, ::RPG::Client::ActivityAlley::AlleyPackComponent* goodCmpt, ::System::Boolean triggerGoodAddCallback, ::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDALLEYGOOD_OFFSET))(this, goodID, goodCmpt, triggerGoodAddCallback, resetPos);
		}

		::RPG::Client::ActivityAlley::ClientAlleyPlacingShip* GetAlleyPlacingShipInfo()
		{
			return ((::RPG::Client::ActivityAlley::ClientAlleyPlacingShip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETALLEYPLACINGSHIPINFO_OFFSET))(this);
		}

		::System::Void _InitAlleyPackCmptContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITALLEYPACKCMPTCONTAINER_OFFSET))(this);
		}

		::System::Void _InitAlleyPackGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITALLEYPACKGRID_OFFSET))(this);
		}

		::System::Void _InitShipCollisionComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITSHIPCOLLISIONCOMPONENT_OFFSET))(this);
		}

		::System::Void _RemoveCurShip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVECURSHIP_OFFSET))(this);
		}

		::System::Void _RemoveAllGoods()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLGOODS_OFFSET))(this);
		}

		::System::Void _RemoveShipCollisionComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVESHIPCOLLISIONCOMPONENT_OFFSET))(this);
		}

		::System::Void _DisposeAlleyPackCmptContainer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DISPOSEALLEYPACKCMPTCONTAINER_OFFSET))(this);
		}

		::System::Void _DisposeAlleyPackGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DISPOSEALLEYPACKGRID_OFFSET))(this);
		}

		::System::Void _AddAlleyPackCmpt_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* alleyPackCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADDALLEYPACKCMPT_INTERNAL_OFFSET))(this, alleyPackCmpt);
		}

		::System::Void _RemoveAlleyPackCmpt_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* alleyPackCmpt)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLEYPACKCMPT_INTERNAL_OFFSET))(this, alleyPackCmpt);
		}

		::System::Void _AddAlleyPackGoodData(::RPG::Client::ActivityAlley::AlleyPackGoodData* alleyPackGood)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADDALLEYPACKGOODDATA_OFFSET))(this, alleyPackGood);
		}

		::System::Void _RemoveAlleyPackGoodData(::System::UInt32 runtimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEALLEYPACKGOODDATA_OFFSET))(this, runtimeID);
		}

		::RPG::Client::ActivityAlley::AlleyPackShipData* get_ShipData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackShipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_SHIPDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackGoodData*>* get_AllGoodDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityAlley::AlleyPackGoodData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_ALLGOODDATADICT_OFFSET))(this);
		}

		static ::System::Void SetLayerRecursive(::UnityEngine::Transform* t, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SETLAYERRECURSIVE_OFFSET))(t, layer);
		}

		::System::Void ShowFinishOrderEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SHOWFINISHORDEREFFECT_OFFSET))(this);
		}

		::System::Void _InitEffectAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITEFFECTASSET_OFFSET))(this);
		}

		::System::Void _ReleaseEffectAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RELEASEEFFECTASSET_OFFSET))(this);
		}

		::System::Void _LoadFinishOrderEffect(::System::UInt32 shipID, ::System::Single posYOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__LOADFINISHORDEREFFECT_OFFSET))(this, shipID, posYOffset);
		}

		::System::Void UpdateDragMousePosOffset(::UnityEngine::Vector3 dragCmptAnchorPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UPDATEDRAGMOUSEPOSOFFSET_OFFSET))(this, dragCmptAnchorPos);
		}

		::System::Void ClearDragMousePosOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARDRAGMOUSEPOSOFFSET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void _TickMouseInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKMOUSEINPUT_OFFSET))(this);
		}

		::System::Void _TickMouseInputPosCal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKMOUSEINPUTPOSCAL_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_LATETICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Single GetIntersectAdjustYPos(::UnityEngine::Bounds curCmptBounds)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETINTERSECTADJUSTYPOS_OFFSET))(this, curCmptBounds);
		}

		::UnityEngine::Bounds GetIntersectBound(::UnityEngine::Bounds curCmptBounds)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GETINTERSECTBOUND_OFFSET))(this, curCmptBounds);
		}

		::System::Void _RegisterControllerJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REGISTERCONTROLLERJOYSTICK_OFFSET))(this);
		}

		::System::Void _UnRegisterControllerJoyStick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNREGISTERCONTROLLERJOYSTICK_OFFSET))(this);
		}

		::System::Void _ResetCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RESETCURSORPOS_OFFSET))(this);
		}

		::System::Void _OnControllerPressMenuConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSMENUCONFIRM_OFFSET))(this);
		}

		::System::Void _OnControllerRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERREMOVE_OFFSET))(this);
		}

		::System::Void _OnControllerPressRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSRT_OFFSET))(this);
		}

		::System::Void _OnControllerPressMenuCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONCONTROLLERPRESSMENUCANCEL_OFFSET))(this);
		}

		::System::Void _TickGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKGAMEPADINPUT_OFFSET))(this);
		}

		::System::Void _TickJoyStickMoveCmpt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKJOYSTICKMOVECMPT_OFFSET))(this);
		}

		::System::Void _TrySelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYSELECT_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackComponent* _GetCurMouseHoverCmpt()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__GETCURMOUSEHOVERCMPT_OFFSET))(this);
		}

		::System::Void _TryStartDrag(::System::Boolean immediateStartDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYSTARTDRAG_OFFSET))(this, immediateStartDrag);
		}

		::System::Void _TryEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRYENDDRAG_OFFSET))(this);
		}

		::System::Void _TickInput(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKINPUT_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void _RefreshJoyStickFactor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REFRESHJOYSTICKFACTOR_OFFSET))(this);
		}

		::System::Void _ProcessSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSSELECTITEM_OFFSET))(this);
		}

		::System::Void _ProcessDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSDRAG_OFFSET))(this);
		}

		::System::Void _ProcessEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__PROCESSENDDRAG_OFFSET))(this);
		}

		::System::Void _InitInputManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__INITINPUTMANAGER_OFFSET))(this);
		}

		::System::Void _UnInitInputManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNINITINPUTMANAGER_OFFSET))(this);
		}

		::System::Void _AdjustPosFromMouse(::RPG::Client::ActivityAlley::AlleyPackComponent* alleyPackComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ADJUSTPOSFROMMOUSE_OFFSET))(this, alleyPackComponent);
		}

		::System::Void _ResetInputPosParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__RESETINPUTPOSPARAM_OFFSET))(this);
		}

		::System::Void _OnAlleyPackEnable3DControl(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ONALLEYPACKENABLE3DCONTROL_OFFSET))(this, arg);
		}

		::System::Void SwitchJoyStickState(::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SWITCHJOYSTICKSTATE_OFFSET))(this, state);
		}

		::System::Void _TickRefreshCursorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TICKREFRESHCURSORSTATE_OFFSET))(this);
		}

		::RPG::Client::VirtualCursor* _GetVirtualCursor()
		{
			return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__GETVIRTUALCURSOR_OFFSET))(this);
		}

		::System::Boolean _IsCursorPointGood()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURSORPOINTGOOD_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState get_CurJoyStickState()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURJOYSTICKSTATE_OFFSET))(this);
		}

		::System::Void set_CurJoyStickState(::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackController_AlleyJoyStickState))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SET_CURJOYSTICKSTATE_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SwitchSelectTarget(::RPG::Client::ActivityAlley::AlleyPackComponent* selectTarget)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SWITCHSELECTTARGET_OFFSET))(this, selectTarget);
		}

		::System::Void BeginDragTarget(::RPG::Client::ActivityAlley::AlleyPackComponent* selectTarget, ::System::Boolean immediateStartDrag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_BEGINDRAGTARGET_OFFSET))(this, selectTarget, immediateStartDrag);
		}

		::System::Void TryEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYENDDRAG_OFFSET))(this);
		}

		::System::Boolean TryAutoSettle(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYAUTOSETTLE_OFFSET))(this, packComponent);
		}

		::System::Void RemoveCurGood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REMOVECURGOOD_OFFSET))(this);
		}

		::System::Void RotateCurGood()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ROTATECURGOOD_OFFSET))(this);
		}

		::System::Boolean IsInSelectGroup(::RPG::Client::ActivityAlley::AlleyPackGoodData* goodData, ::System::Boolean notIdle)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ISINSELECTGROUP_OFFSET))(this, goodData, notIdle);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ENDDRAG_OFFSET))(this);
		}

		::System::Void SelectGood(::RPG::Client::ActivityAlley::AlleyPackComponent* selectTarget, ::System::Boolean forceHover)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SELECTGOOD_OFFSET))(this, selectTarget, forceHover);
		}

		::System::Void UnSelectCurGood(::System::Boolean autoSettle, ::System::Boolean autoRemove, ::System::Boolean autoSettleImmediate, ::System::Boolean triggerGoodSettleCallback, ::System::Boolean triggerRemoveAudio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_UNSELECTCURGOOD_OFFSET))(this, autoSettle, autoRemove, autoSettleImmediate, triggerGoodSettleCallback, triggerRemoveAudio);
		}

		::System::Void SettleGood(::RPG::Client::ActivityAlley::AlleyPackComponent* alleyPackComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SETTLEGOOD_OFFSET))(this, alleyPackComponent);
		}

		::System::Void CancelSettleCurGood(::System::Boolean triggerCancelSettle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CANCELSETTLECURGOOD_OFFSET))(this, triggerCancelSettle);
		}

		::System::Void CombineGood(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_COMBINEGOOD_OFFSET))(this, packComponent);
		}

		::System::Void ClearShip(::System::Boolean reAcquireGrids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARSHIP_OFFSET))(this, reAcquireGrids);
		}

		::System::Void RotateShip(::System::Single degree)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ROTATESHIP_OFFSET))(this, degree);
		}

		::System::Void RegisterGoodOperationCallback(::XLua::LuaTable* luaTable, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>* onSelectCallback, ::System::Action_1<::XLua::LuaTable*>* onDragStartCallback, ::System::Action_1<::XLua::LuaTable*>* onDragEndCallback, ::System::Action_1<::XLua::LuaTable*>* onAddCallback, ::System::Action_1<::XLua::LuaTable*>* onRemoveCallback, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>* onSettleCallback, ::System::Action_1<::XLua::LuaTable*>* onCancelSettleCallback)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>*, ::System::Action_1<::XLua::LuaTable*>*, ::System::Action_1<::XLua::LuaTable*>*, ::System::Action_1<::XLua::LuaTable*>*, ::System::Action_1<::XLua::LuaTable*>*, ::System::Action_2<::XLua::LuaTable*, ::RPG::Client::ActivityAlley::AlleyPackComponent*>*, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_REGISTERGOODOPERATIONCALLBACK_OFFSET))(this, luaTable, onSelectCallback, onDragStartCallback, onDragEndCallback, onAddCallback, onRemoveCallback, onSettleCallback, onCancelSettleCallback);
		}

		::System::Void AddUIArea(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_ADDUIAREA_OFFSET))(this, rectTransform);
		}

		::System::Void ClearUIArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARUIAREA_OFFSET))(this);
		}

		::System::Void ResetCursorPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_RESETCURSORPOS_OFFSET))(this);
		}

		::System::Void _TriggerGoodSelectCallback(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODSELECTCALLBACK_OFFSET))(this, packComponent);
		}

		::System::Void _TriggerGoodOnDragStartCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODONDRAGSTARTCALLBACK_OFFSET))(this);
		}

		::System::Void _TriggerGoodOnDragEndCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODONDRAGENDCALLBACK_OFFSET))(this);
		}

		::System::Void _TriggerGoodAddCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODADDCALLBACK_OFFSET))(this);
		}

		::System::Void _TriggerGoodRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _TriggerGoodSettleCallback(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODSETTLECALLBACK_OFFSET))(this, packComponent);
		}

		::System::Void _TriggerGoodCancelSettleCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__TRIGGERGOODCANCELSETTLECALLBACK_OFFSET))(this);
		}

		::System::Boolean _IsCurCmptOutSideShip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURCMPTOUTSIDESHIP_OFFSET))(this);
		}

		::System::Boolean _IsCursorInUIArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ISCURSORINUIAREA_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackComponent* get_CurAlleyPackComponent()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURALLEYPACKCOMPONENT_OFFSET))(this);
		}

		::System::Void set_CurAlleyPackComponent(::RPG::Client::ActivityAlley::AlleyPackComponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_SET_CURALLEYPACKCOMPONENT_OFFSET))(this, value);
		}

		::RPG::Client::ActivityAlley::AlleyPackGroupData* get_CurGroupData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_GET_CURGROUPDATA_OFFSET))(this);
		}

		::System::Void TryShowMatchAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_TRYSHOWMATCHANI_OFFSET))(this);
		}

		::System::Void ClearMatchAni()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER_CLEARMATCHANI_OFFSET))(this);
		}

		::System::Void _SelectGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__SELECTGOOD_INTERNAL_OFFSET))(this, packComponent);
		}

		::System::Void _UnSelectGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__UNSELECTGOOD_INTERNAL_OFFSET))(this, packComponent);
		}

		::System::Void _SettleGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent, ::System::Boolean settleImmediately, ::System::Boolean triggerGoodSettleCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__SETTLEGOOD_INTERNAL_OFFSET))(this, packComponent, settleImmediately, triggerGoodSettleCallback);
		}

		::System::Void _CancelSettleGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent, ::System::Boolean triggerCancelSettle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CANCELSETTLEGOOD_INTERNAL_OFFSET))(this, packComponent, triggerCancelSettle);
		}

		::System::Void _RemoveGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent, ::System::Boolean triggerRemoveAudio)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__REMOVEGOOD_INTERNAL_OFFSET))(this, packComponent, triggerRemoveAudio);
		}

		::System::Void _CombineGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__COMBINEGOOD_INTERNAL_OFFSET))(this, packComponent);
		}

		::System::Void _DeCombineGood_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__DECOMBINEGOOD_INTERNAL_OFFSET))(this, packComponent);
		}

		::System::Boolean _CheckGoodCanSettle_Internal(::RPG::Client::ActivityAlley::AlleyPackComponent* packComponent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__CHECKGOODCANSETTLE_INTERNAL_OFFSET))(this, packComponent);
		}

		::System::Void _RotateShip_b__111_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCONTROLLER__ROTATESHIP_B__111_0_OFFSET))(this);
		}
	};
}
