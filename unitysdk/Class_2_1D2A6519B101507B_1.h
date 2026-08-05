#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"
#include "unitysdk/MoleMole/Config/ConfigDataClearPriority.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_1D2A6519B101507B_1_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x11EA6C50)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x11EA6AE0)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0x11EA69A0)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0x11EA68A0)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_CA0C3AE793D8F903_OFFSET UNITYSDK_OFFSET(0x11EA6790)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x11EA6B20)
#define CLASS_2_1D2A6519B101507B_1_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x11EA6BC0)
#define CLASS_2_1D2A6519B101507B_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11EA66D0)
#define CLASS_2_1D2A6519B101507B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA6AD0)

inline static constexpr unsigned int Class_2_1D2A6519B101507B_1_TypeDefinitionIndex = 90770;

class Class_2_1D2A6519B101507B_1 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_7; // 0x50
	::MoleMole::Config::ConfigDataPriority Field_2_1; // 0x58
	::MoleMole::Config::ConfigDataClearPriority Field_2_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_CA0C3AE793D8F903(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_CA0C3AE793D8F903_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_1D2A6519B101507B_1_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
