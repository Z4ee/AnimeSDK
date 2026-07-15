#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddBuffPerform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7B4D5C7210BB4201_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188C8E80)
#define CLASS_2_7B4D5C7210BB4201_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x188C8F50)
#define CLASS_2_7B4D5C7210BB4201_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x188C91D0)
#define CLASS_2_7B4D5C7210BB4201_TICK_OFFSET UNITYSDK_OFFSET(0x188C9220)
#define CLASS_2_7B4D5C7210BB4201__CTOR_OFFSET UNITYSDK_OFFSET(0x188C8DD0)
#define CLASS_2_7B4D5C7210BB4201__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x188C9280)
#define CLASS_2_7B4D5C7210BB4201__ONTASKBEGIN_B__2_1_OFFSET UNITYSDK_OFFSET(0x188C92B0)

inline static constexpr unsigned int Class_2_7B4D5C7210BB4201_TypeDefinitionIndex = 52329;

class Class_2_7B4D5C7210BB4201 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::RPG::GameCore::AddBuffPerform* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_2; // 0x28
	::RPG::GameCore::FixPoint Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddBuffPerform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddBuffPerform*))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201_TICK_OFFSET))(this, a1);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B4D5C7210BB4201__ONTASKBEGIN_B__2_1_OFFSET))(this);
	}
};
