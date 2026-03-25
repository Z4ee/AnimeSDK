#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class StrongChallengeBossDetailRow; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x8FAF0E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8FAF0B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FAF110)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeBossDetailData_TypeDefinitionIndex = 50241;

	class ActivityStrongChallengeBossDetailData : public ::System::Object
	{
	public:
		::RPG::GameCore::StrongChallengeBossDetailRow* _Row; // 0x10
		::System::UInt32 BossDetailID; // 0x18

		::System::Void _ctor(::System::UInt32 bossDetailID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA__CTOR_OFFSET))(this, bossDetailID);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEBOSSDETAILDATA_GET_DETAIL_OFFSET))(this);
		}
	};
}
