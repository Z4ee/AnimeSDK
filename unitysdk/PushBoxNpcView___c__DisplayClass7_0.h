#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_208CC9941471731A_321;
class PushBoxNpcView;

#define PUSHBOXNPCVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA5530)
#define PUSHBOXNPCVIEW___C__DISPLAYCLASS7_0__INIT_B__0_OFFSET UNITYSDK_OFFSET(0x12AA5540)

inline static constexpr unsigned int PushBoxNpcView___c__DisplayClass7_0_TypeDefinitionIndex = 77967;

class PushBoxNpcView___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_321* config; // 0x10
	::PushBoxNpcView* __4__this; // 0x18
	::UnityEngine::Vector2 tileSize; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _Init_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXNPCVIEW___C__DISPLAYCLASS7_0__INIT_B__0_OFFSET))(this);
	}
};
