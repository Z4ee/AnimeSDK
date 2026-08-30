#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomCard; }

#define RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xDFC4A00)
#define RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xDFC4E40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournUtils_RoomCardComparer_TypeDefinitionIndex = 67812;

	class RogueTournUtils_RoomCardComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDCOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::RPG::Client::IRogueTournPersonaRoomCard* a1, ::RPG::Client::IRogueTournPersonaRoomCard* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomCard*, ::RPG::Client::IRogueTournPersonaRoomCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS_ROOMCARDCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}
	};
}
