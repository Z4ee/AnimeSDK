#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client::Prop { class BlockPuzzleBase; }
namespace RPG::GameCore { class CommonBoardPuzzleInBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B799AE57F99AD856_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB780650)
#define CLASS_2_B799AE57F99AD856_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7809A0)
#define CLASS_2_B799AE57F99AD856_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB7809F0)
#define CLASS_2_B799AE57F99AD856_TICK_OFFSET UNITYSDK_OFFSET(0xB7806F0)
#define CLASS_2_B799AE57F99AD856__CTOR_OFFSET UNITYSDK_OFFSET(0xB7804C0)

inline static constexpr unsigned int Class_2_B799AE57F99AD856_TypeDefinitionIndex = 54232;

class Class_2_B799AE57F99AD856 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::Prop::BlockPuzzleBase* Field_2_2; // 0x28
	::Class_1_F3391C70DC37088D* Field_2_3; // 0x30
	::RPG::GameCore::CommonBoardPuzzleInBoard* Field_2_4; // 0x38
	::Class_3_07C3C4D2990C49EE* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::Class_1_F3391C70DC37088D* Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CommonBoardPuzzleInBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CommonBoardPuzzleInBoard*))((::PBYTE)hIl2Cpp + CLASS_2_B799AE57F99AD856__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799AE57F99AD856_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B799AE57F99AD856_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799AE57F99AD856_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B799AE57F99AD856_ONTASKRESET_OFFSET))(this);
	}
};
