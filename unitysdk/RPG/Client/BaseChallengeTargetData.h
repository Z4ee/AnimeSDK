#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define RPG_CLIENT_BASECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x916E1B0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x916E0B0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x916E120)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0x916E250)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM1_OFFSET UNITYSDK_OFFSET(0x916E350)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM2_OFFSET UNITYSDK_OFFSET(0x916E470)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM3_OFFSET UNITYSDK_OFFSET(0x916E490)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0x916E450)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x916E3D0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x916E400)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x916E430)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x916E3E0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0x916E370)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x916E200)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0x916E3F0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0x916E160)
#define RPG_CLIENT_BASECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x916E0A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseChallengeTargetData_TypeDefinitionIndex = 51207;

	class BaseChallengeTargetData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengeTargetConfigRow* _Row_k__BackingField; // 0x10
		::System::Boolean IsRewardTaken; // 0x18
		::System::Int32 CurrentProgress; // 0x1C
		::RPG::Client::ChallengeTargetState ChallengeTargetState; // 0x20
		::System::Int32 TotalProgress; // 0x24
		::System::UInt32 _ID_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::BaseChallengeTargetData* Clone(::RPG::Client::BaseChallengeTargetData* challengeTargetData)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_CLONE_OFFSET))(challengeTargetData);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::System::Void SetChallengeTargetState(::System::Object* targetParams, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, targetParams, isFinish);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::Boolean HasRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_HASREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeTargetConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeTargetConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeTargetConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_SET_ROW_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_REWARDID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeType get_ChallengeType()
		{
			return ((::RPG::GameCore::ChallengeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGETYPE_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeParam1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM1_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeParam2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM2_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeParam3()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM3_OFFSET))(this);
		}
	};
}
