#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorEventEntry; }
namespace System { class String; }

#define CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x17203D10)
#define CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_DE8FDF9C87F3AA65_OFFSET UNITYSDK_OFFSET(0x17203C70)
#define CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_E6EE730C69CAB62D_OFFSET UNITYSDK_OFFSET(0x17203AD0)
#define CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_F959C1B5EAAE1BC6_OFFSET UNITYSDK_OFFSET(0x17203BF0)
#define CLASS_2_F3D008EFCDD3EE8A_16__CTOR_OFFSET UNITYSDK_OFFSET(0x17203C60)

inline static constexpr unsigned int Class_2_F3D008EFCDD3EE8A_16_TypeDefinitionIndex = 77462;

class Class_2_F3D008EFCDD3EE8A_16 : public ::MoleMole::Config::AnimatorEvent
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E6EE730C69CAB62D(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_E6EE730C69CAB62D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_F959C1B5EAAE1BC6(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_F959C1B5EAAE1BC6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DE8FDF9C87F3AA65(::MoleMole::Config::AnimatorEventEntry* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEntry*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_DE8FDF9C87F3AA65_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + CLASS_2_F3D008EFCDD3EE8A_16_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
