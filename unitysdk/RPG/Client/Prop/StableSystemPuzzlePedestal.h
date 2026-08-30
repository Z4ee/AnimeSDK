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

#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0x17B0D050)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_INITPEDESTAL_OFFSET UNITYSDK_OFFSET(0x17B0C6F0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_METHOD_5_7AAD06186762BE3C_OFFSET UNITYSDK_OFFSET(0x17B0CD00)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANINTERACTION_OFFSET UNITYSDK_OFFSET(0x17B0B730)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETCANSELECTACTIVE_OFFSET UNITYSDK_OFFSET(0x17B0CE30)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_SETSELECTTYPE_OFFSET UNITYSDK_OFFSET(0x17B0B7A0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL_UPDATE_OFFSET UNITYSDK_OFFSET(0x17B0CEC0)
#define RPG_CLIENT_PROP_STABLESYSTEMPUZZLEPEDESTAL__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0D0A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int StableSystemPuzzlePedestal_TypeDefinitionIndex = 78403;

	class StableSystemPuzzlePedestal : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_BNCPBBHOOKB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StableSystemPuzzlePedestal_TypeDefinitionIndex)->GetStaticField(0x14E30);
		}
		::RPG::GameCore::OptionTriggerInfo* SelectOption; // 0x18
		::RPG::GameCore::OptionTriggerInfo* CancelOption; // 0x20
		::RPG::GameCore::OptionTriggerInfo* ChangeOption; // 0x28
		::UnityEngine::GameObject* LockNode; // 0x30
		::UnityEngine::GameObject* UnlockNode; // 0x38
		::UnityEngine::Animator* APPGGMLEPLN; // 0x40
		::Class_4_454E770F08675E1E* GALAHGAJODG; // 0x48
		::RPG::Client::MonoTriggerRegion* BKNPJHNHIOG; // 0x50
		::Il2CppArray<::System::Action*>* HJLKNPIFNGI; // 0x58
		::System::Boolean BAGDGKPJABJ; // 0x60

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
