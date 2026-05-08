#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_THIRDPARTYINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1994AD80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ThirdPartyInfoModel_TypeDefinitionIndex = 18731;

	class ThirdPartyInfoModel : public ::System::Object
	{
	public:
		::System::String* nickname; // 0x10
		::System::String* thirdparty; // 0x18
		::System::String* union_id; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_THIRDPARTYINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
