#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class MonsterResearchSubmit; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E0A6B9E6B06D2795_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E163C0)
#define CLASS_2_E0A6B9E6B06D2795_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E162C0)
#define CLASS_2_E0A6B9E6B06D2795_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E16310)
#define CLASS_2_E0A6B9E6B06D2795_TICK_OFFSET UNITYSDK_OFFSET(0x17E16360)
#define CLASS_2_E0A6B9E6B06D2795__CTOR_OFFSET UNITYSDK_OFFSET(0x17E162B0)

inline static constexpr unsigned int Class_2_E0A6B9E6B06D2795_TypeDefinitionIndex = 53305;

class Class_2_E0A6B9E6B06D2795 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterResearchSubmit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterResearchSubmit*))((::PBYTE)hIl2Cpp + CLASS_2_E0A6B9E6B06D2795__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0A6B9E6B06D2795_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0A6B9E6B06D2795_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E0A6B9E6B06D2795_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E0A6B9E6B06D2795_DISPOSE_OFFSET))(this);
	}
};
