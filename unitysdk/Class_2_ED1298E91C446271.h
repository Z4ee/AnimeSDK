#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatTaskConfig_WaitSecond; }

#define CLASS_2_ED1298E91C446271_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0x166E33A0)
#define CLASS_2_ED1298E91C446271_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x166E3280)
#define CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x166E3230)
#define CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x166E3300)
#define CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x166E31E0)
#define CLASS_2_ED1298E91C446271__CTOR_OFFSET UNITYSDK_OFFSET(0x166E31D0)

inline static constexpr unsigned int Class_2_ED1298E91C446271_TypeDefinitionIndex = 28417;

class Class_2_ED1298E91C446271 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_843468DEB2C89684* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WaitSecond* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WaitSecond*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271__CTOR_OFFSET))(this, a1, a2);
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

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED1298E91C446271_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
	}
};
