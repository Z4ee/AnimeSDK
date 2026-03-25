#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BlockWheelItem; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1A6FC25EF3C932F2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10918C60)
#define CLASS_2_1A6FC25EF3C932F2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10918CA0)
#define CLASS_2_1A6FC25EF3C932F2_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10918E30)
#define CLASS_2_1A6FC25EF3C932F2_TICK_OFFSET UNITYSDK_OFFSET(0x10918E80)
#define CLASS_2_1A6FC25EF3C932F2__CTOR_OFFSET UNITYSDK_OFFSET(0x10918C50)

inline static constexpr unsigned int Class_2_1A6FC25EF3C932F2_TypeDefinitionIndex = 42547;

class Class_2_1A6FC25EF3C932F2 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BlockWheelItem* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BlockWheelItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BlockWheelItem*))((::PBYTE)hIl2Cpp + CLASS_2_1A6FC25EF3C932F2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6FC25EF3C932F2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6FC25EF3C932F2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A6FC25EF3C932F2_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1A6FC25EF3C932F2_TICK_OFFSET))(this, a1);
	}
};
