#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookFormulaDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKFORMULACOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CB470)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookFormulaCollection_TypeDefinitionIndex = 62357;

	class RogueTournHandbookFormulaCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookFormulaDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKFORMULACOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
