#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByGridFightTraitBonusDropCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_A9028177C7C01F04_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD238550)
#define CLASS_2_A9028177C7C01F04_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD238590)
#define CLASS_2_A9028177C7C01F04_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD239060)
#define CLASS_2_A9028177C7C01F04_TICK_OFFSET UNITYSDK_OFFSET(0xD2390B0)
#define CLASS_2_A9028177C7C01F04__CTOR_OFFSET UNITYSDK_OFFSET(0xD238480)

inline static constexpr unsigned int Class_2_A9028177C7C01F04_TypeDefinitionIndex = 55629;

class Class_2_A9028177C7C01F04 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightTraitBonusDropCount*))((::PBYTE)hIl2Cpp + CLASS_2_A9028177C7C01F04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9028177C7C01F04_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9028177C7C01F04_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9028177C7C01F04_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A9028177C7C01F04_TICK_OFFSET))(this, a1);
	}
};
