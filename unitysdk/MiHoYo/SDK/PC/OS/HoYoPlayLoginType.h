#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOPLAYLOGINTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F568C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoPlayLoginType_TypeDefinitionIndex = 7433;

	class HoYoPlayLoginType : public ::System::Object
	{
	public:
		// static const ::System::String* USERNAME_LOGIN; // 0x0
		// static const ::System::String* EMAIL_LOGIN; // 0x0
		// static const ::System::String* THIRD_PARTY_GOOGLE; // 0x0
		// static const ::System::String* THIRD_PARTY_FACEBOOK; // 0x0
		// static const ::System::String* THIRD_PARTY_APPLE; // 0x0
		// static const ::System::String* THIRD_PARTY_TWITTER; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOPLAYLOGINTYPE__CTOR_OFFSET))(this);
		}
	};
}
