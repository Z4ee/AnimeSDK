#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_668FE281FA72D3E8_4;
class Class_1_D17272E82AE804C2_150;
class Class_1_D73C2F18EE2CD5F1;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARBYAVATARID_OFFSET UNITYSDK_OFFSET(0x9F61FE0)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9F62180)
#define RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x9F61C50)
#define RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F61C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTeamInfo_TypeDefinitionIndex = 58151;

	class ChallengeTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_D73C2F18EE2CD5F1*>* AvatarList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* avatarList, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_150*>* equipmentMap, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>* relicMap)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_150*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET))(this, avatarList, equipmentMap, relicMap);
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
