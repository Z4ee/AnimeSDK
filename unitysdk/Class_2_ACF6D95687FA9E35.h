#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetMazePuzzleChallengeProgress; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_ACF6D95687FA9E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1763FDA0)
#define CLASS_2_ACF6D95687FA9E35_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1763FDE0)
#define CLASS_2_ACF6D95687FA9E35_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17640180)
#define CLASS_2_ACF6D95687FA9E35_TICK_OFFSET UNITYSDK_OFFSET(0x176401D0)
#define CLASS_2_ACF6D95687FA9E35__CTOR_OFFSET UNITYSDK_OFFSET(0x1763FD90)

inline static constexpr unsigned int Class_2_ACF6D95687FA9E35_TypeDefinitionIndex = 50818;

class Class_2_ACF6D95687FA9E35 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetMazePuzzleChallengeProgress* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::System::UInt32 Field_2_2; // 0x28

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
