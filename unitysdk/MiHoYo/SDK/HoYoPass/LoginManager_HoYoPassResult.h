#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSRESULT_FROMJSONSTRING_OFFSET UNITYSDK_OFFSET(0x183230F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1833AF80)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager_HoYoPassResult_TypeDefinitionIndex = 8242;

	class LoginManager_HoYoPassResult : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONNode* data; // 0x10
		::System::String* msg; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSRESULT__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassResult* FromJsonString(::System::String* a1)
		{
			return ((::MiHoYo::SDK::HoYoPass::LoginManager_HoYoPassResult*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER_HOYOPASSRESULT_FROMJSONSTRING_OFFSET))(a1);
		}
	};
}
