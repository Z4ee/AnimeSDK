#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C03EC65F99EF4B16;
class PushBoxGameView;
namespace System { class String; }

#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB262B0)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_B__0_OFFSET UNITYSDK_OFFSET(0x1BB262C0)
#define PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_G____GETDURATION_1_OFFSET UNITYSDK_OFFSET(0x1BB262F0)

inline static constexpr unsigned int PushBoxGameView___c__DisplayClass25_0_TypeDefinitionIndex = 42715;

class PushBoxGameView___c__DisplayClass25_0 : public ::System::Object
{
public:
	::System::String* textureKey; // 0x10
	::Class_2_C03EC65F99EF4B16* eventModel; // 0x18
	::PushBoxGameView* __4__this; // 0x20
	::System::Boolean beginFromMiddle; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void _PlayResetAnim_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_B__0_OFFSET))(this);
	}

	::System::Single _PlayResetAnim_g____getDuration_1(::System::Int32 x, ::System::Int32 y)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW___C__DISPLAYCLASS25_0__PLAYRESETANIM_G____GETDURATION_1_OFFSET))(this, x, y);
	}
};
