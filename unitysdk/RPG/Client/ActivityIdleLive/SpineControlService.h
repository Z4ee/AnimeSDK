#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1148;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveSpineController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1817F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET UNITYSDK_OFFSET(0xB180AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET UNITYSDK_OFFSET(0xB180550)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET UNITYSDK_OFFSET(0xB180750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET UNITYSDK_OFFSET(0xB181AC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET UNITYSDK_OFFSET(0xB181CF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1801E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET UNITYSDK_OFFSET(0xB180FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET UNITYSDK_OFFSET(0xB1816C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET UNITYSDK_OFFSET(0xB1810B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET UNITYSDK_OFFSET(0xB180CE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET UNITYSDK_OFFSET(0xB180BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET UNITYSDK_OFFSET(0xB180DF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET UNITYSDK_OFFSET(0xB1811E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET UNITYSDK_OFFSET(0xB181780)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpineControlService_TypeDefinitionIndex = 70261;

	class SpineControlService : public ::System::Object
	{
	public:
		// static const ::RPG::GameCore::IdleLiveSpineAnimTriggerType _ON_THANKS_GIFT_TRIGGER_TYPE; // 0x0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1148*>* _Triggers; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveSpineController* _SpineController; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::IdleLiveSpineAnimTriggerType>* _SpineTriggerDict; // 0x28
		::System::Int32 _IdlePerformTimer; // 0x30
		::System::Single _IdleInterval; // 0x34
		::System::UInt32 _SameNodeStayCntCeil; // 0x38
		::System::UInt32 _SameNodeStayCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void InitService(::RPG::Client::ActivityIdleLive::IdleLiveSpineController* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveSpineController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTriggerSpine(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET))(this, a1);
		}

		::System::Void _OnThanksGift(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET))(this, a1);
		}

		::System::Void _OnUnlockIdUpdated(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET))(this, a1);
		}

		::System::Void _OnPlaySpineAnimGroupId(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET))(this, a1);
		}

		::System::Void _OnStageRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET))(this, a1);
		}

		::System::Void _TriggerStaySameNodeTooLongSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET))(this);
		}

		::System::Void _OnShowQuestion(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET))(this, a1);
		}

		::System::Void _TryPlayIdleActionPeriodically()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET))(this);
		}

		::System::Void _BuildSpineTriggerDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET))(this);
		}

		::System::Void _BuildTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET))(this);
		}

		::System::Void _ClearUnlockTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET))(this);
		}
	};
}
