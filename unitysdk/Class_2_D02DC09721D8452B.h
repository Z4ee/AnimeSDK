#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class SetMusicRhythmCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D02DC09721D8452B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157995F0)
#define CLASS_2_D02DC09721D8452B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15799400)
#define CLASS_2_D02DC09721D8452B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157995A0)
#define CLASS_2_D02DC09721D8452B_TICK_OFFSET UNITYSDK_OFFSET(0x15799750)
#define CLASS_2_D02DC09721D8452B__CTOR_OFFSET UNITYSDK_OFFSET(0x15799310)

inline static constexpr unsigned int Class_2_D02DC09721D8452B_TypeDefinitionIndex = 53504;

class Class_2_D02DC09721D8452B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetMusicRhythmCamera* IGHAHBNLIJA; // 0x18
	::Class_3_07C3C4D2990C49EE* GBLJDCNIHNJ; // 0x20
	::Class_3_07C3C4D2990C49EE* BLMMJCIHINO; // 0x28
	::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
	::System::Boolean GPIPKFHMHOK; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMusicRhythmCamera* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMusicRhythmCamera*))((::PBYTE)hIl2Cpp + CLASS_2_D02DC09721D8452B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D02DC09721D8452B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D02DC09721D8452B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D02DC09721D8452B_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D02DC09721D8452B_TICK_OFFSET))(this, a1);
	}
};
