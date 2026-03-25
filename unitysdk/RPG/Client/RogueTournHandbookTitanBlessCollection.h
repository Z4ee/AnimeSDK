#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

class Class_1_FA4F4A67B1C04320_836;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueTournHandbookTitanBlessDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET UNITYSDK_OFFSET(0xA398E90)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET UNITYSDK_OFFSET(0xA398AD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET UNITYSDK_OFFSET(0xA398E00)
#define RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xA398F20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookTitanBlessCollection_TypeDefinitionIndex = 55173;

	class RogueTournHandbookTitanBlessCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookTitanBlessDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void SyncUnlockedIDs(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDIDS_OFFSET))(this, proto);
		}

		::System::Void SyncUnlockedID(::Class_1_FA4F4A67B1C04320_836* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_836*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_SYNCUNLOCKEDID_OFFSET))(this, proto);
		}

		::System::Boolean IsTitanBlessHandbookLocked(::System::UInt32 titanBlessID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKTITANBLESSCOLLECTION_ISTITANBLESSHANDBOOKLOCKED_OFFSET))(this, titanBlessID);
		}
	};
}
