#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleLineupAvatarConfig; }
namespace RPG::GameCore { class LineupGridFightAvatarData; }
namespace RPG::GameCore { class LineupGridFightTraitParam; }

#define RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_METHOD_2_B66D0AC75C9CC1AB_OFFSET UNITYSDK_OFFSET(0x1D1F78E0)
#define RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F7B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupGridFightConfig_TypeDefinitionIndex = 17917;

	class LineupGridFightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LineupGridFightAvatarData*>* RoleList; // 0x10
		::Il2CppArray<::RPG::GameCore::LineupGridFightTraitParam*>* TraitParamList; // 0x18
		::System::UInt32 GlobalHp; // 0x20
		::System::UInt32 PlayerLevel; // 0x24
		::System::UInt32 WaveIndex; // 0x28
		::Il2CppArray<::RPG::GameCore::BattleLineupAvatarConfig*>* BackendAvatarList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B66D0AC75C9CC1AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LineupGridFightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LineupGridFightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTCONFIG_METHOD_2_B66D0AC75C9CC1AB_OFFSET))(a1, a2);
		}
	};
}
