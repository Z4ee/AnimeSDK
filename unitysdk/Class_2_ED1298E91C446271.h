#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_48488E8DBD9F6BCE;
namespace RPG::GameCore { class DiceCombatTaskConfig_WaitSecond; }

#define CLASS_2_ED1298E91C446271_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x1C077DF0)
#define CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1C077DA0)
#define CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C077D50)
#define CLASS_2_ED1298E91C446271__CTOR_OFFSET UNITYSDK_OFFSET(0x1C077D40)

inline static constexpr unsigned int Class_2_ED1298E91C446271_TypeDefinitionIndex = 35609;

class Class_2_ED1298E91C446271 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_48488E8DBD9F6BCE* EEFMDEHLLFI; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* IGHAHBNLIJA; // 0x20
	::System::Single PGMIOKKLHIE; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a1, ::Class_2_48488E8DBD9F6BCE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*, ::Class_2_48488E8DBD9F6BCE*))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
