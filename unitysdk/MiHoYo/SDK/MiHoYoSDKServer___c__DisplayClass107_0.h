#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF694A0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1DF694B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1DF69630)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass107_0_TypeDefinitionIndex = 37378;

	class MiHoYoSDKServer___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x10
		::System::String* requestUrl; // 0x18
		::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__POSTREQUEST_B__0_OFFSET))(this, responseString);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS107_0__POSTREQUEST_B__1_OFFSET))(this);
		}
	};
}
