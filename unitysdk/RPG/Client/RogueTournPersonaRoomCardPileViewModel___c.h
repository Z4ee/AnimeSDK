#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA700A0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA700E0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1AA700F0)
#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_1_OFFSET UNITYSDK_OFFSET(0x1AA70100)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardPileViewModel___c_TypeDefinitionIndex = 69566;

	class RogueTournPersonaRoomCardPileViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaRoomCardPileViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaRoomCardPileViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCardPileViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2CBD0);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCardPileViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2CBD8);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaRoomCardPileViewModel___c_TypeDefinitionIndex)->GetStaticField(0x2CBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* __SetupPileCards_b__10_0(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_0_OFFSET))(this, a1);
		}

		::RPG::Client::IRogueTournPersonaRoomCardInGame* __SetupPileCards_b__10_1(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1)
		{
			return ((::RPG::Client::IRogueTournPersonaRoomCardInGame*(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDPILEVIEWMODEL___C___SETUPPILECARDS_B__10_1_OFFSET))(this, a1);
		}
	};
}
