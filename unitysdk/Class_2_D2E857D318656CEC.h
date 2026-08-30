#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PPFilterStackEffect; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D2E857D318656CEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1782EF90)
#define CLASS_2_D2E857D318656CEC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1782EFD0)
#define CLASS_2_D2E857D318656CEC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1782F900)
#define CLASS_2_D2E857D318656CEC_TICK_OFFSET UNITYSDK_OFFSET(0x1782F950)
#define CLASS_2_D2E857D318656CEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1782EF80)

inline static constexpr unsigned int Class_2_D2E857D318656CEC_TypeDefinitionIndex = 55455;

class Class_2_D2E857D318656CEC : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PPFilterStackEffect* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
