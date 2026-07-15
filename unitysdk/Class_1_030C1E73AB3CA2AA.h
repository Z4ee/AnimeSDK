#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_1926EA6E402BC752_OFFSET UNITYSDK_OFFSET(0x14B10530)
#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_2A679C1E7D2535B8_OFFSET UNITYSDK_OFFSET(0x14B10240)
#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_ECFAED0A058395D0_OFFSET UNITYSDK_OFFSET(0x14B10780)
#define CLASS_1_030C1E73AB3CA2AA__CTOR_OFFSET UNITYSDK_OFFSET(0x14B10960)

inline static constexpr unsigned int Class_1_030C1E73AB3CA2AA_TypeDefinitionIndex = 63490;

class Class_1_030C1E73AB3CA2AA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_030C1E73AB3CA2AA__CTOR_OFFSET))(this);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_2A679C1E7D2535B8(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_030C1E73AB3CA2AA_METHOD_1_2A679C1E7D2535B8_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphComponent* Method_1_1926EA6E402BC752(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_030C1E73AB3CA2AA_METHOD_1_1926EA6E402BC752_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::LevelGraphConfig* Method_1_ECFAED0A058395D0(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_030C1E73AB3CA2AA_METHOD_1_ECFAED0A058395D0_OFFSET))(a1, a2);
	}
};
