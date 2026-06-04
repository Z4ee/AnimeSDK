#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::ParkourGame { class MonoParkourMinimap; }
namespace RPG::Client::ParkourGame { class MonoParkourRoadMap; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PARKOURGAME_PARKOURGAMELEVELCONFIGASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC33BE20)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourGameLevelConfigAsset_TypeDefinitionIndex = 69290;

	class ParkourGameLevelConfigAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourRoadMap* RoadMap; // 0x18
		::RPG::Client::ParkourGame::MonoParkourMinimap* Minimap; // 0x20
		::Il2CppArray<::System::UInt32>* CharacterIDs; // 0x28
		::System::Int32 PlayerRoadID; // 0x30
		::System::Single CharacterCollisionDuration; // 0x34
		::System::Int32 CharacterCollisionPriority; // 0x38
		::System::Int32 CharacterSuperCollisionPriority; // 0x3C
		::System::Int32 SpeedUpMaxEnergy; // 0x40
		::System::Int32 SpeedUpCostPoint; // 0x44
		::System::Single SpeedUpKeepDuration; // 0x48
		::Il2CppArray<::System::Int32>* SpeedUpPriority; // 0x50
		::System::Single SpeedUpCoolDown; // 0x58
		::System::Int32 SkillMaxEnergy; // 0x5C
		::System::Int32 SkillCostEnergy; // 0x60
		::System::Single SkillKeepDuration; // 0x64
		::System::Int32 SkillPriority; // 0x68
		::UnityEngine::GameObject* CameraPrefab; // 0x70
		::System::Int32 PlayLapCount; // 0x78
		::System::String* BeforeStartEventName; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURGAMELEVELCONFIGASSET__CTOR_OFFSET))(this);
		}
	};
}
