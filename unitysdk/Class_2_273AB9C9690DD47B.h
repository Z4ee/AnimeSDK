#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_273AB9C9690DD47B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x18A904B0)
#define CLASS_2_273AB9C9690DD47B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18A905E0)
#define CLASS_2_273AB9C9690DD47B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18A90630)
#define CLASS_2_273AB9C9690DD47B__CTOR_OFFSET UNITYSDK_OFFSET(0x18A90680)
#define CLASS_2_273AB9C9690DD47B__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A90510)

inline static constexpr unsigned int Class_2_273AB9C9690DD47B_TypeDefinitionIndex = 71493;

class Class_2_273AB9C9690DD47B : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273AB9C9690DD47B_ONRETURN_OFFSET))(this);
	}
};
