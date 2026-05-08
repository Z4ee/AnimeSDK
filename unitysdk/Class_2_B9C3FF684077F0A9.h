#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/AnimatorEventShowTipEntry_ShowTipEntryConfig.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_B9C3FF684077F0A9_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0xBE070F0)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0xBE07010)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0xBE06E30)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_443182EA9C082A09_OFFSET UNITYSDK_OFFSET(0xBE06520)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_6EA596C7391DBF1A_OFFSET UNITYSDK_OFFSET(0xBE067D0)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0xBE06D20)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0xBE07140)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_F211F73A99A6796E_OFFSET UNITYSDK_OFFSET(0xBE06BA0)
#define CLASS_2_B9C3FF684077F0A9_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0xBE06F80)
#define CLASS_2_B9C3FF684077F0A9__CTOR_OFFSET UNITYSDK_OFFSET(0xBE06F70)

inline static constexpr unsigned int Class_2_B9C3FF684077F0A9_TypeDefinitionIndex = 42483;

class Class_2_B9C3FF684077F0A9 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::Il2CppArray<::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig>* Field_2_0; // 0x50
	::System::Single Field_2_1; // 0x58
	::System::Int32 Field_2_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_443182EA9C082A09(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_443182EA9C082A09_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_F211F73A99A6796E(::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventShowTipEntry_ShowTipEntryConfig))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_F211F73A99A6796E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Int32 Method_2_6EA596C7391DBF1A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_6EA596C7391DBF1A_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B9C3FF684077F0A9_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
