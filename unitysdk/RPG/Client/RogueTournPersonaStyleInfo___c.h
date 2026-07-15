#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA74220)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA74250)
#define RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__GETGIFTSFORMENU_B__8_0_OFFSET UNITYSDK_OFFSET(0x1AA74260)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaStyleInfo___c_TypeDefinitionIndex = 64752;

	class RogueTournPersonaStyleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournPersonaGameStyleGiftData*, ::System::Boolean>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaGameStyleGiftData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleInfo___c_TypeDefinitionIndex)->GetStaticField(0x2CF50);
		}
		static ::RPG::Client::RogueTournPersonaStyleInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaStyleInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaStyleInfo___c_TypeDefinitionIndex)->GetStaticField(0x2CF58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGiftsForMenu_b__8_0(::RPG::Client::RogueTournPersonaGameStyleGiftData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournPersonaGameStyleGiftData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONASTYLEINFO___C__GETGIFTSFORMENU_B__8_0_OFFSET))(this, a1);
		}
	};
}
