#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_E7811A222424F15E;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_C8ED221C29EAEF78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172B62E0)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0x172B6380)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_189A1787B0797738_OFFSET UNITYSDK_OFFSET(0x172B6B70)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x172B7060)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x172B68C0)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_365B3CE7026B1EB7_OFFSET UNITYSDK_OFFSET(0x172B6330)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x172B6D00)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_91D3CB93F7D3A697_OFFSET UNITYSDK_OFFSET(0x172B6730)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x172B6C30)
#define CLASS_1_C8ED221C29EAEF78_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x172B67D0)
#define CLASS_1_C8ED221C29EAEF78_TICK_OFFSET UNITYSDK_OFFSET(0x172B6400)
#define CLASS_1_C8ED221C29EAEF78__CTOR_OFFSET UNITYSDK_OFFSET(0x172B62D0)

inline static constexpr unsigned int Class_1_C8ED221C29EAEF78_TypeDefinitionIndex = 56044;

class Class_1_C8ED221C29EAEF78 : public ::System::Object
{
public:
	::Class_1_E7811A222424F15E* ONBOGBCKHDC; // 0x10
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
	::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x20
	::System::Boolean DOLKJLLAJBN; // 0x28
	::System::Single PLNLGLNFKGM; // 0x2C
	::System::Single BCBNCNADPEH; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AdventureCharacterController* a2, ::Class_1_E7811A222424F15E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AdventureCharacterController*, ::Class_1_E7811A222424F15E*))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::AdventureAnimStateType Method_1_365B3CE7026B1EB7()
	{
		return ((::RPG::GameCore::AdventureAnimStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_365B3CE7026B1EB7_OFFSET))(this);
	}

	::System::Void Method_1_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_0986B6F765C6D4BF_OFFSET))(this, a1);
	}

	::System::Void Method_1_91D3CB93F7D3A697(::RPG::GameCore::AdventureAnimStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureAnimStateType))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_91D3CB93F7D3A697_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_189A1787B0797738(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_189A1787B0797738_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C8ED221C29EAEF78_METHOD_1_289F28027FF47717_OFFSET))(this);
	}
};
