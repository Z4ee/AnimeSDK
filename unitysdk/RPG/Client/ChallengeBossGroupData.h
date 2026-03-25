#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupData.h"

namespace RPG::GameCore { class ChallengeBossGroupExtraConfigRow; }

#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_OFFSET UNITYSDK_OFFSET(0x92BBE70)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92BBEE0)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x92BBEF0)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92BBD00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossGroupData_TypeDefinitionIndex = 51187;

	class ChallengeBossGroupData : public ::RPG::Client::ChallengeGroupData
	{
	public:
		::RPG::GameCore::ChallengeBossGroupExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x48

		::System::Void _ctor(::System::UInt32 groupConfigID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA__CTOR_OFFSET))(this, groupConfigID);
		}

		::Il2CppArray<::System::UInt32>* GetBuffList(::System::Boolean isFirst)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_OFFSET))(this, isFirst);
		}

		::RPG::GameCore::ChallengeBossGroupExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossGroupExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossGroupExtraConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, value);
		}
	};
}
