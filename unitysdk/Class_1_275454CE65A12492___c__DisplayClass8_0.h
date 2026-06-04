#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_275454CE65A12492;
class Class_1_C6B3B57B6E91674E;
class Class_2_3487C21D96C73186;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437D170)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS8_0__STARTFORAUDIOPACK_B__0_OFFSET UNITYSDK_OFFSET(0x14398770)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass8_0_TypeDefinitionIndex = 55649;

class Class_1_275454CE65A12492___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_3487C21D96C73186* audioData; // 0x10
	::Class_1_275454CE65A12492* __4__this; // 0x18
	::Class_1_C6B3B57B6E91674E* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPack_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS8_0__STARTFORAUDIOPACK_B__0_OFFSET))(this);
	}
};
