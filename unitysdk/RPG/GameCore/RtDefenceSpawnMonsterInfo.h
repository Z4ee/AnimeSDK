#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_METHOD_2_08C0001655AEB8C4_OFFSET UNITYSDK_OFFSET(0x18DCE860)
#define RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCEAF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceSpawnMonsterInfo_TypeDefinitionIndex = 17166;

	class RtDefenceSpawnMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TeamType Team; // 0x10
		::RPG::GameCore::FixVec2 Pos; // 0x18
		::System::UInt32 UnitID; // 0x28
		::System::UInt32 Level; // 0x2C
		::System::Boolean UseTeamBornPoint; // 0x30
		::System::Int32 Count; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_08C0001655AEB8C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtDefenceSpawnMonsterInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtDefenceSpawnMonsterInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTDEFENCESPAWNMONSTERINFO_METHOD_2_08C0001655AEB8C4_OFFSET))(a1, a2);
		}
	};
}
