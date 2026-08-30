#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_460;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class OpticalIllusionPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_F53AE58C4160D155_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AB36B0)
#define CLASS_2_F53AE58C4160D155_METHOD_2_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0x19AB3C10)
#define CLASS_2_F53AE58C4160D155_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19AB3580)
#define CLASS_2_F53AE58C4160D155_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19AB3660)
#define CLASS_2_F53AE58C4160D155_TICK_OFFSET UNITYSDK_OFFSET(0x19AB4270)
#define CLASS_2_F53AE58C4160D155__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB31F0)

inline static constexpr unsigned int Class_2_F53AE58C4160D155_TypeDefinitionIndex = 53316;

class Class_2_F53AE58C4160D155 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
	::Class_3_07C3C4D2990C49EE* CIFOILLJFNF; // 0x20
	::RPG::GameCore::OpticalIllusionPuzzleEventListener* IGHAHBNLIJA; // 0x28
	::Class_3_07C3C4D2990C49EE* LGNCIBMAIEA; // 0x30
	::Class_3_07C3C4D2990C49EE* NDPIPPKNDMA; // 0x38
	::Class_3_07C3C4D2990C49EE* NJBHAENKEEF; // 0x40
	::Class_3_07C3C4D2990C49EE* PAOJOBEPBIO; // 0x48
	::Class_3_07C3C4D2990C49EE* JAKNDHHOCJE; // 0x50
	::Class_3_07C3C4D2990C49EE* KIJAPLDDHNL; // 0x58
	::Class_3_07C3C4D2990C49EE* BAONKBDCBDN; // 0x60

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

	::System::Void Method_2_6BD012F436E1844D(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_METHOD_2_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F53AE58C4160D155_TICK_OFFSET))(this, a1);
	}
};
