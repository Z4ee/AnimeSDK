#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class FinishMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_51A6469D76CB3722_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1643AA40)
#define CLASS_2_51A6469D76CB3722_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1643AA80)
#define CLASS_2_51A6469D76CB3722_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1643ABF0)
#define CLASS_2_51A6469D76CB3722_TICK_OFFSET UNITYSDK_OFFSET(0x1643AC40)
#define CLASS_2_51A6469D76CB3722__CTOR_OFFSET UNITYSDK_OFFSET(0x1643AA30)

inline static constexpr unsigned int Class_2_51A6469D76CB3722_TypeDefinitionIndex = 53090;

class Class_2_51A6469D76CB3722 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FinishMazePuzzleChallenge* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::PropComponent* GBLNDEKFNNJ; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::System::UInt32 DNCPEJNPCBC; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FinishMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_51A6469D76CB3722__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A6469D76CB3722_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A6469D76CB3722_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_51A6469D76CB3722_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_51A6469D76CB3722_TICK_OFFSET))(this, a1);
	}
};
