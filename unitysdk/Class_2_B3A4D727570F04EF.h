#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PrepareFinishMazePuzzleChallenge; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B3A4D727570F04EF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA05B750)
#define CLASS_2_B3A4D727570F04EF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA05B790)
#define CLASS_2_B3A4D727570F04EF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA05B8F0)
#define CLASS_2_B3A4D727570F04EF_TICK_OFFSET UNITYSDK_OFFSET(0xA05B940)
#define CLASS_2_B3A4D727570F04EF__CTOR_OFFSET UNITYSDK_OFFSET(0xA05B740)

inline static constexpr unsigned int Class_2_B3A4D727570F04EF_TypeDefinitionIndex = 49026;

class Class_2_B3A4D727570F04EF : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PropComponent* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::PrepareFinishMazePuzzleChallenge* Field_2_0; // 0x28
	::System::UInt32 Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PrepareFinishMazePuzzleChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_B3A4D727570F04EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3A4D727570F04EF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3A4D727570F04EF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3A4D727570F04EF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B3A4D727570F04EF_TICK_OFFSET))(this, a1);
	}
};
