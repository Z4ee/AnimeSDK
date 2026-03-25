#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTwist_ActionRotationDirection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTwist_ActionTiggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickTwist_OnTwistAction; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_DOACTION_OFFSET UNITYSDK_OFFSET(0x11A80470)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ISRIGHTROTATION_OFFSET UNITYSDK_OFFSET(0x11A803E0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11A80330)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11A80160)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11A7FFA0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x11A806A0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x11A80340)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x11A80170)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST__CTOR_OFFSET UNITYSDK_OFFSET(0x11A7FF10)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTwist_TypeDefinitionIndex = 31296;

	class QuickTwist : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickTwist_OnTwistAction* onTwistAction; // 0x70
		::System::Boolean isGestureOnMe; // 0x78
		::HedgehogTeam::EasyTouch::QuickTwist_ActionTiggering actionTriggering; // 0x7C
		::HedgehogTeam::EasyTouch::QuickTwist_ActionRotationDirection rotationDirection; // 0x80
		::System::Single axisActionValue; // 0x84
		::System::Boolean enableSimpleAction; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void On_Twist(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ON_TWIST_OFFSET))(this, gesture);
		}

		::System::Void On_TwistEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ON_TWISTEND_OFFSET))(this, gesture);
		}

		::System::Boolean IsRightRotation(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_ISRIGHTROTATION_OFFSET))(this, gesture);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTWIST_DOACTION_OFFSET))(this, gesture);
		}
	};
}
