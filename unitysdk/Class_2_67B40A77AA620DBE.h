#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ShowBattleEventButton; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_67B40A77AA620DBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1593B0E0)
#define CLASS_2_67B40A77AA620DBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1593B120)
#define CLASS_2_67B40A77AA620DBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1593B1A0)
#define CLASS_2_67B40A77AA620DBE_TICK_OFFSET UNITYSDK_OFFSET(0x1593B1F0)
#define CLASS_2_67B40A77AA620DBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1593B0D0)

inline static constexpr unsigned int Class_2_67B40A77AA620DBE_TypeDefinitionIndex = 56629;

class Class_2_67B40A77AA620DBE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ShowBattleEventButton* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleEventButton* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleEventButton*))((::PBYTE)hIl2Cpp + CLASS_2_67B40A77AA620DBE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B40A77AA620DBE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B40A77AA620DBE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67B40A77AA620DBE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_67B40A77AA620DBE_TICK_OFFSET))(this, a1);
	}
};
