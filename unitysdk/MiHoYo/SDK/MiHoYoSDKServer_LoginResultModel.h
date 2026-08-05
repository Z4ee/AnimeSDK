#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_LOGINRESULTMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCC1140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_LoginResultModel_TypeDefinitionIndex = 37365;

	class MiHoYoSDKServer_LoginResultModel : public ::System::Object
	{
	public:
		::System::Int32 appId; // 0x10
		::System::Int32 channelId; // 0x14
		::System::Int32 accountType; // 0x18
		::System::Int32 comboId; // 0x1C
		::System::String* openId; // 0x20
		::System::String* comboToken; // 0x28
		::System::String* deviceId; // 0x30
		::System::Boolean guest; // 0x38
		::System::Int32 loginType; // 0x3C
		::System::Boolean isNewRegister; // 0x40
		::System::String* onlineId; // 0x48
		::System::String* psAccountId; // 0x50
		::System::String* ext; // 0x58

		::System::Void _ctor(::MiHoYo::SDK::JSONNode* json)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_LOGINRESULTMODEL__CTOR_OFFSET))(this, json);
		}
	};
}
