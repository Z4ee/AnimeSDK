#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_630CB84C93B59414;
class Class_1_C6B3B57B6E91674E;
class Class_2_5D2387066E2BACFE;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A2FEB0)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0x14A46160)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0x14A461E0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass10_0_TypeDefinitionIndex = 56857;

class Class_1_630CB84C93B59414___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_C6B3B57B6E91674E* queue; // 0x10
	::Class_1_630CB84C93B59414* __4__this; // 0x18
	::Class_2_5D2387066E2BACFE* audioData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_614* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_614*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};
