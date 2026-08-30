#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_METHOD_2_F95973F4774BBF23_OFFSET UNITYSDK_OFFSET(0x1E1CD640)
#define RPG_GAMECORE_TEAMTOWERSBOSSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CD880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossConfig_TypeDefinitionIndex = 18732;

	class TeamTowersBossConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxBossHP; // 0x10
		::System::Single InitialBossCharge; // 0x14
		::System::Single MaxBossCharge; // 0x18
		::System::Single BossChargeIncrementPerSecond; // 0x1C
		::System::Single BossChargeDecrementOnBrickPlaced; // 0x20
		::System::String* BrickSequenceJsonPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F95973F4774BBF23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersBossConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersBossConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_METHOD_2_F95973F4774BBF23_OFFSET))(a1, a2);
		}
	};
}
