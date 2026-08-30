#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9C8BB23B0435A836;

#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA5A60)
#define CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS63_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET UNITYSDK_OFFSET(0x17FA9AA0)

inline static constexpr unsigned int Class_1_40CD5CE8474BAA94___c__DisplayClass63_0_TypeDefinitionIndex = 60434;

class Class_1_40CD5CE8474BAA94___c__DisplayClass63_0 : public ::System::Object
{
public:
	::Class_1_9C8BB23B0435A836* dice; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshStageDicesRender_b__0(::Class_1_9C8BB23B0435A836* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9C8BB23B0435A836*))((::PBYTE)hIl2Cpp + CLASS_1_40CD5CE8474BAA94___C__DISPLAYCLASS63_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET))(this, a1);
	}
};
