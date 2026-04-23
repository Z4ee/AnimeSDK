#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveQuestionOptionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_DEBUGDIRECTRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BDDEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BDCE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_RESPONSEONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BDCEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_STARTRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BDD070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDRESPONSECOMMAND_OFFSET UNITYSDK_OFFSET(0x9BDD9A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWMESSAGEPAGE_OFFSET UNITYSDK_OFFSET(0x9BDDD40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWRECOMMENDTEAM_OFFSET UNITYSDK_OFFSET(0x9BDDB50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWSPEQUIPINVENTORY_OFFSET UNITYSDK_OFFSET(0x9BDDA40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BDCC40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__ONFINISHQUESTIONRSP_OFFSET UNITYSDK_OFFSET(0x9BDCCC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__ONRESPONSECOMPLETE_OFFSET UNITYSDK_OFFSET(0x9BDD310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__REQUESTRESPONSEONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9BDCFB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__REQUESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x9BDD120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__SETSPECIALCHATIDS_OFFSET UNITYSDK_OFFSET(0x9BDD690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__TRIGGERGIFT_OFFSET UNITYSDK_OFFSET(0x9BDD4A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__TRIGGERSPINE_OFFSET UNITYSDK_OFFSET(0x9BDD430)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___REQUESTRESPONSE_B__14_0_OFFSET UNITYSDK_OFFSET(0x9BDDF00)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int QuestionResponseService_TypeDefinitionIndex = 69414;

	class QuestionResponseService : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* _RspGotPromise; // 0x10
		::System::UInt32 _QuestionUid; // 0x18
		::System::UInt32 _OptionId; // 0x1C
		::System::UInt32 _QuestionId; // 0x20

		::System::Void _ctor(::System::UInt32 questionUid, ::System::UInt32 questionId, ::System::UInt32 optionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__CTOR_OFFSET))(this, questionUid, questionId, optionId);
		}

		::System::Void _OnFinishQuestionRsp(::System::UInt16 cmdId, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__ONFINISHQUESTIONRSP_OFFSET))(this, cmdId, rspObject);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ResponseOnTimeout()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_RESPONSEONTIMEOUT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _RequestResponseOnTimeOut()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__REQUESTRESPONSEONTIMEOUT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* StartResponse()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_STARTRESPONSE_OFFSET))(this);
		}

		::System::Void _OnResponseComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__ONRESPONSECOMPLETE_OFFSET))(this);
		}

		::System::Void _TriggerSpine(::System::UInt32 spineAnimGroupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__TRIGGERSPINE_OFFSET))(this, spineAnimGroupId);
		}

		::System::Void _TriggerGift(::System::Single giftDelayTime, ::System::Collections::Generic::IList_1<::System::UInt32>* giftIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__TRIGGERGIFT_OFFSET))(this, giftDelayTime, giftIds);
		}

		::System::Void _SetSpecialChatIds(::System::Collections::Generic::IList_1<::System::UInt32>* specialChatIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__SETSPECIALCHATIDS_OFFSET))(this, specialChatIds);
		}

		::RPG::Client::Promises::IPromise* _RequestResponse()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__REQUESTRESPONSE_OFFSET))(this);
		}

		::System::Void _BuildResponseCommand(::RPG::GameCore::IdleLiveQuestionOptionType type, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveQuestionOptionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDRESPONSECOMMAND_OFFSET))(this, type, id);
		}

		::System::Void _BuildShowSpEquipInventory(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWSPEQUIPINVENTORY_OFFSET))(this, id);
		}

		::System::Void _BuildShowRecommendTeam(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWRECOMMENDTEAM_OFFSET))(this, id);
		}

		::System::Void _BuildShowMessagePage(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE__BUILDSHOWMESSAGEPAGE_OFFSET))(this, id);
		}

		::System::Void DebugDirectResponse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE_DEBUGDIRECTRESPONSE_OFFSET))(this);
		}

		::System::Void __RequestResponse_b__14_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONRESPONSESERVICE___REQUESTRESPONSE_B__14_0_OFFSET))(this);
		}
	};
}
