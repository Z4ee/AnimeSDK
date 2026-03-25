#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFeverTimeToastHintItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A5486CBF53F749D6;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x8F0AF40)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0x8F0A3B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0x8F0A540)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0x8F0B130)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x8F0B0F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x8F09FF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x8F0B0B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x8F0B0D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x8F0B110)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0x8F0A480)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8F0A6E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_45F0369A056A5CE7_OFFSET UNITYSDK_OFFSET(0x8F0AD00)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_C606E9CBB204123F_OFFSET UNITYSDK_OFFSET(0x8F0ACB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0x8F0A000)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0x8F0B140)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0x8F0B100)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x8F0B0C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x8F0B0E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0x8F0B120)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0x8F0A350)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x8F0B150)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeToastHintItem_TypeDefinitionIndex = 58498;

	class ActivityFeverTimeToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_10; // 0x0
		// static const ::System::String* Field_5_11; // 0x0
		// static const ::System::String* Field_5_12; // 0x0
		// static const ::System::String* Field_5_13; // 0x0
		// static const ::System::String* Field_5_14; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ActivityFeverTimeToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* Field_5_5; // 0x30
		::UnityEngine::Animation* Field_5_6; // 0x38
		::UnityEngine::UI::Text* Field_5_7; // 0x40
		::UnityEngine::UI::Text* Field_5_8; // 0x48
		::UnityEngine::UI::Text* Field_5_9; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_C606E9CBB204123F(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_C606E9CBB204123F_OFFSET))(this, a1);
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

		::System::Void Method_5_45F0369A056A5CE7(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_45F0369A056A5CE7_OFFSET))(this, a1);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET))(this);
		}

		::System::Single get_LifeTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET))(this, value);
		}

		::System::UInt32 get_PositionIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET))(this);
		}

		::System::Void set_PositionIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET))(this, value);
		}

		::RPG::Client::ActivityFeverTimeToastHintItem_Status get_CurStatus()
		{
			return ((::RPG::Client::ActivityFeverTimeToastHintItem_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET))(this);
		}

		::System::Void set_CurStatus(::RPG::Client::ActivityFeverTimeToastHintItem_Status value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityFeverTimeToastHintItem_Status))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET))(this, value);
		}

		::System::Single get_TimePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET))(this);
		}

		::System::Void set_TimePoint(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET))(this, value);
		}

		::System::Boolean get_Animating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET))(this);
		}

		::System::Void set_Animating(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET))(this, value);
		}
	};
}
