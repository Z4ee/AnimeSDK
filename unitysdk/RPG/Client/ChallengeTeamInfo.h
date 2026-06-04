#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_071D0EF220D742B6;
class Class_1_668FE281FA72D3E8_4;
class Class_1_D17272E82AE804C2_6;
class Class_1_DECD4383F0FCD357;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET UNITYSDK_OFFSET(0xB57B030)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xB57AF70)
#define RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xB57B190)
#define RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xB57AB50)
#define RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB57AB10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeTeamInfo_TypeDefinitionIndex = 59081;

	class ChallengeTeamInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_DECD4383F0FCD357*>* AvatarList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>* a1, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_6*>* a2, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_4*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_D17272E82AE804C2_6*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::Class_1_071D0EF220D742B6*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarDataByIndex(::System::Int32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYINDEX_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetAvatarDataByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATABYAVATARID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGETEAMINFO_GETAVATARDATALIST_OFFSET))(this);
		}
	};
}
