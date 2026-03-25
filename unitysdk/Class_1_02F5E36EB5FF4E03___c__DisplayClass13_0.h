#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36264895A759B0FF;

#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x109237D0)
#define CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS13_0__ISTIMELINEPLAYING_B__0_OFFSET UNITYSDK_OFFSET(0x10925470)

inline static constexpr unsigned int Class_1_02F5E36EB5FF4E03___c__DisplayClass13_0_TypeDefinitionIndex = 39285;

class Class_1_02F5E36EB5FF4E03___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Int32 id; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsTimelinePlaying_b__0(::Class_1_36264895A759B0FF* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_36264895A759B0FF*))((::PBYTE)hIl2Cpp + CLASS_1_02F5E36EB5FF4E03___C__DISPLAYCLASS13_0__ISTIMELINEPLAYING_B__0_OFFSET))(this, x);
	}
};
