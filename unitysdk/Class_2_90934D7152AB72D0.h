#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_90934D7152AB72D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195CFB50)
#define CLASS_2_90934D7152AB72D0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x195CFD00)
#define CLASS_2_90934D7152AB72D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195CFB90)
#define CLASS_2_90934D7152AB72D0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x195CFC60)
#define CLASS_2_90934D7152AB72D0_TICK_OFFSET UNITYSDK_OFFSET(0x195CFCA0)
#define CLASS_2_90934D7152AB72D0__CTOR_OFFSET UNITYSDK_OFFSET(0x195CFB40)

inline static constexpr unsigned int Class_2_90934D7152AB72D0_TypeDefinitionIndex = 53675;

class Class_2_90934D7152AB72D0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::PlayTrainPartySimpleTalk* OFKGLJOAMLD; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90934D7152AB72D0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
