#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

class Class_2_3F4D673D3F90D12C;
class Class_2_9D4DD2F4235F8658;
class Class_2_C14C025AFA60DCA2;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB707FF0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET UNITYSDK_OFFSET(0xB708C30)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET UNITYSDK_OFFSET(0xB708C20)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xB7085F0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET UNITYSDK_OFFSET(0xB708240)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET UNITYSDK_OFFSET(0xB708970)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB708080)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB707F90)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET UNITYSDK_OFFSET(0xB708B90)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET UNITYSDK_OFFSET(0xB708450)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET UNITYSDK_OFFSET(0xB7089C0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xB708C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRemoteControllerComponent_TypeDefinitionIndex = 53156;

	class PlayerRemoteControllerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::Class_2_9D4DD2F4235F8658* _AdvCharAICmpt; // 0x18
		::RPG::GameCore::TransformComponent* _TargetTransformCmpt; // 0x20
		::RPG::GameCore::LevelGraphComponent* _LevelGraphCmpt; // 0x28
		::RPG::GameCore::GameEntity* _ControlEntity; // 0x30
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x38
		::Class_2_3F4D673D3F90D12C* _CharVisionCmpt; // 0x40
		::RPG::GameCore::AdventureCharacterController* _AdvCharCtrlCmpt; // 0x48
		::RPG::GameCore::NPCComponent* _NPCCmpt; // 0x50
		::RPG::GameCore::ColliderTriggerComponent* _TriggerCmpt; // 0x58
		::RPG::GameCore::TransformComponent* _SelfTransformCmpt; // 0x60
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x68
		::Class_2_C14C025AFA60DCA2* _TargetingCmpt; // 0x70
		::System::Boolean SyncPlayerPositionToServer; // 0x78
		::System::Boolean CanUseSameMapTeleport; // 0x79
		::System::Boolean SupportRush; // 0x7A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ReleaseControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET))(this);
		}

		::System::Void _InheritControlEntityModifiers(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET))(this, controlEntity);
		}

		::System::Void InitComponent(::RPG::GameCore::GameEntity* controlEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET))(this, controlEntity);
		}

		::System::Void SetPlayerStub(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET))(this, entity);
		}

		::System::Void _OnRemoteControlRelease(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET))(this, param);
		}

		::System::Collections::IEnumerator* _DelayCancelControl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PlayerStub()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ControlEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
