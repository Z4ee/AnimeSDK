#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDEXT_COMPOSITIONTYPEID_OFFSET UNITYSDK_OFFSET(0xA3C3C80)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardExt_TypeDefinitionIndex = 55248;

	class RogueTournPersonaRoomCardExt : public ::System::Object
	{
	public:
		static ::System::UInt32 CompositionTypeID(::RPG::Client::IRogueTournPersonaRoomCard* card)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDEXT_COMPOSITIONTYPEID_OFFSET))(card);
		}
	};
}
