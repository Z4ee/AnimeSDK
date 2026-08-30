#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class StartStageBGM; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_445A88BFDDDD6028_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170C1D00)
#define CLASS_2_445A88BFDDDD6028_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170C1D40)
#define CLASS_2_445A88BFDDDD6028_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x170C1F00)
#define CLASS_2_445A88BFDDDD6028_TICK_OFFSET UNITYSDK_OFFSET(0x170C1F50)
#define CLASS_2_445A88BFDDDD6028__CTOR_OFFSET UNITYSDK_OFFSET(0x170C1CF0)

inline static constexpr unsigned int Class_2_445A88BFDDDD6028_TypeDefinitionIndex = 58876;

class Class_2_445A88BFDDDD6028 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::StartStageBGM* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartStageBGM* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartStageBGM*))((::PBYTE)hIl2Cpp + CLASS_2_445A88BFDDDD6028__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445A88BFDDDD6028_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445A88BFDDDD6028_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_445A88BFDDDD6028_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_445A88BFDDDD6028_TICK_OFFSET))(this, a1);
	}
};
