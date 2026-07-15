#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class DevPlayPerformanceE; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D8E3FF1DDAF2E221_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164919D0)
#define CLASS_2_D8E3FF1DDAF2E221_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x16491C00)
#define CLASS_2_D8E3FF1DDAF2E221_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16491A80)
#define CLASS_2_D8E3FF1DDAF2E221_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16491B40)
#define CLASS_2_D8E3FF1DDAF2E221_TICK_OFFSET UNITYSDK_OFFSET(0x16491B90)
#define CLASS_2_D8E3FF1DDAF2E221__CTOR_OFFSET UNITYSDK_OFFSET(0x164919C0)

inline static constexpr unsigned int Class_2_D8E3FF1DDAF2E221_TypeDefinitionIndex = 50345;

class Class_2_D8E3FF1DDAF2E221 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::LevelGraphComponent* Field_2_1; // 0x20
	::RPG::GameCore::DevPlayPerformanceE* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DevPlayPerformanceE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DevPlayPerformanceE*))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D8E3FF1DDAF2E221_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}
};
