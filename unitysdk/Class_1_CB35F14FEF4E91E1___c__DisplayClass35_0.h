#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools { class TimelineData; }
namespace System { class String; }

#define CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CB95A0)
#define CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS35_0___GETTIMELINEPATH_B__0_OFFSET UNITYSDK_OFFSET(0x15CB95D0)

inline static constexpr unsigned int Class_1_CB35F14FEF4E91E1___c__DisplayClass35_0_TypeDefinitionIndex = 48949;

class Class_1_CB35F14FEF4E91E1___c__DisplayClass35_0 : public ::System::Object
{
public:
	::System::String* timelineName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetTimelinePath_b__0(::RPGTools::TimelineData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPGTools::TimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_CB35F14FEF4E91E1___C__DISPLAYCLASS35_0___GETTIMELINEPATH_B__0_OFFSET))(this, a1);
	}
};
