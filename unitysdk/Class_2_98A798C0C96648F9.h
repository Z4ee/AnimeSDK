#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
class Class_2_85F04A82B3DCEB31;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define CLASS_2_98A798C0C96648F9_METHOD_2_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x18A39CD0)
#define CLASS_2_98A798C0C96648F9_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x18A399B0)
#define CLASS_2_98A798C0C96648F9_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18A39C70)
#define CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x18A39B80)
#define CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A39C20)
#define CLASS_2_98A798C0C96648F9__CTOR_OFFSET UNITYSDK_OFFSET(0x18A18EA0)

inline static constexpr unsigned int Class_2_98A798C0C96648F9_TypeDefinitionIndex = 34408;

class Class_2_98A798C0C96648F9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig* Field_2_0; // 0x18
	::Class_2_85F04A82B3DCEB31* Field_2_1; // 0x20
	::Class_1_D8BECDCE48063EC7* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_3C927B51D2142A24_OFFSET))(this, a1);
	}
};
