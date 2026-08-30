#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCardCutin; }

#define CLASS_2_6386887C7E0D5B8E_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1C190F50)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1C190E30)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C190F00)
#define CLASS_2_6386887C7E0D5B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C190E20)

inline static constexpr unsigned int Class_2_6386887C7E0D5B8E_TypeDefinitionIndex = 35624;

class Class_2_6386887C7E0D5B8E : public ::Class_1_B55037134F9E6688
{
public:
	// static const ::System::Single MOHEDBDBMJG; // 0x0
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::System::Single PGMIOKKLHIE; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
