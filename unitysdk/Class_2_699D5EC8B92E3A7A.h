#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class BattleAudioState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_699D5EC8B92E3A7A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113F3790)
#define CLASS_2_699D5EC8B92E3A7A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113F37D0)
#define CLASS_2_699D5EC8B92E3A7A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113F3930)
#define CLASS_2_699D5EC8B92E3A7A_TICK_OFFSET UNITYSDK_OFFSET(0x113F3980)
#define CLASS_2_699D5EC8B92E3A7A__CTOR_OFFSET UNITYSDK_OFFSET(0x113F3780)

inline static constexpr unsigned int Class_2_699D5EC8B92E3A7A_TypeDefinitionIndex = 46723;

class Class_2_699D5EC8B92E3A7A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::BattleAudioState* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattleAudioState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattleAudioState*))((::PBYTE)hIl2Cpp + CLASS_2_699D5EC8B92E3A7A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_699D5EC8B92E3A7A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_699D5EC8B92E3A7A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_699D5EC8B92E3A7A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_699D5EC8B92E3A7A_TICK_OFFSET))(this, a1);
	}
};
