#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xFE10A90)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xFE109C0)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0xFE107E0)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_952E114EDAB71650_OFFSET UNITYSDK_OFFSET(0xFE10520)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0xFE106F0)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xFE10920)
#define CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xFE10A00)
#define CLASS_2_DA5C3A43C8E7637E_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFE10490)
#define CLASS_2_DA5C3A43C8E7637E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFE10910)

inline static constexpr unsigned int Class_2_DA5C3A43C8E7637E_1_TypeDefinitionIndex = 74516;

class Class_2_DA5C3A43C8E7637E_1 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Int32 Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_952E114EDAB71650(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_952E114EDAB71650_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_DA5C3A43C8E7637E_1_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
