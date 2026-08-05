#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8D84781FD18A3066_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x14FCEC10)
#define CLASS_2_8D84781FD18A3066_METHOD_2_0D76AE00F4F0B723_OFFSET UNITYSDK_OFFSET(0x14FCE640)
#define CLASS_2_8D84781FD18A3066_METHOD_2_8EF1E963ED9ED56A_OFFSET UNITYSDK_OFFSET(0x14FCE790)
#define CLASS_2_8D84781FD18A3066_METHOD_2_ABF27A10B1089912_OFFSET UNITYSDK_OFFSET(0x14FCE590)
#define CLASS_2_8D84781FD18A3066_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x14FCEAE0)
#define CLASS_2_8D84781FD18A3066_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x14FCEB80)
#define CLASS_2_8D84781FD18A3066__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCEA50)

inline static constexpr unsigned int Class_2_8D84781FD18A3066_TypeDefinitionIndex = 65215;

class Class_2_8D84781FD18A3066 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::String* Field_2_7; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x58
	::System::Boolean Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_ABF27A10B1089912()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_ABF27A10B1089912_OFFSET))(this);
	}

	::System::Void Method_2_0D76AE00F4F0B723(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_0D76AE00F4F0B723_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8EF1E963ED9ED56A(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_8EF1E963ED9ED56A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_8D84781FD18A3066_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
