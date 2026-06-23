#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x18784B40)
#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_2D02FB2CBE7A9A71_OFFSET UNITYSDK_OFFSET(0x18783E00)
#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_48683E3243153F83_OFFSET UNITYSDK_OFFSET(0x18783F70)
#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0x18783CD0)
#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x18784C20)
#define CLASS_2_4BEC49E7A3084AB4_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x18784AB0)
#define CLASS_2_4BEC49E7A3084AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x18784AA0)

inline static constexpr unsigned int Class_2_4BEC49E7A3084AB4_TypeDefinitionIndex = 76845;

class Class_2_4BEC49E7A3084AB4 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_1; // 0x50
	::System::String* Field_2_3; // 0x58
	::MoleMole::Config::AbilityTargetting Field_2_2; // 0x60
	::MoleMole::Config::AbilityTargetting Field_2_0; // 0x64
	::System::Boolean Field_2_4; // 0x68
	::System::Boolean Field_2_6; // 0x69
	::System::Boolean Field_2_5; // 0x6A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_2D02FB2CBE7A9A71(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_2D02FB2CBE7A9A71_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_48683E3243153F83(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_48683E3243153F83_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BEC49E7A3084AB4_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
