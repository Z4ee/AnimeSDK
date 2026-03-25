#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookHexDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA393EE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexCollection_TypeDefinitionIndex = 55171;

	class RogueTournHandbookHexCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookHexDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
