#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_METHOD_2_3552876F09019ED9_OFFSET UNITYSDK_OFFSET(0x173A1420)
#define RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x173A1510)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdStyleWeightConfig_TypeDefinitionIndex = 22765;

	class BirdStyleWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StyleID; // 0x10
		::System::UInt32 Weight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3552876F09019ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::BirdStyleWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::BirdStyleWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSTYLEWEIGHTCONFIG_METHOD_2_3552876F09019ED9_OFFSET))(a1, a2);
		}
	};
}
