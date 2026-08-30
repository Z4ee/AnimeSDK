#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCardInGame; }

#define RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDINGAMECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xDFC4E50)
#define RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDINGAMECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xDFBDF00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils_RoomCardInGameComparer_TypeDefinitionIndex = 67811;

	class RogueTournUtils_RoomCardInGameComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDINGAMECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::IRogueTournPersonaRoomCardInGame* a1, ::RPG::Client::IRogueTournPersonaRoomCardInGame* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCardInGame*, ::RPG::Client::IRogueTournPersonaRoomCardInGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDINGAMECOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
