#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_DC1927E5DC719B53_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xBB1CF30)
#define CLASS_2_DC1927E5DC719B53_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1CF90)
#define CLASS_2_DC1927E5DC719B53_1__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB1CE70)

inline static constexpr unsigned int Class_2_DC1927E5DC719B53_1_TypeDefinitionIndex = 72177;

class Class_2_DC1927E5DC719B53_1 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* JDOAGFALGGA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}
};
