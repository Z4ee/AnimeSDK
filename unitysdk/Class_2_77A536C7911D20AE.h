#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ResetTeamEntityFaceDir; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_77A536C7911D20AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19B6A0)
#define CLASS_2_77A536C7911D20AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC19B6E0)
#define CLASS_2_77A536C7911D20AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC19BA30)
#define CLASS_2_77A536C7911D20AE_TICK_OFFSET UNITYSDK_OFFSET(0xC19BA80)
#define CLASS_2_77A536C7911D20AE__CTOR_OFFSET UNITYSDK_OFFSET(0xC19B690)

inline static constexpr unsigned int Class_2_77A536C7911D20AE_TypeDefinitionIndex = 56384;

class Class_2_77A536C7911D20AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ResetTeamEntityFaceDir* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetTeamEntityFaceDir* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetTeamEntityFaceDir*))((::PBYTE)hIl2Cpp + CLASS_2_77A536C7911D20AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A536C7911D20AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A536C7911D20AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77A536C7911D20AE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_77A536C7911D20AE_TICK_OFFSET))(this, a1);
	}
};
