#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_DC1927E5DC719B53_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x8D19EB0)
#define CLASS_2_DC1927E5DC719B53_1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8D19FA0)
#define CLASS_2_DC1927E5DC719B53_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D19F10)
#define CLASS_2_DC1927E5DC719B53_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D19DF0)
#define CLASS_2_DC1927E5DC719B53_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8D19F40)

inline static constexpr unsigned int Class_2_DC1927E5DC719B53_1_TypeDefinitionIndex = 59165;

class Class_2_DC1927E5DC719B53_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_DC1927E5DC719B53_1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}
};
