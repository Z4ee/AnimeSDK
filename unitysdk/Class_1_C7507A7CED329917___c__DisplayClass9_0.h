#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2F51BD0FF76EEB32;
class Class_1_947F5BB3E2AFC4CE;

#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9878F80)
#define CLASS_1_C7507A7CED329917___C__DISPLAYCLASS9_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x9878F90)

inline static constexpr unsigned int Class_1_C7507A7CED329917___c__DisplayClass9_0_TypeDefinitionIndex = 45200;

class Class_1_C7507A7CED329917___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_2F51BD0FF76EEB32* performerGroup; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _PlayTimeline_b__0(::Class_1_947F5BB3E2AFC4CE* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_947F5BB3E2AFC4CE*))((::PBYTE)hIl2Cpp + CLASS_1_C7507A7CED329917___C__DISPLAYCLASS9_0__PLAYTIMELINE_B__0_OFFSET))(this, x);
	}
};
