#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MonopolyActionResult; }

#define CLASS_1_0920B9E794BF36B2_TRIGGER_OFFSET UNITYSDK_OFFSET(0xBE9B0D0)
#define CLASS_1_0920B9E794BF36B2__CTOR_OFFSET UNITYSDK_OFFSET(0xBE9AFB0)

inline static constexpr unsigned int Class_1_0920B9E794BF36B2_TypeDefinitionIndex = 66230;

class Class_1_0920B9E794BF36B2 : public ::System::Object
{
public:
	::System::Boolean MELOJDPIGPD; // 0x10
	::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x14
	::System::UInt32 JPKEIFONDCP; // 0x18

	::System::Void _ctor(::Proto::MonopolyActionResult* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + CLASS_1_0920B9E794BF36B2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Trigger()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0920B9E794BF36B2_TRIGGER_OFFSET))(this);
	}
};
