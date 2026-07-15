#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_273AB9C9690DD47B_1_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x16CA6630)
#define CLASS_2_273AB9C9690DD47B_1_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16CA6760)
#define CLASS_2_273AB9C9690DD47B_1_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16CA67B0)
#define CLASS_2_273AB9C9690DD47B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA6800)
#define CLASS_2_273AB9C9690DD47B_1__ONBIND_OFFSET UNITYSDK_OFFSET(0x16CA6690)

inline static constexpr unsigned int Class_2_273AB9C9690DD47B_1_TypeDefinitionIndex = 68314;

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
};
