#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetAudioEmotionState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_22B90D5634549A98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EF6D70)
#define CLASS_2_22B90D5634549A98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EF6DB0)
#define CLASS_2_22B90D5634549A98_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EF72F0)
#define CLASS_2_22B90D5634549A98_TICK_OFFSET UNITYSDK_OFFSET(0x16EF7340)
#define CLASS_2_22B90D5634549A98__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF6D60)

inline static constexpr unsigned int Class_2_22B90D5634549A98_TypeDefinitionIndex = 55888;

class Class_2_22B90D5634549A98 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::SetAudioEmotionState* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + CLASS_2_22B90D5634549A98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B90D5634549A98_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B90D5634549A98_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22B90D5634549A98_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_22B90D5634549A98_TICK_OFFSET))(this, a1);
	}
};
