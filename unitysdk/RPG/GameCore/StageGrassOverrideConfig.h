#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_METHOD_2_20B62182595CC99C_OFFSET UNITYSDK_OFFSET(0x17767730)
#define RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177679C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageGrassOverrideConfig_TypeDefinitionIndex = 17541;

	class StageGrassOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableGrass; // 0x10
		::System::Single overallDensityFactor; // 0x14
		::System::Boolean enableGrassDensityReduce; // 0x18
		::System::Single grassMaxDistance; // 0x1C
		::System::Single grassConstantDensityRangeFactor; // 0x20
		::System::Single grassDensityReduceFactor; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_20B62182595CC99C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageGrassOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageGrassOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEGRASSOVERRIDECONFIG_METHOD_2_20B62182595CC99C_OFFSET))(a1, a2);
		}
	};
}
