#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_D8BECDCE48063EC7;
class Class_2_85F04A82B3DCEB31;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define CLASS_2_98A798C0C96648F9_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x198C3600)
#define CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x198C3830)
#define CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x198C38D0)
#define CLASS_2_98A798C0C96648F9__CTOR_OFFSET UNITYSDK_OFFSET(0x198C35F0)

inline static constexpr unsigned int Class_2_98A798C0C96648F9_TypeDefinitionIndex = 34790;

class Class_2_98A798C0C96648F9 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_85F04A82B3DCEB31* Field_2_0; // 0x18
	::Class_1_D8BECDCE48063EC7* Field_2_1; // 0x20
	::RPG::GameCore::DiceCombatPredicateConfig* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}
};
