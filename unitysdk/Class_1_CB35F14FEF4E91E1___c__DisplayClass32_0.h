#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools { class TimelineData; }
namespace System { class String; }

#define CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD7F2B60)
#define CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS32_0___GETTIMELINEPATH_B__0_OFFSET UNITYSDK_OFFSET(0xD7F2B90)

inline static constexpr unsigned int Class_1_CB35F14FEF4E91E1___c__DisplayClass32_0_TypeDefinitionIndex = 39298;

class Class_1_CB35F14FEF4E91E1___c__DisplayClass32_0 : public ::System::Object
{
public:
	::System::String* timelineName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTimelinePath_b__0(::RPGTools::TimelineData* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS32_0___GETTIMELINEPATH_B__0_OFFSET))(this, x);
	}
};
