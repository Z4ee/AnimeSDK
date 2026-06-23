#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910.h"
#include "unitysdk/MoleMole/Config/AnimatorEvent.h"

class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_0589B5E7626E6766_1_OFFSET UNITYSDK_OFFSET(0x12B23200)
#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_0589B5E7626E6766_OFFSET UNITYSDK_OFFSET(0x12B23120)
#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12B231C0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12B22FE0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTNOOP__CTOR_OFFSET UNITYSDK_OFFSET(0x12B231B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventNoOp_TypeDefinitionIndex = 47380;

	class AnimatorEventNoOp : public ::MoleMole::Config::AnimatorEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOP__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_TOSTRING_OFFSET))(this);
		}

		::System::Void Method_2_0589B5E7626E6766(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_0589B5E7626E6766_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* Method_2_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_128774387667156B_OFFSET))(this);
		}

		::System::Void Method_2_0589B5E7626E6766_1(::MoleMole::Battle::Entity* a1, ::Class_3_F33F9DC5F4112336* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910 a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single, ::Class_3_0EDAAFBA6A7CF537_Enum_3_40FECCC0C2FAB910))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTNOOP_METHOD_2_0589B5E7626E6766_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
