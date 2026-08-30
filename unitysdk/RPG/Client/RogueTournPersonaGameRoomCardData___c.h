#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C359250)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C359290)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C359280)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex = 67729;

	class RogueTournPersonaGameRoomCardData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex)->GetStaticField(0x16110);
		}
		static ::RPG::Client::RogueTournPersonaGameRoomCardData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameRoomCardData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex)->GetStaticField(0x16118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomAttributeData* _Clone_b__2_0(::RPG::Client::RogueTournPersonaRoomAttributeData* a1)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET))(this, a1);
		}
	};
}
