#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFeverTimeToastHintItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A5486CBF53F749D6;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xC4EC120)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0xC4EB650)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0xC4EB7E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xC4EC310)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xC4EC2D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xC4EB270)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xC4EC290)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xC4EC2B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xC4EC2F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xC4EB720)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC4EB970)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_26F2ADE6CF3F0469_OFFSET UNITYSDK_OFFSET(0xC4EC020)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_A8C76E5489E4C577_OFFSET UNITYSDK_OFFSET(0xC4EBFD0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0xC4EB2C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xC4EC320)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xC4EC2E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xC4EC2A0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xC4EC2C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xC4EC300)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xC4EB5F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC4EC330)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeToastHintItem_TypeDefinitionIndex = 71342;

	class ActivityFeverTimeToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single JNEEFIAEGOF; // 0x0
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		// static const ::System::String* LGBOBLDBAHK; // 0x0
		// static const ::System::String* AFGIIIJDPKJ; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ActivityFeverTimeToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* PMOJILOJEPE; // 0x30
		::UnityEngine::Animation* BKFCKCKHMCB; // 0x38
		::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x40
		::UnityEngine::UI::Text* KOOOBCDMEIP; // 0x48
		::UnityEngine::UI::Text* HCPKJEKHAPF; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_A8C76E5489E4C577(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_A8C76E5489E4C577_OFFSET))(this, a1);
		}

		::System::Void SetPositionY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET))(this, a1);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET))(this);
		}

		::System::Void FadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_26F2ADE6CF3F0469(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_26F2ADE6CF3F0469_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityFeverTimeToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::ActivityFeverTimeToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::ActivityFeverTimeToastHintItem_Status a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFeverTimeToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, a1);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET))(this, a1);
		}
	};
}
