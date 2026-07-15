#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_20D3150E1235DCB5.h"
#include "unitysdk/Struct_2_27685EFF2E84A814.h"

class Class_1_B5F93263C61C75CE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_2_840F46B8319F9F66_METHOD_2_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x140EA490)
#define CLASS_2_840F46B8319F9F66_METHOD_2_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x140EA960)
#define CLASS_2_840F46B8319F9F66_METHOD_2_87411ABA28C869BA_OFFSET UNITYSDK_OFFSET(0x140EAA20)
#define CLASS_2_840F46B8319F9F66_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x140EA850)
#define CLASS_2_840F46B8319F9F66_METHOD_2_CEEC03EFD89445AA_OFFSET UNITYSDK_OFFSET(0x140EAAA0)
#define CLASS_2_840F46B8319F9F66_TICK_OFFSET UNITYSDK_OFFSET(0x140EA8E0)
#define CLASS_2_840F46B8319F9F66__CTOR_OFFSET UNITYSDK_OFFSET(0x140EA480)

inline static constexpr unsigned int Class_2_840F46B8319F9F66_TypeDefinitionIndex = 53739;

class Class_2_840F46B8319F9F66 : public ::Class_1_20D3150E1235DCB5
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::Class_1_B5F93263C61C75CE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::Class_1_B5F93263C61C75CE*))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_METHOD_2_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_TICK_OFFSET))(this, a1);
	}

	::Struct_2_27685EFF2E84A814 Method_2_87411ABA28C869BA()
	{
		return ((::Struct_2_27685EFF2E84A814(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_METHOD_2_87411ABA28C869BA_OFFSET))(this);
	}

	::System::Void Method_2_CEEC03EFD89445AA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_METHOD_2_CEEC03EFD89445AA_OFFSET))(this, a1);
	}

	::System::Void Method_2_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_840F46B8319F9F66_METHOD_2_459C79521BFE514E_OFFSET))(this, a1);
	}
};
