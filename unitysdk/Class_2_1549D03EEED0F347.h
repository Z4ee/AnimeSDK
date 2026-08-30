#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class BlockPuzzleBase; }
namespace RPG::GameCore { class CommonBoardPuzzleInBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1549D03EEED0F347_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD140D0)
#define CLASS_2_1549D03EEED0F347_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCD14500)
#define CLASS_2_1549D03EEED0F347_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCD14550)
#define CLASS_2_1549D03EEED0F347_TICK_OFFSET UNITYSDK_OFFSET(0xCD14250)
#define CLASS_2_1549D03EEED0F347__CTOR_OFFSET UNITYSDK_OFFSET(0xCD13ED0)

inline static constexpr unsigned int Class_2_1549D03EEED0F347_TypeDefinitionIndex = 58186;

class Class_2_1549D03EEED0F347 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* BHENBGMFOLJ; // 0x18
	::RPG::GameCore::CommonBoardPuzzleInBoard* IGHAHBNLIJA; // 0x20
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
	::RPG::GameCore::PropComponent* ALMDGNBNPLB; // 0x30
	::Class_3_07C3C4D2990C49EE* GBEAGJJBPAN; // 0x38
	::Class_1_F3391C70DC37088D* KLOAHJPKECK; // 0x40
	::Class_1_F3391C70DC37088D* EEMAFOMJMEB; // 0x48
	::RPG::Client::Prop::BlockPuzzleBase* CCAHGFIABKE; // 0x50
	::System::Boolean OGIMPEPMDIL; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + CLASS_2_1549D03EEED0F347__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549D03EEED0F347_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1549D03EEED0F347_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549D03EEED0F347_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1549D03EEED0F347_ONTASKRESET_OFFSET))(this);
	}
};
