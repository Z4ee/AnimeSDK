#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookPersonaStyleDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_GETALLUNSEENUNLOCKEDSTYLEIDS_OFFSET UNITYSDK_OFFSET(0xDF5F1E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xDF5FA60)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET UNITYSDK_OFFSET(0xDF5F970)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xDF5A8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleCollection_TypeDefinitionIndex = 67658;

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

		::System::Void SetStyleSeen(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETSTYLESEEN_OFFSET))(this, a1);
		}

		::System::Void SetAllUnlockedStyleSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLECOLLECTION_SETALLUNLOCKEDSTYLESEEN_OFFSET))(this);
		}
	};
}
