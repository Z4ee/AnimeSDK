#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowAdventureLevelPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DA76A9A749C6373D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B25B50)
#define CLASS_2_DA76A9A749C6373D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13B25B90)
#define CLASS_2_DA76A9A749C6373D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13B25C10)
#define CLASS_2_DA76A9A749C6373D_TICK_OFFSET UNITYSDK_OFFSET(0x13B25C60)
#define CLASS_2_DA76A9A749C6373D__CTOR_OFFSET UNITYSDK_OFFSET(0x13B25B40)

inline static constexpr unsigned int Class_2_DA76A9A749C6373D_TypeDefinitionIndex = 54749;

class Class_2_DA76A9A749C6373D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::ShowAdventureLevelPage* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAdventureLevelPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAdventureLevelPage*))((::PBYTE)hIl2Cpp + CLASS_2_DA76A9A749C6373D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA76A9A749C6373D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA76A9A749C6373D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA76A9A749C6373D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DA76A9A749C6373D_TICK_OFFSET))(this, a1);
	}
};
