#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_METHOD_2_AC4760BC4FFC1D64_OFFSET UNITYSDK_OFFSET(0x17661320)
#define RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17661450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefMatchHexMiracleRateConfig_TypeDefinitionIndex = 16234;

	class RogueTournBuildRefMatchHexMiracleRateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Essential; // 0x10
		::System::UInt32 Optional; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AC4760BC4FFC1D64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefMatchHexMiracleRateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFMATCHHEXMIRACLERATECONFIG_METHOD_2_AC4760BC4FFC1D64_OFFSET))(a1, a2);
		}
	};
}
