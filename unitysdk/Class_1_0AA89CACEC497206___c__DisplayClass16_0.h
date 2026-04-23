#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightPlayer; }

#define CLASS_1_0AA89CACEC497206___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11D77DA0)
#define CLASS_1_0AA89CACEC497206___C__DISPLAYCLASS16_0__GETPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0x11D77EA0)

inline static constexpr unsigned int Class_1_0AA89CACEC497206___c__DisplayClass16_0_TypeDefinitionIndex = 63932;

class Class_1_0AA89CACEC497206___c__DisplayClass16_0 : public ::System::Object
{
public:
	::System::UInt32 uid; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetPlayer_b__0(::RPG::Client::FightPlayer* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_0AA89CACEC497206___C__DISPLAYCLASS16_0__GETPLAYER_B__0_OFFSET))(this, x);
	}
};
