#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeGroupData.h"

namespace RPG::GameCore { class ChallengeBossGroupExtraConfigRow; }

#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_1_OFFSET UNITYSDK_OFFSET(0x18786110)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_OFFSET UNITYSDK_OFFSET(0x187860A0)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x18785D40)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x18785D50)
#define RPG_CLIENT_CHALLENGEBOSSGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18785D60)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossGroupData_TypeDefinitionIndex = 60297;

	class ChallengeBossGroupData : public ::RPG::Client::ChallengeGroupData
	{
	public:
		::RPG::GameCore::ChallengeBossGroupExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x58

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeBossGroupExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossGroupExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossGroupExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetBuffList(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetBuffList_1(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSGROUPDATA_GETBUFFLIST_1_OFFSET))(this, a1);
		}
	};
}
