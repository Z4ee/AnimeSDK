#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3EE0A731EA0C8B63.h"

namespace RPG::Client { class MonoExUICamera; }

#define CLASS_2_1A03558EE92028F7_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x105F3570)
#define CLASS_2_1A03558EE92028F7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x105F35F0)
#define CLASS_2_1A03558EE92028F7__CTOR_OFFSET UNITYSDK_OFFSET(0x105F3560)

inline static constexpr unsigned int Class_2_1A03558EE92028F7_TypeDefinitionIndex = 59818;

class Class_2_1A03558EE92028F7 : public ::Class_1_3EE0A731EA0C8B63
{
public:
	::System::Void _ctor(::RPG::Client::MonoExUICamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoExUICamera*))((::PBYTE)hIl2Cpp + CLASS_2_1A03558EE92028F7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A03558EE92028F7_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1A03558EE92028F7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
