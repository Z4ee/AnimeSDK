#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_STEAMPARAMETERSMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1C9C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamParametersModel_TypeDefinitionIndex = 20002;

	class SteamParametersModel : public ::System::Object
	{
	public:
		::System::String* steam_appid; // 0x10
		::System::Boolean enable_legacy_steam; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMPARAMETERSMODEL__CTOR_OFFSET))(this);
		}
	};
}
