#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class SetMusicRhythmCamera; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_D02DC09721D8452B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11DC2040)
#define CLASS_2_D02DC09721D8452B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11DC1E50)
#define CLASS_2_D02DC09721D8452B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11DC1FF0)
#define CLASS_2_D02DC09721D8452B_TICK_OFFSET UNITYSDK_OFFSET(0x11DC20D0)
#define CLASS_2_D02DC09721D8452B__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC1D60)

inline static constexpr unsigned int Class_2_D02DC09721D8452B_TypeDefinitionIndex = 49100;

class Class_2_D02DC09721D8452B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x18
	::RPG::GameCore::SetMusicRhythmCamera* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_0; // 0x28
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x30
	::System::Boolean Field_2_2; // 0x38

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
