#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishLevelGraph; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F97FD7D444CC66E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1526F290)
#define CLASS_2_F97FD7D444CC66E5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1526EE80)
#define CLASS_2_F97FD7D444CC66E5_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1526F1E0)
#define CLASS_2_F97FD7D444CC66E5_TICK_OFFSET UNITYSDK_OFFSET(0x1526F230)
#define CLASS_2_F97FD7D444CC66E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1526EE70)

inline static constexpr unsigned int Class_2_F97FD7D444CC66E5_TypeDefinitionIndex = 53824;

class Class_2_F97FD7D444CC66E5 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::FinishLevelGraph* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishLevelGraph* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishLevelGraph*))((::PBYTE)hIl2Cpp + CLASS_2_F97FD7D444CC66E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F97FD7D444CC66E5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F97FD7D444CC66E5_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F97FD7D444CC66E5_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F97FD7D444CC66E5_DISPOSE_OFFSET))(this);
	}
};
