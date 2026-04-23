#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class AdvLoopTimer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_231D1AC1552F9A03_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9988CD0)
#define CLASS_2_231D1AC1552F9A03_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9988D60)
#define CLASS_2_231D1AC1552F9A03_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9989120)
#define CLASS_2_231D1AC1552F9A03_TICK_OFFSET UNITYSDK_OFFSET(0x9988E00)
#define CLASS_2_231D1AC1552F9A03__CTOR_OFFSET UNITYSDK_OFFSET(0x9988BC0)

inline static constexpr unsigned int Class_2_231D1AC1552F9A03_TypeDefinitionIndex = 48371;

class Class_2_231D1AC1552F9A03 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::AdvLoopTimer* Field_2_0; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_2; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_1; // 0x28
	::System::Single Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvLoopTimer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvLoopTimer*))((::PBYTE)hIl2Cpp + CLASS_2_231D1AC1552F9A03__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231D1AC1552F9A03_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231D1AC1552F9A03_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_231D1AC1552F9A03_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_231D1AC1552F9A03_ONTASKRESET_OFFSET))(this);
	}
};
