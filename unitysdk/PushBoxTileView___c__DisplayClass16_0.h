#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_410;
class PushBoxTileView;

#define PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8CAE0)
#define PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__REFRESHBYSERVERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1DE8CAF0)

inline static constexpr unsigned int PushBoxTileView___c__DisplayClass16_0_TypeDefinitionIndex = 54644;

class PushBoxTileView___c__DisplayClass16_0 : public ::System::Object
{
public:
	::PushBoxTileView* __4__this; // 0x10
	::Class_2_208CC9941471731A_410* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _RefreshByServerInfo_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXTILEVIEW___C__DISPLAYCLASS16_0__REFRESHBYSERVERINFO_B__0_OFFSET))(this);
	}
};
