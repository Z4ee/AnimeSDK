#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x1419AEF0)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1419AFD0)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_1CF29F34FEF30EFD_OFFSET UNITYSDK_OFFSET(0x1419AD10)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_60520FDB867063AF_OFFSET UNITYSDK_OFFSET(0x1419A920)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0x1419AC10)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x1419B010)
#define CLASS_2_68315AF3C0719FC8_7_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x1419AE60)
#define CLASS_2_68315AF3C0719FC8_7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1419A860)
#define CLASS_2_68315AF3C0719FC8_7__CTOR_OFFSET UNITYSDK_OFFSET(0x1419AE50)

inline static constexpr unsigned int Class_2_68315AF3C0719FC8_7_TypeDefinitionIndex = 78787;

class Class_2_68315AF3C0719FC8_7 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Boolean Field_2_1; // 0x50
	::System::Boolean Field_2_0; // 0x51
	::System::Single Field_2_2; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_60520FDB867063AF(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_60520FDB867063AF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_1CF29F34FEF30EFD(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_1CF29F34FEF30EFD_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_68315AF3C0719FC8_7_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}
};
