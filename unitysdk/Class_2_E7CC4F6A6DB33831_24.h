#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x1CB771E0)
#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_A0646B40A733EA40_OFFSET UNITYSDK_OFFSET(0x1CB76F70)
#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_C7CC8F2DD77ED5E1_OFFSET UNITYSDK_OFFSET(0x1CB77060)
#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x1CB77140)
#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_E4D2AE3935EC4F62_OFFSET UNITYSDK_OFFSET(0x1CB76DF0)
#define CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x1CB772C0)
#define CLASS_2_E7CC4F6A6DB33831_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB77130)

inline static constexpr unsigned int Class_2_E7CC4F6A6DB33831_24_TypeDefinitionIndex = 78142;

class Class_2_E7CC4F6A6DB33831_24 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E4D2AE3935EC4F62(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_E4D2AE3935EC4F62_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_A0646B40A733EA40()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_A0646B40A733EA40_OFFSET))(this);
	}

	::System::Void Method_2_C7CC8F2DD77ED5E1(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_C7CC8F2DD77ED5E1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7CC4F6A6DB33831_24_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
