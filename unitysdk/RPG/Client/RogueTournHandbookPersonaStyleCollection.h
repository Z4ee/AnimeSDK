#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookPersonaStyleDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_GETALLUNSEENUNLOCKEDSTYLEIDS_OFFSET UNITYSDK_OFFSET(0xB0CF060)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xB0CF690)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xB0CF5A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB0CB4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleCollection_TypeDefinitionIndex = 62362;

	class RogueTournHandbookPersonaStyleCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookPersonaStyleDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllUnseenUnlockedStyleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_GETALLUNSEENUNLOCKEDSTYLEIDS_OFFSET))(this);
		}

		::System::Void SetStyleSeen(::System::UInt32 styleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET))(this, styleID);
		}

		::System::Void SetAllUnlockedStyleSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET))(this);
		}
	};
}
