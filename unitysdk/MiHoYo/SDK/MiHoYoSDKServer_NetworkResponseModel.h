#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B5FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_NetworkResponseModel_TypeDefinitionIndex = 37364;

	class MiHoYoSDKServer_NetworkResponseModel : public ::System::Object
	{
	public:
		::System::Int32 retcode; // 0x10
		::System::String* message; // 0x18
		::MiHoYo::SDK::JSONNode* data; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_NETWORKRESPONSEMODEL__CTOR_OFFSET))(this);
		}
	};
}
