#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_741;
class Class_1_630CB84C93B59414;
class Class_1_D7FE7C0ADCE6BFB9;
class Class_2_5D2387066E2BACFE;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB1C8740)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0xB1DEB60)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0xB1DEBE0)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass10_0_TypeDefinitionIndex = 59500;

class Class_1_630CB84C93B59414___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_1_D7FE7C0ADCE6BFB9* queue; // 0x10
	::Class_1_630CB84C93B59414* __4__this; // 0x18
	::Class_2_5D2387066E2BACFE* audioData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_741* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_741*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};
