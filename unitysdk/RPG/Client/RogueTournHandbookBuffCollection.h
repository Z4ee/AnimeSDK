#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookBuffDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKBUFFCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDF59E00)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookBuffCollection_TypeDefinitionIndex = 67652;

	class RogueTournHandbookBuffCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookBuffDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKBUFFCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
