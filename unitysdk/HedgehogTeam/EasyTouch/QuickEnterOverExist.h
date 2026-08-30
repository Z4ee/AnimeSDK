#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchEnter; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchExit; }
namespace HedgehogTeam::EasyTouch { class QuickEnterOverExist_OnTouchOver; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D169890)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D169D30)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D169B20)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D169920)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x1D169D40)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x1D16A1A0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x1D169B30)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1697F0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickEnterOverExist_TypeDefinitionIndex = 38961;

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

		::System::Void On_TouchDown(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHDOWN_OFFSET))(this, a1);
		}

		::System::Void On_TouchUp(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKENTEROVEREXIST_ON_TOUCHUP_OFFSET))(this, a1);
		}
	};
}
