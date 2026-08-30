#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StopBattlePostureType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_77D7ABE5AEAC19DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163EA810)
#define CLASS_2_77D7ABE5AEAC19DB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163EA850)
#define CLASS_2_77D7ABE5AEAC19DB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163EA8B0)
#define CLASS_2_77D7ABE5AEAC19DB_TICK_OFFSET UNITYSDK_OFFSET(0x163EA900)
#define CLASS_2_77D7ABE5AEAC19DB__CTOR_OFFSET UNITYSDK_OFFSET(0x163EA800)

inline static constexpr unsigned int Class_2_77D7ABE5AEAC19DB_TypeDefinitionIndex = 53551;

class Class_2_77D7ABE5AEAC19DB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::StopBattlePostureType* OFKGLJOAMLD; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopBattlePostureType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopBattlePostureType*))((::PBYTE)hIl2Cpp + CLASS_2_77D7ABE5AEAC19DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D7ABE5AEAC19DB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D7ABE5AEAC19DB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77D7ABE5AEAC19DB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_77D7ABE5AEAC19DB_TICK_OFFSET))(this, a1);
	}
};
