#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_273AB9C9690DD47B_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x12A21780)
#define CLASS_2_273AB9C9690DD47B_1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x12A21980)
#define CLASS_2_273AB9C9690DD47B_1_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x12A218B0)
#define CLASS_2_273AB9C9690DD47B_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x12A21900)
#define CLASS_2_273AB9C9690DD47B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A21950)
#define CLASS_2_273AB9C9690DD47B_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x12A217E0)
#define CLASS_2_273AB9C9690DD47B_1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x12A219F0)

inline static constexpr unsigned int Class_2_273AB9C9690DD47B_1_TypeDefinitionIndex = 65939;

class Class_2_273AB9C9690DD47B_1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
