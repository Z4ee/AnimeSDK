#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_E94FF15C25B5433E_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x133F1610)
#define CLASS_2_E94FF15C25B5433E_METHOD_2_0D76AE00F4F0B723_OFFSET UNITYSDK_OFFSET(0x133F1380)
#define CLASS_2_E94FF15C25B5433E_METHOD_2_30F611F71DB721B8_OFFSET UNITYSDK_OFFSET(0x133F0F80)
#define CLASS_2_E94FF15C25B5433E_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0x133F1280)
#define CLASS_2_E94FF15C25B5433E_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x133F14E0)
#define CLASS_2_E94FF15C25B5433E_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x133F1580)
#define CLASS_2_E94FF15C25B5433E__CTOR_OFFSET UNITYSDK_OFFSET(0x133F14D0)

inline static constexpr unsigned int Class_2_E94FF15C25B5433E_TypeDefinitionIndex = 69318;

class Class_2_E94FF15C25B5433E : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_1; // 0x50
	::MoleMole::Config::EnterBattleState Field_2_0; // 0x58
	::System::Boolean Field_2_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30F611F71DB721B8(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_30F611F71DB721B8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_0D76AE00F4F0B723(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_0D76AE00F4F0B723_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E94FF15C25B5433E_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
