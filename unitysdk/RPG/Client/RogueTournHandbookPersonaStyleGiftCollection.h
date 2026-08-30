#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookPersonaStyleGiftDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C32E210)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleGiftCollection_TypeDefinitionIndex = 67659;

	class RogueTournHandbookPersonaStyleGiftCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookPersonaStyleGiftDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
