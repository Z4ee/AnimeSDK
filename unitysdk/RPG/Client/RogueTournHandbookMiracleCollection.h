#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookMiracleDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDF5A8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleCollection_TypeDefinitionIndex = 67654;

	class RogueTournHandbookMiracleCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookMiracleDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLECOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
