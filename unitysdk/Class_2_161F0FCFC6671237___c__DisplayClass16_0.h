#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95EEF67A826E14FF;

#define CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173EA2B0)
#define CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS16_0___TRYENQUEENTRYQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x173EA4C0)

inline static constexpr unsigned int Class_2_161F0FCFC6671237___c__DisplayClass16_0_TypeDefinitionIndex = 68323;

class Class_2_161F0FCFC6671237___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_1_95EEF67A826E14FF* entry; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryEnqueEntryQueue_b__0(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_161F0FCFC6671237___C__DISPLAYCLASS16_0___TRYENQUEENTRYQUEUE_B__0_OFFSET))(this, a1);
	}
};
