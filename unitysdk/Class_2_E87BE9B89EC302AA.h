#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace MoleMole::Config { class AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x14A92E70)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x14A92D90)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14A92F50)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_1784AD14EF02A1CD_OFFSET UNITYSDK_OFFSET(0x14A92390)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_511C3FF43ADC0297_OFFSET UNITYSDK_OFFSET(0x14A92840)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_5334D1ABEDB77D8A_OFFSET UNITYSDK_OFFSET(0x14A92A30)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_A661C8EED21CDE61_OFFSET UNITYSDK_OFFSET(0x14A922C0)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x14A92C60)
#define CLASS_2_E87BE9B89EC302AA_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x14A92D00)
#define CLASS_2_E87BE9B89EC302AA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14A92180)
#define CLASS_2_E87BE9B89EC302AA__CTOR_OFFSET UNITYSDK_OFFSET(0x14A92C50)

inline static constexpr unsigned int Class_2_E87BE9B89EC302AA_TypeDefinitionIndex = 73012;

class Class_2_E87BE9B89EC302AA : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorEventTriggerAbilityEntry_AbilitySpecialValueEntry*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_A661C8EED21CDE61(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_A661C8EED21CDE61_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_1784AD14EF02A1CD(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_1784AD14EF02A1CD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_511C3FF43ADC0297()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_511C3FF43ADC0297_OFFSET))(this);
	}

	::System::Void Method_2_5334D1ABEDB77D8A(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_5334D1ABEDB77D8A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E87BE9B89EC302AA_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
