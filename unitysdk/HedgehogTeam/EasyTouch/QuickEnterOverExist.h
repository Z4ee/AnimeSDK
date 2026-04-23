#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchEnter; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchExit; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchOver; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x12C4BC20)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C4C040)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12C4BE70)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C4BCB0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x12C4C050)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x12C4C500)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x12C4BE80)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12C4BB80)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_TypeDefinitionIndex = 36994;

	class QuickEnterOverExist : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickEnterOverExist_OnTouchEnter* onTouchEnter; // 0x70
		::HedgehogTeam::EasyTouch::QuickEnterOverExist_OnTouchOver* onTouchOver; // 0x78
		::HedgehogTeam::EasyTouch::QuickEnterOverExist_OnTouchExit* onTouchExit; // 0x80
		::Il2CppArray<::System::Boolean>* fingerOver; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void On_TouchDown(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHDOWN_OFFSET))(this, gesture);
		}

		::System::Void On_TouchUp(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHUP_OFFSET))(this, gesture);
		}
	};
}
