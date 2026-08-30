#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B95A490)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__OPENURLWITHLOGINSTATUS_B__1_OFFSET UNITYSDK_OFFSET(0x1B96DFF0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__OPENURLWITHLOGINSTATUS_G__OPENURLBYACTIONTYPE_0_OFFSET UNITYSDK_OFFSET(0x1B95A9C0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass37_0_TypeDefinitionIndex = 8266;

	class LoginManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* crossLoginQueries; // 0x10
		::System::String* originalUrl; // 0x18
		::System::Int32 actionType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUrlWithLoginStatus_g__OpenUrlByActionType_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__OPENURLWITHLOGINSTATUS_G__OPENURLBYACTIONTYPE_0_OFFSET))(this, a1);
		}

		::System::Void _OpenUrlWithLoginStatus_b__1(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS37_0__OPENURLWITHLOGINSTATUS_B__1_OFFSET))(this, a1, a2);
		}
	};
}
