#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCardCutin; }

#define CLASS_2_6386887C7E0D5B8E_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x17CE0BA0)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17CE0C20)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17CE0C90)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x17CE0A80)
#define CLASS_2_6386887C7E0D5B8E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17CE0B50)
#define CLASS_2_6386887C7E0D5B8E__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE0A70)

inline static constexpr unsigned int Class_2_6386887C7E0D5B8E_TypeDefinitionIndex = 34099;

class Class_2_6386887C7E0D5B8E : public ::Class_1_B55037134F9E6688
{
public:
	// static const ::System::Single Field_2_2; // 0x0
	::Class_2_843468DEB2C89684* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StartCardCutin*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6386887C7E0D5B8E_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
