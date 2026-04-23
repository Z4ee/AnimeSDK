#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_BB4B99DE4C2501EC_8;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengeData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9FC79F0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9FC7EC0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9FC78B0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0x9FC78D0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0x9FC7930)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9FC7910)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9FC78F0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9FC7950)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_SETTLEMENTTEXTID_OFFSET UNITYSDK_OFFSET(0x9FC7970)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9FC78C0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0x9FC78E0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0x9FC7940)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9FC7920)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9FC7900)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9FC7960)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9FC7AA0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET UNITYSDK_OFFSET(0x9FC7AB0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET UNITYSDK_OFFSET(0x9FC7D60)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoySettlement_TypeDefinitionIndex = 69024;

	class ChenLingGameBoySettlement : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x10
		::RPG::GameCore::ChenLingGameBoyCaseRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* _ChallengeData_k__BackingField; // 0x20
		::System::UInt64 _FinishedTime_k__BackingField; // 0x28
		::System::Boolean _IsFinished_k__BackingField; // 0x30
		::System::Boolean _IsCheat_k__BackingField; // 0x31
		::System::Boolean _IsNewRecord_k__BackingField; // 0x32
		::System::UInt32 GameID; // 0x34

		::System::Void _ctor(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__CTOR_OFFSET))(this, gameID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* get_ChallengeData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_CHALLENGEDATA_OFFSET))(this, value);
		}

		::System::UInt64 get_FinishedTime()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_FINISHEDTIME_OFFSET))(this);
		}

		::System::Void set_FinishedTime(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_FINISHEDTIME_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISNEWRECORD_OFFSET))(this);
		}

		::System::Void set_IsNewRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISNEWRECORD_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsCheat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISCHEAT_OFFSET))(this);
		}

		::System::Void set_IsCheat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISCHEAT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_REWARDITEMS_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_SettlementTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_SETTLEMENTTEXTID_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement* Create(::Class_1_BB4B99DE4C2501EC_8* rsp, ::System::Boolean isNewRecord)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement*(*)(::Class_1_BB4B99DE4C2501EC_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET))(rsp, isNewRecord);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_BB4B99DE4C2501EC_8* rsp, ::System::Boolean isNewRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET))(this, rsp, isNewRecord);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* GetChallengeData(::System::Int32 index)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET))(this, index);
		}
	};
}
