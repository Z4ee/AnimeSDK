#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKGUESTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x184F8080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKGuestModel_TypeDefinitionIndex = 44621;

	class MiHoYoSDKGuestModel : public ::System::Object
	{
	public:
		::System::String* guest_id; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKGUESTMODEL__CTOR_OFFSET))(this);
		}
	};
}
