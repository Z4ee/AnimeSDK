#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;

#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC3920)
#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS21_0__STOPTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x18DC5700)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c__DisplayClass21_0_TypeDefinitionIndex = 48938;

class Class_1_30AD95CB781F3EEE___c__DisplayClass21_0 : public ::System::Object
{
public:
	::System::Int32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _StopTimeline_b__0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS21_0__STOPTIMELINE_B__0_OFFSET))(this, a1);
	}
};
