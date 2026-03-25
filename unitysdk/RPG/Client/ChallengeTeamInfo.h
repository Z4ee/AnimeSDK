#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52AE8D741A62A8F4;
class Class_1_C41B42CDFF3EDEB1;
class Class_1_FA4F4A67B1C04320_143;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x92F74C0)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x92F7660)
#define RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x92F7080)
#define RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x92F7040)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTeamInfo_TypeDefinitionIndex = 51227;

	class ChallengeTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_C41B42CDFF3EDEB1*>* AvatarList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* avatarList, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_143*>* equipmentMap, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>* relicMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_FA4F4A67B1C04320_143*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_52AE8D741A62A8F4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET))(this, avatarList, equipmentMap, relicMap);
		}

		::RPG::Client::IAvatarInfoProvider* GetAvatarByAvatarID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET))(this);
		}
	};
}
