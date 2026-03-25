#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define CLASS_1_735717D249D8BEE4_METHOD_1_298A32552A437C6A_OFFSET UNITYSDK_OFFSET(0x8BE2C40)
#define CLASS_1_735717D249D8BEE4_METHOD_1_2A679C1E7D2535B8_OFFSET UNITYSDK_OFFSET(0x8BE2950)
#define CLASS_1_735717D249D8BEE4_METHOD_1_C00ADB5B4B292146_OFFSET UNITYSDK_OFFSET(0x8BE2E80)
#define CLASS_1_735717D249D8BEE4__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE3130)

inline static constexpr unsigned int Class_1_735717D249D8BEE4_TypeDefinitionIndex = 54037;

class Class_1_735717D249D8BEE4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_735717D249D8BEE4__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_2A679C1E7D2535B8(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_735717D249D8BEE4_METHOD_1_2A679C1E7D2535B8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_298A32552A437C6A(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_735717D249D8BEE4_METHOD_1_298A32552A437C6A_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphConfig* Method_1_C00ADB5B4B292146(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_735717D249D8BEE4_METHOD_1_C00ADB5B4B292146_OFFSET))(a1, a2);
	}
};
