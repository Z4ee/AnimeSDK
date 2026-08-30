#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_FE782D5F3E67427E;
namespace RPG::GameCore { class PropSoundConfig; }

#define CLASS_2_FE782D5F3E67427E___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x154809B0)
#define CLASS_2_FE782D5F3E67427E___C__DISPLAYCLASS5_0__SETUPPROPTRIGGERSOUND_B__0_OFFSET UNITYSDK_OFFSET(0x154811F0)

inline static constexpr unsigned int Class_2_FE782D5F3E67427E___c__DisplayClass5_0_TypeDefinitionIndex = 57414;

class Class_2_FE782D5F3E67427E___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_2_FE782D5F3E67427E* __4__this; // 0x10
	::RPG::GameCore::PropSoundConfig* propSoundConfig; // 0x18
	::System::UInt32 overrideSoundConfigID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupPropTriggerSound_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE782D5F3E67427E___C__DISPLAYCLASS5_0__SETUPPROPTRIGGERSOUND_B__0_OFFSET))(this);
	}
};
