#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_427E60E3EA0107E3_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x1285AA30)
#define CLASS_2_427E60E3EA0107E3_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0x1285A6B0)
#define CLASS_2_427E60E3EA0107E3_METHOD_2_D1866D5D6EA79666_OFFSET UNITYSDK_OFFSET(0x1285A7A0)
#define CLASS_2_427E60E3EA0107E3_METHOD_2_DD798BD07A72C389_OFFSET UNITYSDK_OFFSET(0x1285A360)
#define CLASS_2_427E60E3EA0107E3_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x1285A990)
#define CLASS_2_427E60E3EA0107E3_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x1285A900)
#define CLASS_2_427E60E3EA0107E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1285A8F0)

inline static constexpr unsigned int Class_2_427E60E3EA0107E3_TypeDefinitionIndex = 50537;

class Class_2_427E60E3EA0107E3 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Int32 Field_2_0; // 0x50
	::System::Boolean Field_2_7; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DD798BD07A72C389(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_DD798BD07A72C389_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_D1866D5D6EA79666(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_D1866D5D6EA79666_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_427E60E3EA0107E3_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
