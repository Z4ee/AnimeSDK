#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x10E52620)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10E52700)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0x10E524E0)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0x10E523E0)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_C5D287C867591ECC_OFFSET UNITYSDK_OFFSET(0x10E51DB0)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x10E52740)
#define CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x10E527E0)
#define CLASS_2_D9E1B05316AD0FE1_9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10E51C70)
#define CLASS_2_D9E1B05316AD0FE1_9__CTOR_OFFSET UNITYSDK_OFFSET(0x10E52610)

inline static constexpr unsigned int Class_2_D9E1B05316AD0FE1_9_TypeDefinitionIndex = 83814;

class Class_2_D9E1B05316AD0FE1_9 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50
	::System::Boolean Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C5D287C867591ECC(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_C5D287C867591ECC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9E1B05316AD0FE1_9_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
