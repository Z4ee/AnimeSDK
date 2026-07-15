#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_36264895A759B0FF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTimeline; }

#define CLASS_2_B289CBA635C21678_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170D45A0)
#define CLASS_2_B289CBA635C21678_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170D45E0)
#define CLASS_2_B289CBA635C21678_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x170D4720)
#define CLASS_2_B289CBA635C21678_TICK_OFFSET UNITYSDK_OFFSET(0x170D4770)
#define CLASS_2_B289CBA635C21678__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4580)

inline static constexpr unsigned int Class_2_B289CBA635C21678_TypeDefinitionIndex = 53947;

class Class_2_B289CBA635C21678 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_36264895A759B0FF* Field_2_0; // 0x18
	::RPG::GameCore::WaitTimeline* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTimeline* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTimeline*))((::PBYTE)hIl2Cpp + CLASS_2_B289CBA635C21678__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B289CBA635C21678_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B289CBA635C21678_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B289CBA635C21678_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B289CBA635C21678_TICK_OFFSET))(this, a1);
	}
};
