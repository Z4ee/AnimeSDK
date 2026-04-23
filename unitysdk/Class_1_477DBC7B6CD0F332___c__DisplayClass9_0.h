#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueBuffData; }

#define CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1249F050)
#define CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS9_0__REMOVE_B__0_OFFSET UNITYSDK_OFFSET(0x1249F170)

inline static constexpr unsigned int Class_1_477DBC7B6CD0F332___c__DisplayClass9_0_TypeDefinitionIndex = 61895;

class Class_1_477DBC7B6CD0F332___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::UInt32 buffID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Remove_b__0(::RPG::Client::RogueBuffData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueBuffData*))((::PBYTE)hIl2Cpp + CLASS_1_477DBC7B6CD0F332___C__DISPLAYCLASS9_0__REMOVE_B__0_OFFSET))(this, x);
	}
};
