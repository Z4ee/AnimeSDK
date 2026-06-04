#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_1926EA6E402BC752_OFFSET UNITYSDK_OFFSET(0xA880D30)
#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_2A679C1E7D2535B8_OFFSET UNITYSDK_OFFSET(0xA880A40)
#define CLASS_1_030C1E73AB3CA2AA_METHOD_1_5FF0D31A2CD3288E_OFFSET UNITYSDK_OFFSET(0xA880F80)
#define CLASS_1_030C1E73AB3CA2AA__CTOR_OFFSET UNITYSDK_OFFSET(0xA8811A0)

inline static constexpr unsigned int Class_1_030C1E73AB3CA2AA_TypeDefinitionIndex = 62124;

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

	static ::RPG::GameCore::LevelGraphConfig* Method_1_5FF0D31A2CD3288E(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + CLASS_1_030C1E73AB3CA2AA_METHOD_1_5FF0D31A2CD3288E_OFFSET))(a1, a2);
	}
};
