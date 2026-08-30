#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_DC1927E5DC719B53_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1A43A8D0)
#define CLASS_2_DC1927E5DC719B53__CTOR_OFFSET UNITYSDK_OFFSET(0x1A43A930)
#define CLASS_2_DC1927E5DC719B53__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A43A7F0)

inline static constexpr unsigned int Class_2_DC1927E5DC719B53_TypeDefinitionIndex = 71430;

class Class_2_DC1927E5DC719B53 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}
};
