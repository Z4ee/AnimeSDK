#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityFeverTimeToastHintItem_Status.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_A5486CBF53F749D6;
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0xB0BE480)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEIN_OFFSET UNITYSDK_OFFSET(0xB0BDA60)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_FADEOUT_OFFSET UNITYSDK_OFFSET(0xB0BDBF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xB0BE670)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xB0BE630)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0xB0BD6C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xB0BE5F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xB0BE610)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_GET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xB0BE650)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_HIDE_OFFSET UNITYSDK_OFFSET(0xB0BDB30)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB0BDD80)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_8A38ED2F9C3D2F30_OFFSET UNITYSDK_OFFSET(0xB0BE330)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_FDC75E773C3424A0_OFFSET UNITYSDK_OFFSET(0xB0BE380)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SETPOSITIONY_OFFSET UNITYSDK_OFFSET(0xB0BD6D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_ANIMATING_OFFSET UNITYSDK_OFFSET(0xB0BE680)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_CURSTATUS_OFFSET UNITYSDK_OFFSET(0xB0BE640)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0xB0BE600)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_POSITIONINDEX_OFFSET UNITYSDK_OFFSET(0xB0BE620)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SET_TIMEPOINT_OFFSET UNITYSDK_OFFSET(0xB0BE660)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_SHOW_OFFSET UNITYSDK_OFFSET(0xB0BDA00)
#define RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB0BE690)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeToastHintItem_TypeDefinitionIndex = 66726;

	class ActivityFeverTimeToastHintItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		::System::Single _LifeTime_k__BackingField; // 0x18
		::System::UInt32 _PositionIndex_k__BackingField; // 0x1C
		::RPG::Client::ActivityFeverTimeToastHintItem_Status _CurStatus_k__BackingField; // 0x20
		::System::Single _TimePoint_k__BackingField; // 0x24
		::System::Boolean _Animating_k__BackingField; // 0x28
		::UnityEngine::Animation* Field_5_10; // 0x30
		::UnityEngine::Animation* Field_5_11; // 0x38
		::UnityEngine::UI::Text* Field_5_12; // 0x40
		::UnityEngine::UI::Text* Field_5_13; // 0x48
		::UnityEngine::UI::Text* Field_5_14; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Method_5_8A38ED2F9C3D2F30(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_8A38ED2F9C3D2F30_OFFSET))(this, a1);
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

		::System::Void Method_5_FDC75E773C3424A0(::Class_1_A5486CBF53F749D6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5486CBF53F749D6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMETOASTHINTITEM_METHOD_5_FDC75E773C3424A0_OFFSET))(this, a1);
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
