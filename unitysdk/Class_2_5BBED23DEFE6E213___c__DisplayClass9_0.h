#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueAreaData; }

#define CLASS_2_5BBED23DEFE6E213___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x111042A0)
#define CLASS_2_5BBED23DEFE6E213___C__DISPLAYCLASS9_0___CHECKNEEDADDSCHEDULEEXPIRE_B__0_OFFSET UNITYSDK_OFFSET(0x11104B80)

inline static constexpr unsigned int Class_2_5BBED23DEFE6E213___c__DisplayClass9_0_TypeDefinitionIndex = 49614;

class Class_2_5BBED23DEFE6E213___c__DisplayClass9_0 : public ::System::Object
{
public:
	::System::UInt32 curAreaID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BBED23DEFE6E213___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __CheckNeedAddScheduleExpire_b__0(::RPG::Client::RogueAreaData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueAreaData*))((::PBYTE)hIl2Cpp + CLASS_2_5BBED23DEFE6E213___C__DISPLAYCLASS9_0___CHECKNEEDADDSCHEDULEEXPIRE_B__0_OFFSET))(this, x);
	}
};
