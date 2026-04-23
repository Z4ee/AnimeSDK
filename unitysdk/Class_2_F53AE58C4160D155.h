#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_382;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F53AE58C4160D155_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B9C530)
#define CLASS_2_F53AE58C4160D155_METHOD_2_5F3AE37087DCC4E1_OFFSET UNITYSDK_OFFSET(0x9B9C700)
#define CLASS_2_F53AE58C4160D155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9B9C420)
#define CLASS_2_F53AE58C4160D155_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9B9C4E0)
#define CLASS_2_F53AE58C4160D155_TICK_OFFSET UNITYSDK_OFFSET(0x9B9CCF0)
#define CLASS_2_F53AE58C4160D155__CTOR_OFFSET UNITYSDK_OFFSET(0x9B9C090)

inline static constexpr unsigned int Class_2_F53AE58C4160D155_TypeDefinitionIndex = 48915;

class Class_2_F53AE58C4160D155 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_9; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::Class_3_E21F6DE9B7FA4D05* Field_2_7; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_6; // 0x30
	::Class_3_E21F6DE9B7FA4D05* Field_2_8; // 0x38
	::Class_3_E21F6DE9B7FA4D05* Field_2_5; // 0x40
	::RPG::GameCore::OpticalIllusionPuzzleEventListener* Field_2_1; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x58
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpticalIllusionPuzzleEventListener* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpticalIllusionPuzzleEventListener*))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_5F3AE37087DCC4E1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_METHOD_2_5F3AE37087DCC4E1_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_TICK_OFFSET))(this, a1);
	}
};
