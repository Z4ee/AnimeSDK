#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A;
class Class_2_C5B09DEAAF6D0487;

#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437EF30)
#define CLASS_1_275454CE65A12492___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x14392F90)

inline static constexpr unsigned int Class_1_275454CE65A12492___c__DisplayClass12_0_TypeDefinitionIndex = 55622;

class Class_1_275454CE65A12492___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_2_C5B09DEAAF6D0487* audioPatch; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnAudioHPatchFinish_b__0(::Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_8D6A893BEF7BEB75_Class_1_ACF0E08C68D3724A*))((::PBYTE)hIl2Cpp + CLASS_1_275454CE65A12492___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET))(this, a1);
	}
};
