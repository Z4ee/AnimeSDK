#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_650;
class Class_1_630CB84C93B59414;
class Class_1_8CA784D26D9A6CF7;
class Class_2_5D2387066E2BACFE;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162E9390)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0x162FF710)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0x162FF790)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass10_0_TypeDefinitionIndex = 59645;

class Class_1_630CB84C93B59414___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_2_5D2387066E2BACFE* audioData; // 0x10
	::Class_1_8CA784D26D9A6CF7* queue; // 0x18
	::Class_1_630CB84C93B59414* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_650* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_650*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, a1);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS10_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};
