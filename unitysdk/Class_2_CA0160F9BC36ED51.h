#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetTreasureChallenge; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_CA0160F9BC36ED51_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1180EF40)
#define CLASS_2_CA0160F9BC36ED51_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1180EDB0)
#define CLASS_2_CA0160F9BC36ED51_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1180EE90)
#define CLASS_2_CA0160F9BC36ED51_TICK_OFFSET UNITYSDK_OFFSET(0x1180EEE0)
#define CLASS_2_CA0160F9BC36ED51__CTOR_OFFSET UNITYSDK_OFFSET(0x1180EDA0)

inline static constexpr unsigned int Class_2_CA0160F9BC36ED51_TypeDefinitionIndex = 53866;

class Class_2_CA0160F9BC36ED51 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ResetTreasureChallenge* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTreasureChallenge* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTreasureChallenge*))((::PBYTE)hIl2Cpp + CLASS_2_CA0160F9BC36ED51__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0160F9BC36ED51_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0160F9BC36ED51_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CA0160F9BC36ED51_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA0160F9BC36ED51_DISPOSE_OFFSET))(this);
	}
};
