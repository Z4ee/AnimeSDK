#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B8B30)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET UNITYSDK_OFFSET(0xA3B8B70)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B8B60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex = 55237;

	class RogueTournPersonaGameRoomCardData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournPersonaGameRoomCardData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameRoomCardData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex)->GetStaticField(0x1E840);
		}
		static ::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournPersonaRoomAttributeData*, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameRoomCardData___c_TypeDefinitionIndex)->GetStaticField(0x1E848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaRoomAttributeData* _Clone_b__2_0(::RPG::Client::RogueTournPersonaRoomAttributeData* attr)
		{
			return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID, ::RPG::Client::RogueTournPersonaRoomAttributeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMEROOMCARDDATA___C__CLONE_B__2_0_OFFSET))(this, attr);
		}
	};
}
