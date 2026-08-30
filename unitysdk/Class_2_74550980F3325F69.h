#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeHeartDialModelByScript; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_74550980F3325F69_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E9DE0)
#define CLASS_2_74550980F3325F69_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7E9E30)
#define CLASS_2_74550980F3325F69_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7E9F60)
#define CLASS_2_74550980F3325F69_TICK_OFFSET UNITYSDK_OFFSET(0xB7E9FB0)
#define CLASS_2_74550980F3325F69__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E9DD0)

inline static constexpr unsigned int Class_2_74550980F3325F69_TypeDefinitionIndex = 52913;

class Class_2_74550980F3325F69 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* OBKLPOKMIEA; // 0x18
	::RPG::GameCore::ChangeHeartDialModelByScript* HLLLPAHOFFF; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeHeartDialModelByScript* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeHeartDialModelByScript*))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_74550980F3325F69_TICK_OFFSET))(this, a1);
	}
};
