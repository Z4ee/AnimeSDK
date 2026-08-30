#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowAdventureLevelPage; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_DA76A9A749C6373D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159A8BE0)
#define CLASS_2_DA76A9A749C6373D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159A8C20)
#define CLASS_2_DA76A9A749C6373D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159A8CA0)
#define CLASS_2_DA76A9A749C6373D_TICK_OFFSET UNITYSDK_OFFSET(0x159A8CF0)
#define CLASS_2_DA76A9A749C6373D__CTOR_OFFSET UNITYSDK_OFFSET(0x159A8BD0)

inline static constexpr unsigned int Class_2_DA76A9A749C6373D_TypeDefinitionIndex = 58747;

class Class_2_DA76A9A749C6373D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowAdventureLevelPage* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

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
