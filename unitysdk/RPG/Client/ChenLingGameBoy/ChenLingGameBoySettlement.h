#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_76814C70347573FC;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengeData; }
namespace RPG::Client::ChenLingGameBoy { class ChenLingGameBoyChallengePackData; }
namespace RPG::GameCore { class ChenLingGameBoyCaseRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x9359C40)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x935A110)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9359B00)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0x9359B20)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0x9359B80)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9359B60)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9359B40)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9359BA0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GET_SETTLEMENTTEXTID_OFFSET UNITYSDK_OFFSET(0x9359BC0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x9359B10)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_FINISHEDTIME_OFFSET UNITYSDK_OFFSET(0x9359B30)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISCHEAT_OFFSET UNITYSDK_OFFSET(0x9359B90)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x9359B70)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_ISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x9359B50)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9359BB0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9359CF0)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET UNITYSDK_OFFSET(0x9359D00)
#define RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET UNITYSDK_OFFSET(0x9359FB0)

namespace RPG::Client::ChenLingGameBoy
{
	inline static constexpr unsigned int ChenLingGameBoySettlement_TypeDefinitionIndex = 61517;

	class ChenLingGameBoySettlement : public ::System::Object
	{
	public:
		::RPG::GameCore::ChenLingGameBoyCaseRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengePackData*>* _ChallengeData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItems_k__BackingField; // 0x20
		::System::UInt32 GameID; // 0x28
		::System::Boolean _IsFinished_k__BackingField; // 0x2C
		::System::Boolean _IsCheat_k__BackingField; // 0x2D
		::System::Boolean _IsNewRecord_k__BackingField; // 0x2E
		::System::UInt64 _FinishedTime_k__BackingField; // 0x30

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

		static ::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement* Create(::Class_1_76814C70347573FC* rsp, ::System::Boolean isNewRecord)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoySettlement*(*)(::Class_1_76814C70347573FC*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_CREATE_OFFSET))(rsp, isNewRecord);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__INIT_OFFSET))(this);
		}

		::System::Void _Sync(::Class_1_76814C70347573FC* rsp, ::System::Boolean isNewRecord)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_76814C70347573FC*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT__SYNC_OFFSET))(this, rsp, isNewRecord);
		}

		::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData* GetChallengeData(::System::Int32 index)
		{
			return ((::RPG::Client::ChenLingGameBoy::ChenLingGameBoyChallengeData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGGAMEBOY_CHENLINGGAMEBOYSETTLEMENT_GETCHALLENGEDATA_OFFSET))(this, index);
		}
	};
}
