#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeliobusChallengeTargetData; }
namespace RPG::GameCore { class HeliobusChallengeStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xA60A810)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xA60A7F0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA60A7D0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xA60A870)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0xA60A830)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA60A850)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xA60A680)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xA60A740)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xA60A820)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0xA60A800)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0xA60A7E0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0xA60A880)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0xA60A840)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA60A860)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET UNITYSDK_OFFSET(0xA60A6C0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA60A4B0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA60A350)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusChallengeData_TypeDefinitionIndex = 60462;

	class HeliobusChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* _ChallengeTargets_k__BackingField; // 0x10
		::RPG::GameCore::HeliobusChallengeStageRow* _ChallengeData_k__BackingField; // 0x18
		::System::UInt32 _ChallengeGroupID_k__BackingField; // 0x20
		::System::UInt32 _ChallengeID_k__BackingField; // 0x24
		::System::Boolean _IsChallengeFinished_k__BackingField; // 0x28
		::System::Boolean _IsChallengeUnlocked_k__BackingField; // 0x29

		::System::Void _ctor(::System::UInt32 challengeID, ::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_OFFSET))(this, challengeID, challengeGroupID);
		}

		::System::Void _ctor_1(::RPG::Client::HeliobusChallengeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void SetChallengeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET))(this);
		}

		::System::Boolean TryUnlockChallenge(::System::UInt32 curPopPhase, ::System::Boolean isPreChallengeUnlocked)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET))(this, curPopPhase, isPreChallengeUnlocked);
		}

		::System::Void SetChallengeTargetFinishState(::System::UInt32 stars)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET))(this, stars);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Void set_ChallengeGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET))(this, value);
		}

		::RPG::GameCore::HeliobusChallengeStageRow* get_ChallengeData()
		{
			return ((::RPG::GameCore::HeliobusChallengeStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::RPG::GameCore::HeliobusChallengeStageRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeliobusChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsChallengeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsChallengeFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsChallengeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsChallengeUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* get_ChallengeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void set_ChallengeTargets(::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET))(this, value);
		}
	};
}
