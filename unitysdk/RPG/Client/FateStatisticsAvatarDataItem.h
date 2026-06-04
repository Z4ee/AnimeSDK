#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_66C20D6C355B068E_1;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET UNITYSDK_OFFSET(0xB9AFA40)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xB9AFB00)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0xB9AFB10)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0xB9AFB30)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_ISUPGRADEDINHISTORY_OFFSET UNITYSDK_OFFSET(0xB9AFB20)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_LEVELINHISTORY_OFFSET UNITYSDK_OFFSET(0xB9AFB40)
#define RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9AF9E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsAvatarDataItem_TypeDefinitionIndex = 59923;

	class FateStatisticsAvatarDataItem : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x10
		::System::Boolean _IsUpgradedInHistory_k__BackingField; // 0x18
		::System::UInt32 _LevelInHistory_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_66C20D6C355B068E_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_66C20D6C355B068E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateStatisticsAvatarDataItem* CreateFromProto(::Class_1_66C20D6C355B068E_1* a1)
		{
			return ((::RPG::Client::FateStatisticsAvatarDataItem*(*)(::Class_1_66C20D6C355B068E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_CREATEFROMPROTO_OFFSET))(a1);
		}

		::RPG::AvatarSystem::IAvatar* get_AvatarData()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradedInHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_ISUPGRADEDINHISTORY_OFFSET))(this);
		}

		::System::Void set_IsUpgradedInHistory(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_ISUPGRADEDINHISTORY_OFFSET))(this, a1);
		}

		::System::UInt32 get_LevelInHistory()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_GET_LEVELINHISTORY_OFFSET))(this);
		}

		::System::Void set_LevelInHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSAVATARDATAITEM_SET_LEVELINHISTORY_OFFSET))(this, a1);
		}
	};
}
