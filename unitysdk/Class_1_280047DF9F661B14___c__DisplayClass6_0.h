#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_280047DF9F661B14;
class Class_1_8C3AC9786B6764EF;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9644160)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0x9644170)
#define CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0x96441F0)

inline static constexpr unsigned int Class_1_280047DF9F661B14___c__DisplayClass6_0_TypeDefinitionIndex = 54912;

class Class_1_280047DF9F661B14___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_1_8C3AC9786B6764EF* queue; // 0x18
	::Class_1_280047DF9F661B14* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_557* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_280047DF9F661B14___C__DISPLAYCLASS6_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};
