#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class OverrideWaveMonsterPerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_2A3AB92C27B8BA73_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2FE5F0)
#define CLASS_2_2A3AB92C27B8BA73_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA2FE630)
#define CLASS_2_2A3AB92C27B8BA73_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA2FE7D0)
#define CLASS_2_2A3AB92C27B8BA73_TICK_OFFSET UNITYSDK_OFFSET(0xA2FE820)
#define CLASS_2_2A3AB92C27B8BA73__CTOR_OFFSET UNITYSDK_OFFSET(0xA2FE5E0)

inline static constexpr unsigned int Class_2_2A3AB92C27B8BA73_TypeDefinitionIndex = 53718;

class Class_2_2A3AB92C27B8BA73 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::OverrideWaveMonsterPerform* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OverrideWaveMonsterPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OverrideWaveMonsterPerform*))((::PBYTE)hIl2Cpp + CLASS_2_2A3AB92C27B8BA73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3AB92C27B8BA73_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3AB92C27B8BA73_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2A3AB92C27B8BA73_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2A3AB92C27B8BA73_TICK_OFFSET))(this, a1);
	}
};
