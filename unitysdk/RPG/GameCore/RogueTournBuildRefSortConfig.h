#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_METHOD_2_36BF0A513C5A1059_OFFSET UNITYSDK_OFFSET(0x18D6F040)
#define RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6F240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefSortConfig_TypeDefinitionIndex = 16789;

	class RogueTournBuildRefSortConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Double LikeCountRate; // 0x10
		::System::Double FavoriteCountRate; // 0x18
		::System::Double AppliedCountRate; // 0x20
		::System::Double OpWeightRate; // 0x28
		::System::Double CurGameVersionRate; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_36BF0A513C5A1059(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuildRefSortConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefSortConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFSORTCONFIG_METHOD_2_36BF0A513C5A1059_OFFSET))(a1, a2);
		}
	};
}
