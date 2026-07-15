#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class PlayCrossHairPreviewFadeIn; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_01362D25A6101261_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EA6160)
#define CLASS_2_01362D25A6101261_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EA61A0)
#define CLASS_2_01362D25A6101261_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16EA6290)
#define CLASS_2_01362D25A6101261_TICK_OFFSET UNITYSDK_OFFSET(0x16EA62E0)
#define CLASS_2_01362D25A6101261__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA6150)

inline static constexpr unsigned int Class_2_01362D25A6101261_TypeDefinitionIndex = 53835;

class Class_2_01362D25A6101261 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::PlayCrossHairPreviewFadeIn* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + CLASS_2_01362D25A6101261__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01362D25A6101261_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01362D25A6101261_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01362D25A6101261_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_01362D25A6101261_TICK_OFFSET))(this, a1);
	}
};
