#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87854DF4F09D42E1.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA1B5D0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAA1B710)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAA1B8E0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xAA1B940)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1C610)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1C630)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xAA1BAD0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1C620)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0xAA1C640)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA1C650)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKIFININTERACTIONANGLE_OFFSET UNITYSDK_OFFSET(0xAA1BBD0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xAA1BF60)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1B450)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0xAA1B670)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0xAA1B780)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__ONTRIGGERUICONFIRM_OFFSET UNITYSDK_OFFSET(0xAA1C350)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0xAA1BFF0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xAA1BA70)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0xAA1C4F0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0xAA1BA30)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TRIGGERCALLBACKLOGIC_OFFSET UNITYSDK_OFFSET(0xAA1C0E0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA1C670)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xAA1C680)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xAA1C690)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0xAA1C6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractionTrigger_TypeDefinitionIndex = 46348;

	class PropInteractionTrigger : public ::Class_1_87854DF4F09D42E1
	{
	public:
		static ::System::String** StaticGet_TriggerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PropInteractionTrigger_TypeDefinitionIndex)->GetStaticField(0x31880);
		}
		::RPG::GameCore::TaskContext* _OwnerLevelGraphContext; // 0x98
		::System::Action* OnTriggerCallback; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* _BtnCallbackConfig; // 0xA8
		::RPG::GameCore::PropInteractionTrigger_ButtonParam* _ButtonParam; // 0xB0
		::System::Single InteractAngleRange; // 0xB8
		::System::Boolean _IsTriggerUIShowing; // 0xBC
		::System::Boolean ConsiderAngleLimit; // 0xBD
		::System::Boolean _IsInTriggerRegion; // 0xBE
		::System::Boolean _DisableWhenTriggered_k__BackingField; // 0xBF
		::System::Boolean SetupByMission; // 0xC0
		::System::Boolean DestroyPropAfterTrigger; // 0xC1
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xC2
		::System::Single _CD; // 0xC4

		::System::Void _ctor(::RPG::GameCore::PropComponent* owner, ::RPG::GameCore::TaskContext* context, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CTOR_OFFSET))(this, owner, context, callback);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* guestEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONENTER_OFFSET))(this, guestEntity);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* guestEntity, ::RPG::GameCore::TriggerExitReason exitReason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONEXIT_OFFSET))(this, guestEntity, exitReason);
		}

		::System::Void DoOnTick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONTICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}

		::System::Void _EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__ENABLEUI_OFFSET))(this);
		}

		::System::Void _DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckRuntimeID(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKRUNTIMEID_OFFSET))(this, arg);
		}

		::System::Void _ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__RESETCD_OFFSET))(this);
		}

		::System::Void _TriggerCallbackLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TRIGGERCALLBACKLOGIC_OFFSET))(this);
		}

		::System::Void _OnTriggerUIConfirm(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__ONTRIGGERUICONFIRM_OFFSET))(this, arg);
		}

		::System::Void _TickHeightLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Void _TickAngleLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKANGLELIMIT_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKCD_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Boolean _CheckIfInInteractionAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKIFININTERACTIONANGLE_OFFSET))(this);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, value);
		}

		::System::Boolean get_DisableWhenTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableWhenTriggered(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER___IFIXBASEPROXY_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}
	};
}
