#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HedgehogTeam::EasyTouch { class Finger; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DOUBLETAP_STOP_OFFSET UNITYSDK_OFFSET(0x1D15A6B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DOUBLETAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D152360)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_DoubleTap_TypeDefinitionIndex = 38990;

	class EasyTouch_DoubleTap : public ::System::Object
	{
	public:
		::System::Boolean inDoubleTap; // 0x10
		::System::Boolean inWait; // 0x11
		::System::Single time; // 0x14
		::System::Int32 count; // 0x18
		::HedgehogTeam::EasyTouch::Finger* finger; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DOUBLETAP__CTOR_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DOUBLETAP_STOP_OFFSET))(this);
		}
	};
}
