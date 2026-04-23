#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_4_454E770F08675E1E;
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::Client::Prop { class StableSystemPuzzlePillarAndPedestal; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Action; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xAEE3FF0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_INITPEDESTAL_OFFSET UNITYSDK_OFFSET(0xAEE36A0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0xAEE3D00)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANINTERACTION_OFFSET UNITYSDK_OFFSET(0xAEE2370)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANSELECTACTIVE_OFFSET UNITYSDK_OFFSET(0xAEE3E30)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETSELECTTYPE_OFFSET UNITYSDK_OFFSET(0xAEE2420)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_UPDATE_OFFSET UNITYSDK_OFFSET(0xAEE3EC0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE4080)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzlePedestal_TypeDefinitionIndex = 72371;

	class StableSystemPuzzlePedestal : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StableSystemPuzzlePedestal_TypeDefinitionIndex)->GetStaticField(0x44F0);
		}
		::RPG::GameCore::OptionTriggerInfo* SelectOption; // 0x18
		::RPG::GameCore::OptionTriggerInfo* CancelOption; // 0x20
		::RPG::GameCore::OptionTriggerInfo* ChangeOption; // 0x28
		::UnityEngine::GameObject* LockNode; // 0x30
		::UnityEngine::GameObject* UnlockNode; // 0x38
		::UnityEngine::Animator* Field_5_5; // 0x40
		::Class_4_454E770F08675E1E* Field_5_6; // 0x48
		::RPG::Client::MonoTriggerRegion* Field_5_7; // 0x50
		::Il2CppArray<::System::Action*>* Field_5_9; // 0x58
		::System::Boolean Field_5_10; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL__CTOR_OFFSET))(this);
		}

		::System::Void InitPedestal(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::StableSystemPuzzlePillarAndPedestal*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_INITPEDESTAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCanSelectActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANSELECTACTIVE_OFFSET))(this, a1);
		}

		::System::Void SetCanInteraction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANINTERACTION_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_UPDATE_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void SetSelectType(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETSELECTTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::MonoTriggerRegion* Method_5_7AAD06186762BE3C(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_METHOD_5_7AAD06186762BE3C_OFFSET))(this, a1);
		}
	};
}
