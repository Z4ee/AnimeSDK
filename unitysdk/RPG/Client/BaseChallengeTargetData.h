#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeTargetState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChallengeTargetConfigRow; }

#define RPG_CLIENT_BASECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB3A88D0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xB3A87D0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB3A8AD0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3A8840)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET UNITYSDK_OFFSET(0xB3A8970)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM1_OFFSET UNITYSDK_OFFSET(0xB3A8A50)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM2_OFFSET UNITYSDK_OFFSET(0xB3A8C10)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGEPARAM3_OFFSET UNITYSDK_OFFSET(0xB3A8C30)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_CHALLENGETYPE_OFFSET UNITYSDK_OFFSET(0xB3A8BF0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xB3A8B60)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB3A8BA0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB3A8BD0)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB3A8B80)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_HASREWARDNOTTAKEN_OFFSET UNITYSDK_OFFSET(0xB3A8A70)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB3A8920)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_SET_ROW_OFFSET UNITYSDK_OFFSET(0xB3A8B90)
#define RPG_CLIENT_BASECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET UNITYSDK_OFFSET(0xB3A8880)
#define RPG_CLIENT_BASECHALLENGETARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB3A87C0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseChallengeTargetData_TypeDefinitionIndex = 59054;

	class BaseChallengeTargetData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengeTargetConfigRow* _Row_k__BackingField; // 0x10
		::System::Boolean IsRewardTaken; // 0x18
		::System::Int32 CurrentProgress; // 0x1C
		::System::Int32 TotalProgress; // 0x20
		::RPG::Client::ChallengeTargetState ChallengeTargetState; // 0x24

		::System::Void _ctor(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::BaseChallengeTargetData* Clone(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::RPG::Client::BaseChallengeTargetData*(*)(::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_CLONE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_UPDATECHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeTargetState CalculateTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::ChallengeTargetState(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_CALCULATETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetState(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_SETCHALLENGETARGETSTATE_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Object*>* GetNameParam()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GETNAMEPARAM_OFFSET))(this);
		}

		::System::Boolean HasRewardNotTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_HASREWARDNOTTAKEN_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseChallengeTargetData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseChallengeTargetData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeTargetConfigRow* get_Row()
		{
			return ((::RPG::GameCore::ChallengeTargetConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_GET_ROW_OFFSET))(this);
		}

		::System::Void set_Row(::RPG::GameCore::ChallengeTargetConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeTargetConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASECHALLENGETARGETDATA_SET_ROW_OFFSET))(this, a1);
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
