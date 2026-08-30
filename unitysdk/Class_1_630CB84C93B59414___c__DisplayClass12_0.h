#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_25E482C4AD2F8486_Class_1_ACF0E08C68D3724A;
class Class_2_570C2CCF5D0BF6A1;

#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162BC190)
#define CLASS_1_630CB84C93B59414___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x162D1170)

inline static constexpr unsigned int Class_1_630CB84C93B59414___c__DisplayClass12_0_TypeDefinitionIndex = 59647;

class Class_1_630CB84C93B59414___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_2_570C2CCF5D0BF6A1* audioPatch; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _OnAudioHPatchFinish_b__0(::Class_2_25E482C4AD2F8486_Class_1_ACF0E08C68D3724A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_25E482C4AD2F8486_Class_1_ACF0E08C68D3724A*))((::PBYTE)hIl2Cpp + CLASS_1_630CB84C93B59414___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET))(this, a1);
	}
};
