#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xF5EBA00)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xF5EBAE0)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0xF5EB8A0)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_57E77DB19367C4CF_OFFSET UNITYSDK_OFFSET(0xF5EB520)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0xF5EB780)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xF5EBBB0)
#define CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xF5EBB20)
#define CLASS_2_B7D7ADD2A0F19E6C_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF5EB310)
#define CLASS_2_B7D7ADD2A0F19E6C__CTOR_OFFSET UNITYSDK_OFFSET(0xF5EB9F0)

inline static constexpr unsigned int Class_2_B7D7ADD2A0F19E6C_TypeDefinitionIndex = 82123;

class Class_2_B7D7ADD2A0F19E6C : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_1; // 0x50
	::System::Single Field_2_4; // 0x58
	::System::Single Field_2_3; // 0x5C
	::MoleMole::Config::BaseProperty Field_2_0; // 0x60
	::MoleMole::Config::PropertyModifyFunction Field_2_2; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_57E77DB19367C4CF(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_57E77DB19367C4CF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B7D7ADD2A0F19E6C_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
