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

#define CLASS_2_B66B2B4A7689CC14_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5E58F0)
#define CLASS_2_B66B2B4A7689CC14_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5E5850)
#define CLASS_2_B66B2B4A7689CC14_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA5E58A0)
#define CLASS_2_B66B2B4A7689CC14_TICK_OFFSET UNITYSDK_OFFSET(0xA5E5980)
#define CLASS_2_B66B2B4A7689CC14__CTOR_OFFSET UNITYSDK_OFFSET(0xA5E56C0)

inline static constexpr unsigned int Class_2_B66B2B4A7689CC14_TypeDefinitionIndex = 54562;

class Class_2_B66B2B4A7689CC14 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PuzzleBoxmanInBoard* Field_2_0; // 0x18
	::RPG::GameCore::PropComponent* Field_2_1; // 0x20
	::Class_1_F3391C70DC37088D* Field_2_2; // 0x28
	::RPG::Client::Prop::BoxmanPuzzleBoard* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_4; // 0x38
	::Class_1_F3391C70DC37088D* Field_2_5; // 0x40
	::Class_3_07C3C4D2990C49EE* Field_2_6; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_2_7; // 0x50
	::RPG::Client::Prop::BoxmanPuzzlePlayerInBoardState Field_2_8; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PuzzleBoxmanInBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PuzzleBoxmanInBoard*))((::PBYTE)hIl2Cpp + CLASS_2_B66B2B4A7689CC14__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B66B2B4A7689CC14_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B66B2B4A7689CC14_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B66B2B4A7689CC14_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B66B2B4A7689CC14_TICK_OFFSET))(this, a1);
	}
};
