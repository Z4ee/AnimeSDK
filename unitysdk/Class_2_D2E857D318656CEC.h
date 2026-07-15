#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PPFilterStackEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D2E857D318656CEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EF2FD0)
#define CLASS_2_D2E857D318656CEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EF3010)
#define CLASS_2_D2E857D318656CEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18EF3920)
#define CLASS_2_D2E857D318656CEC_TICK_OFFSET UNITYSDK_OFFSET(0x18EF3970)
#define CLASS_2_D2E857D318656CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18EF2FC0)

inline static constexpr unsigned int Class_2_D2E857D318656CEC_TypeDefinitionIndex = 52752;

class Class_2_D2E857D318656CEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PPFilterStackEffect* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PPFilterStackEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PPFilterStackEffect*))((::PBYTE)hIl2Cpp + CLASS_2_D2E857D318656CEC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2E857D318656CEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2E857D318656CEC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2E857D318656CEC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D2E857D318656CEC_TICK_OFFSET))(this, a1);
	}
};
