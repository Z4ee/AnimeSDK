#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_401;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F53AE58C4160D155_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA798F10)
#define CLASS_2_F53AE58C4160D155_METHOD_2_3C846407474D7238_OFFSET UNITYSDK_OFFSET(0xA799100)
#define CLASS_2_F53AE58C4160D155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA798DE0)
#define CLASS_2_F53AE58C4160D155_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA798EC0)
#define CLASS_2_F53AE58C4160D155_TICK_OFFSET UNITYSDK_OFFSET(0xA7996F0)
#define CLASS_2_F53AE58C4160D155__CTOR_OFFSET UNITYSDK_OFFSET(0xA798A50)

inline static constexpr unsigned int Class_2_F53AE58C4160D155_TypeDefinitionIndex = 49581;

class Class_2_F53AE58C4160D155 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::Class_3_07C3C4D2990C49EE* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::RPG::GameCore::OpticalIllusionPuzzleEventListener* Field_2_6; // 0x48
	::RPG::GameCore::TaskContext* Field_2_7; // 0x50
	::Class_3_07C3C4D2990C49EE* Field_2_8; // 0x58
	::Class_3_07C3C4D2990C49EE* Field_2_9; // 0x60

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

	::System::Void Method_2_3C846407474D7238(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_METHOD_2_3C846407474D7238_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_TICK_OFFSET))(this, a1);
	}
};
