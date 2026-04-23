#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define CLASS_1_735717D249D8BEE4_METHOD_1_298A32552A437C6A_OFFSET UNITYSDK_OFFSET(0x9E21A90)
#define CLASS_1_735717D249D8BEE4_METHOD_1_2A679C1E7D2535B8_OFFSET UNITYSDK_OFFSET(0x9E217A0)
#define CLASS_1_735717D249D8BEE4_METHOD_1_95D2400BFA455A2F_OFFSET UNITYSDK_OFFSET(0x9E21CD0)
#define CLASS_1_735717D249D8BEE4__CTOR_OFFSET UNITYSDK_OFFSET(0x9E21F50)

inline static constexpr unsigned int Class_1_735717D249D8BEE4_TypeDefinitionIndex = 61200;

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

	static ::RPG::GameCore::LevelGraphConfig* Method_1_95D2400BFA455A2F(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_735717D249D8BEE4_METHOD_1_95D2400BFA455A2F_OFFSET))(a1, a2);
	}
};
