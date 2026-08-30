#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSpawnMoney; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_78A99DA90E2A2419_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1351FE10)
#define CLASS_2_78A99DA90E2A2419_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1351FC60)
#define CLASS_2_78A99DA90E2A2419_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1351FDC0)
#define CLASS_2_78A99DA90E2A2419_TICK_OFFSET UNITYSDK_OFFSET(0x1351FE70)
#define CLASS_2_78A99DA90E2A2419__CTOR_OFFSET UNITYSDK_OFFSET(0x1351FC50)

inline static constexpr unsigned int Class_2_78A99DA90E2A2419_TypeDefinitionIndex = 58044;

class Class_2_78A99DA90E2A2419 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::AdvSpawnMoney* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvSpawnMoney* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvSpawnMoney*))((::PBYTE)hIl2Cpp + CLASS_2_78A99DA90E2A2419__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78A99DA90E2A2419_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78A99DA90E2A2419_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78A99DA90E2A2419_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_78A99DA90E2A2419_TICK_OFFSET))(this, a1);
	}
};
