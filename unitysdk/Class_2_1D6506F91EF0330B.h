#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetTargetAnimSpeedScale; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1D6506F91EF0330B_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB37F40)
#define CLASS_2_1D6506F91EF0330B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCB37F80)
#define CLASS_2_1D6506F91EF0330B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCB38160)
#define CLASS_2_1D6506F91EF0330B_TICK_OFFSET UNITYSDK_OFFSET(0xCB381B0)
#define CLASS_2_1D6506F91EF0330B__CTOR_OFFSET UNITYSDK_OFFSET(0xCB37F30)

inline static constexpr unsigned int Class_2_1D6506F91EF0330B_TypeDefinitionIndex = 44507;

class Class_2_1D6506F91EF0330B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::SetTargetAnimSpeedScale* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetTargetAnimSpeedScale* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetTargetAnimSpeedScale*))((::PBYTE)hIl2Cpp + CLASS_2_1D6506F91EF0330B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D6506F91EF0330B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D6506F91EF0330B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D6506F91EF0330B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1D6506F91EF0330B_TICK_OFFSET))(this, a1);
	}
};
