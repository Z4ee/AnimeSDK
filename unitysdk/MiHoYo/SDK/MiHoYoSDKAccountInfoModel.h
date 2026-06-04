#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKUserDataModel; }

#define MIHOYO_SDK_MIHOYOSDKACCOUNTINFOMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA18E080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKAccountInfoModel_TypeDefinitionIndex = 43745;

	class MiHoYoSDKAccountInfoModel : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKUserDataModel* account; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKACCOUNTINFOMODEL__CTOR_OFFSET))(this);
		}
	};
}
