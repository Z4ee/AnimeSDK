#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMazePuzzleChallengeProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ACF6D95687FA9E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB8E8F0)
#define CLASS_2_ACF6D95687FA9E35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB8E930)
#define CLASS_2_ACF6D95687FA9E35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB8ECD0)
#define CLASS_2_ACF6D95687FA9E35_TICK_OFFSET UNITYSDK_OFFSET(0xBB8ED20)
#define CLASS_2_ACF6D95687FA9E35__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8E8E0)

inline static constexpr unsigned int Class_2_ACF6D95687FA9E35_TypeDefinitionIndex = 53500;

class Class_2_ACF6D95687FA9E35 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetMazePuzzleChallengeProgress* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::System::UInt32 DNCPEJNPCBC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMazePuzzleChallengeProgress* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMazePuzzleChallengeProgress*))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D95687FA9E35__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D95687FA9E35_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D95687FA9E35_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D95687FA9E35_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ACF6D95687FA9E35_TICK_OFFSET))(this, a1);
	}
};
