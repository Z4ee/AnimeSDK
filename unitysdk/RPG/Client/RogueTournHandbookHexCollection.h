#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookHexDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CB490)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexCollection_TypeDefinitionIndex = 62359;

	class RogueTournHandbookHexCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookHexDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
