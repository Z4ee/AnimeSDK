#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define CLASS_1_4128453BA9BC9EC5_METHOD_1_4D1E1B87BDB48861_OFFSET UNITYSDK_OFFSET(0xBBF78F0)
#define CLASS_1_4128453BA9BC9EC5_METHOD_1_C8271590B3E9025B_OFFSET UNITYSDK_OFFSET(0xBBF7BB0)
#define CLASS_1_4128453BA9BC9EC5_METHOD_1_ECFAED0A058395D0_OFFSET UNITYSDK_OFFSET(0xBBF7DD0)
#define CLASS_1_4128453BA9BC9EC5__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF7FB0)

inline static constexpr unsigned int Class_1_4128453BA9BC9EC5_TypeDefinitionIndex = 66475;

class Class_1_4128453BA9BC9EC5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4128453BA9BC9EC5__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_4D1E1B87BDB48861(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_4128453BA9BC9EC5_METHOD_1_4D1E1B87BDB48861_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_C8271590B3E9025B(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_4128453BA9BC9EC5_METHOD_1_C8271590B3E9025B_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphConfig* Method_1_ECFAED0A058395D0(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_4128453BA9BC9EC5_METHOD_1_ECFAED0A058395D0_OFFSET))(a1, a2);
	}
};
