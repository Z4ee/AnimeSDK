#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0F1B992870941C13_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaModifier; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7A2490)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__GETMODIFIERSBYSOURCETYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1C7A2600)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaModifierInfo___c__DisplayClass4_0_TypeDefinitionIndex = 67698;

	class RogueTournPersonaModifierInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Enum_3_0F1B992870941C13_4 type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModifiersBySourceType_b__0(::RPG::Client::IRogueTournPersonaModifier* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournPersonaModifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO___C__DISPLAYCLASS4_0__GETMODIFIERSBYSOURCETYPE_B__0_OFFSET))(this, a1);
		}
	};
}
