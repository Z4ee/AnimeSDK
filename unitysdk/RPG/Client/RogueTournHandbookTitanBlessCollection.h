#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

class Class_1_D17272E82AE804C2_1031;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournHandbookTitanBlessDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0x19C33E80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0x19C33940)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET UNITYSDK_OFFSET(0x19C33DF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C33F60)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookTitanBlessCollection_TypeDefinitionIndex = 64661;

	class RogueTournHandbookTitanBlessCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookTitanBlessDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void SyncUnlockedIDs(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET))(this, a1);
		}

		::System::Void SyncUnlockedID(::Class_1_D17272E82AE804C2_1031* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_1031*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET))(this, a1);
		}

		::System::Boolean IsTitanBlessHandbookLocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET))(this, a1);
		}
	};
}
