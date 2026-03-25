#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_B6A8A062463EFFDD;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8A49350)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__STARTFORAUDIOPACK_B__0_OFFSET UNITYSDK_OFFSET(0x8A5E7C0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass4_0_TypeDefinitionIndex = 48158;

class Class_1_280047DF9F661B14___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_1_280047DF9F661B14* __4__this; // 0x18
	::Class_1_B6A8A062463EFFDD* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPack_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__STARTFORAUDIOPACK_B__0_OFFSET))(this);
	}
};
