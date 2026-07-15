#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdvSpawnMoney; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_78A99DA90E2A2419_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140C68B0)
#define CLASS_2_78A99DA90E2A2419_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x140C6700)
#define CLASS_2_78A99DA90E2A2419_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x140C6860)
#define CLASS_2_78A99DA90E2A2419_TICK_OFFSET UNITYSDK_OFFSET(0x140C6910)
#define CLASS_2_78A99DA90E2A2419__CTOR_OFFSET UNITYSDK_OFFSET(0x140C66F0)

inline static constexpr unsigned int Class_2_78A99DA90E2A2419_TypeDefinitionIndex = 55320;

class Class_2_78A99DA90E2A2419 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvSpawnMoney* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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
