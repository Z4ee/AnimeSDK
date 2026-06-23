#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x14415D70)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_0D76AE00F4F0B723_OFFSET UNITYSDK_OFFSET(0x14415B90)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x14415C90)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_2414AB36A3C687A8_OFFSET UNITYSDK_OFFSET(0x14415A00)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_C88F257407FB5C09_OFFSET UNITYSDK_OFFSET(0x14415AC0)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x14415CD0)
#define CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_FB6392A8F30862C7_OFFSET UNITYSDK_OFFSET(0x14415E50)
#define CLASS_2_F3D008EFCDD3EE8A_4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x14415940)
#define CLASS_2_F3D008EFCDD3EE8A_4__CTOR_OFFSET UNITYSDK_OFFSET(0x14415C80)

inline static constexpr unsigned int Class_2_F3D008EFCDD3EE8A_4_TypeDefinitionIndex = 51695;

class Class_2_F3D008EFCDD3EE8A_4 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_2414AB36A3C687A8(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_2414AB36A3C687A8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_C88F257407FB5C09()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_C88F257407FB5C09_OFFSET))(this);
	}

	::System::Void Method_2_0D76AE00F4F0B723(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_0D76AE00F4F0B723_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::MoleMole::Config::AnimatorEventEntry* Method_2_FB6392A8F30862C7()
	{
		return ((::MoleMole::Config::AnimatorEventEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_4_METHOD_2_FB6392A8F30862C7_OFFSET))(this);
	}
};
