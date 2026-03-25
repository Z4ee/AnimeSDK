#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2StarTargetFinishType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MatchThreeV2StarTargetRow; }

#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6E1B0)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B6DFD0)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_FINISHPARAMLIST_OFFSET UNITYSDK_OFFSET(0x9B6E130)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_FINISHTYPE_OFFSET UNITYSDK_OFFSET(0x9B6E0C0)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x9B6E050)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9B6DF70)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_ISBIRDMEETTARGET_OFFSET UNITYSDK_OFFSET(0x9B6E210)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_ISPROPMEETTARGET_OFFSET UNITYSDK_OFFSET(0x9B6E4C0)
#define RPG_CLIENT_MATCHTHREEV2STARTARGETDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6E1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2StarTargetData_TypeDefinitionIndex = 53649;

	class MatchThreeV2StarTargetData : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10

		::System::Void _ctor(::System::UInt32 starTargetID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA__CTOR_OFFSET))(this, starTargetID);
		}

		::RPG::GameCore::MatchThreeV2StarTargetRow* get__Row()
		{
			return ((::RPG::GameCore::MatchThreeV2StarTargetRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_REWARDID_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeV2StarTargetFinishType get_FinishType()
		{
			return ((::RPG::GameCore::MatchThreeV2StarTargetFinishType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_FINISHTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FinishParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_GET_FINISHPARAMLIST_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeV2StarTargetData* Create(::RPG::GameCore::MatchThreeV2StarTargetRow* row)
		{
			return ((::RPG::Client::MatchThreeV2StarTargetData*(*)(::RPG::GameCore::MatchThreeV2StarTargetRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_CREATE_OFFSET))(row);
		}

		::System::Boolean IsBirdMeetTarget(::System::UInt32 birdID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_ISBIRDMEETTARGET_OFFSET))(this, birdID);
		}

		::System::Boolean IsPropMeetTarget(::System::UInt32 propID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2STARTARGETDATA_ISPROPMEETTARGET_OFFSET))(this, propID);
		}
	};
}
