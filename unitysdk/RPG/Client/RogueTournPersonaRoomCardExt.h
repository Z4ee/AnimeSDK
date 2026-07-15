#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }

#define RPG_CLIENT_ROGUETOURNPERSONAROOMCARDEXT_COMPOSITIONTYPEID_OFFSET UNITYSDK_OFFSET(0x1AA6EA00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaRoomCardExt_TypeDefinitionIndex = 64736;

	class RogueTournPersonaRoomCardExt : public ::System::Object
	{
	public:
		static ::System::UInt32 CompositionTypeID(::RPG::Client::IRogueTournPersonaRoomCard* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAROOMCARDEXT_COMPOSITIONTYPEID_OFFSET))(a1);
		}
	};
}
