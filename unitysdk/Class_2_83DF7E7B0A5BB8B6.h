#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitWaveBattlePerformFinish; }

#define CLASS_2_83DF7E7B0A5BB8B6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12332940)
#define CLASS_2_83DF7E7B0A5BB8B6_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x12332AA0)
#define CLASS_2_83DF7E7B0A5BB8B6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x123329E0)
#define CLASS_2_83DF7E7B0A5BB8B6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12332990)
#define CLASS_2_83DF7E7B0A5BB8B6_TICK_OFFSET UNITYSDK_OFFSET(0x12332B20)
#define CLASS_2_83DF7E7B0A5BB8B6__CTOR_OFFSET UNITYSDK_OFFSET(0x12332930)

inline static constexpr unsigned int Class_2_83DF7E7B0A5BB8B6_TypeDefinitionIndex = 51463;

class Class_2_83DF7E7B0A5BB8B6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitWaveBattlePerformFinish* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitWaveBattlePerformFinish*))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83DF7E7B0A5BB8B6_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
