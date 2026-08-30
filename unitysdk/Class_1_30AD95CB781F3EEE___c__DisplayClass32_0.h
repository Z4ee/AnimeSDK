#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;
namespace System { class String; }

#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACCC60)
#define CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__GETTIMELINEDURATION_B__0_OFFSET UNITYSDK_OFFSET(0x15ACD9E0)

inline static constexpr unsigned int Class_1_30AD95CB781F3EEE___c__DisplayClass32_0_TypeDefinitionIndex = 48939;

class Class_1_30AD95CB781F3EEE___c__DisplayClass32_0 : public ::System::Object
{
public:
	::System::String* timelinePath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetTimelineDuration_b__0(::Class_1_36264895A759B0FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_30AD95CB781F3EEE___C__DISPLAYCLASS32_0__GETTIMELINEDURATION_B__0_OFFSET))(this, a1);
	}
};
