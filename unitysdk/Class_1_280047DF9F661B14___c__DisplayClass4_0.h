#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_280047DF9F661B14;
class Class_1_8C3AC9786B6764EF;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x96430D0)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__STARTFORAUDIOPACK_B__0_OFFSET UNITYSDK_OFFSET(0x96430E0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass4_0_TypeDefinitionIndex = 54903;

class Class_1_280047DF9F661B14___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_1_280047DF9F661B14* __4__this; // 0x10
	::Class_2_59664D23FCBEAD63* audioData; // 0x18
	::Class_1_8C3AC9786B6764EF* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPack_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS4_0__STARTFORAUDIOPACK_B__0_OFFSET))(this);
	}
};
