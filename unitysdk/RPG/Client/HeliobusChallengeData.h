#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HeliobusChallengeTargetData; }
namespace RPG::GameCore { class HeliobusChallengeStageRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A076850)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A076830)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1A076810)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0x1A0768B0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0x1A076870)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A076890)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x1A0766B0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET UNITYSDK_OFFSET(0x1A076770)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x1A076860)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x1A076840)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1A076820)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET UNITYSDK_OFFSET(0x1A0768C0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET UNITYSDK_OFFSET(0x1A076880)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1A0768A0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1A0766F0)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A076490)
#define RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0762D0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusChallengeData_TypeDefinitionIndex = 65727;

	class HeliobusChallengeData : public ::System::Object
	{
	public:
		::RPG::GameCore::HeliobusChallengeStageRow* _ChallengeData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* _ChallengeTargets_k__BackingField; // 0x18
		::System::Boolean _IsChallengeFinished_k__BackingField; // 0x20
		::System::Boolean _IsChallengeUnlocked_k__BackingField; // 0x21
		::System::UInt32 _ChallengeID_k__BackingField; // 0x24
		::System::UInt32 _ChallengeGroupID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::HeliobusChallengeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusChallengeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SetChallengeFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGEFINISH_OFFSET))(this);
		}

		::System::Boolean TryUnlockChallenge(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_TRYUNLOCKCHALLENGE_OFFSET))(this, a1, a2);
		}

		::System::Void SetChallengeTargetFinishState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SETCHALLENGETARGETFINISHSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Void set_ChallengeGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::HeliobusChallengeStageRow* get_ChallengeData()
		{
			return ((::RPG::GameCore::HeliobusChallengeStageRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Void set_ChallengeData(::RPG::GameCore::HeliobusChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HeliobusChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGEDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChallengeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEFINISHED_OFFSET))(this);
		}

		::System::Void set_IsChallengeFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsChallengeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_ISCHALLENGEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsChallengeUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_ISCHALLENGEUNLOCKED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* get_ChallengeTargets()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_GET_CHALLENGETARGETS_OFFSET))(this);
		}

		::System::Void set_ChallengeTargets(::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeTargetData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSCHALLENGEDATA_SET_CHALLENGETARGETS_OFFSET))(this, a1);
		}
	};
}
