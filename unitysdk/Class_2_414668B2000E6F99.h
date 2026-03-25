#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfBoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_414668B2000E6F99_METHOD_2_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x11798630)
#define CLASS_2_414668B2000E6F99_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x11798ED0)
#define CLASS_2_414668B2000E6F99_METHOD_2_5587AE4B03E68C58_OFFSET UNITYSDK_OFFSET(0x11798DF0)
#define CLASS_2_414668B2000E6F99_METHOD_2_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x11797C70)
#define CLASS_2_414668B2000E6F99_METHOD_2_F31C8D98E82AD4C4_OFFSET UNITYSDK_OFFSET(0x11798520)
#define CLASS_2_414668B2000E6F99__CTOR_OFFSET UNITYSDK_OFFSET(0x11797B70)

inline static constexpr unsigned int Class_2_414668B2000E6F99_TypeDefinitionIndex = 63370;

class Class_2_414668B2000E6F99 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_SelfBoom* Field_2_0; // 0x30
	::System::Single Field_2_3; // 0x38
	::System::Boolean Field_2_7; // 0x3C
	::System::Single Field_2_5; // 0x40
	::System::Single Field_2_4; // 0x44
	::System::Single Field_2_2; // 0x48
	::System::Single Field_2_6; // 0x4C

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99_METHOD_2_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_2_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99_METHOD_2_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_2_F31C8D98E82AD4C4(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99_METHOD_2_F31C8D98E82AD4C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_5587AE4B03E68C58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99_METHOD_2_5587AE4B03E68C58_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_414668B2000E6F99_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}
};
