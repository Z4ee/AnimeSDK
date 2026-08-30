#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzlePlayerInBoardState.h"

class Class_1_F3391C70DC37088D;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PuzzleBoxmanInBoard; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0DB70661728938D1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1874AB20)
#define CLASS_2_0DB70661728938D1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1874AA80)
#define CLASS_2_0DB70661728938D1_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1874AAD0)
#define CLASS_2_0DB70661728938D1_TICK_OFFSET UNITYSDK_OFFSET(0x1874AC80)
#define CLASS_2_0DB70661728938D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1874A880)

inline static constexpr unsigned int Class_2_0DB70661728938D1_TypeDefinitionIndex = 58517;

class Class_2_0DB70661728938D1 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* ALMDGNBNPLB; // 0x18
	::Class_1_F3391C70DC37088D* EEMAFOMJMEB; // 0x20
	::RPG::Client::Prop::BoxmanPuzzleBoard* CCAHGFIABKE; // 0x28
	::Class_3_07C3C4D2990C49EE* BHENBGMFOLJ; // 0x30
	::RPG::GameCore::PuzzleBoxmanInBoard* IGHAHBNLIJA; // 0x38
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x40
	::Class_1_F3391C70DC37088D* KLOAHJPKECK; // 0x48
	::Class_3_07C3C4D2990C49EE* GBEAGJJBPAN; // 0x50
	::RPG::Client::Prop::BoxmanPuzzlePlayerInBoardState OHOMIFJPGFE; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + CLASS_2_0DB70661728938D1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB70661728938D1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB70661728938D1_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB70661728938D1_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0DB70661728938D1_TICK_OFFSET))(this, a1);
	}
};
