#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_398A3F8E1AEA1265___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163307A0)
#define CLASS_2_398A3F8E1AEA1265___C__DISPLAYCLASS6_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x16330D60)

inline static constexpr unsigned int Class_2_398A3F8E1AEA1265___c__DisplayClass6_0_TypeDefinitionIndex = 55522;

class Class_2_398A3F8E1AEA1265___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::String* controllerName; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_398A3F8E1AEA1265___C__DISPLAYCLASS6_0__ONTASKBEGIN_B__0_OFFSET))(this);
	}
};
