#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_RESULTTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x181FF120)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager_ResultType_TypeDefinitionIndex = 8226;

	class UserCenterManager_ResultType : public ::System::Object
	{
	public:
		// static const ::System::String* DELETE_ACCOUNT; // 0x0
		// static const ::System::String* SWITCH_ACCOUNT; // 0x0
		// static const ::System::String* CHANGE_PASSWORD; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER_RESULTTYPE__CTOR_OFFSET))(this);
		}
	};
}
