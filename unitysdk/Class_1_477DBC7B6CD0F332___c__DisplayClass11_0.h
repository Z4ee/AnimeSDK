#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }

#define CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x109B49B0)
#define CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS11_0__GET_B__0_OFFSET UNITYSDK_OFFSET(0x109B4A30)

inline static constexpr unsigned int Class_1_477DBC7B6CD0F332___c__DisplayClass11_0_TypeDefinitionIndex = 54706;

class Class_1_477DBC7B6CD0F332___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::UInt32 buffID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Get_b__0(::RPG::Client::RogueBuffData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS11_0__GET_B__0_OFFSET))(this, x);
	}
};
