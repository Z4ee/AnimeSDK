#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattlePerformActorInit; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_282F687796E0163C_OFFSET UNITYSDK_OFFSET(0x1CE7D2B0)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_937440B774D5DB89_OFFSET UNITYSDK_OFFSET(0x1CE7D3B0)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_D4DCD0469FA2A8CD_OFFSET UNITYSDK_OFFSET(0x1CE7D0A0)
#define RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7D2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePerformStageConfig_TypeDefinitionIndex = 17932;

	class BattlePerformStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		// static const ::System::String* BATTLE_PERFORM_CONFIG_PATH; // 0x0
		::Il2CppArray<::System::UInt32>* GraphEmoAvatarIDs; // 0x10
		::Il2CppArray<::System::UInt32>* GraphEmoAvatarServantIDs; // 0x18
		::Il2CppArray<::System::UInt32>* GraphEmoMonsterIDs; // 0x20
		::Il2CppArray<::RPG::GameCore::BattlePerformActorInit*>* ActorInitList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D4DCD0469FA2A8CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BattlePerformStageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BattlePerformStageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_D4DCD0469FA2A8CD_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::BattlePerformStageConfig* Method_2_282F687796E0163C(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::BattlePerformStageConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_282F687796E0163C_OFFSET))(a1);
		}

		::RPG::GameCore::BattlePerformActorInit* Method_2_937440B774D5DB89(::System::String* a1)
		{
			return ((::RPG::GameCore::BattlePerformActorInit*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPERFORMSTAGECONFIG_METHOD_2_937440B774D5DB89_OFFSET))(this, a1);
		}
	};
}
