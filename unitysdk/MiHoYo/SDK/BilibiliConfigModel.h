#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_BILIBILICONFIGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3176B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BilibiliConfigModel_TypeDefinitionIndex = 19655;

	class BilibiliConfigModel : public ::System::Object
	{
	public:
		::System::String* app_id; // 0x10
		::System::String* app_key; // 0x18
		::System::String* server_id; // 0x20
		::System::String* merchant_id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILICONFIGMODEL__CTOR_OFFSET))(this);
		}
	};
}
