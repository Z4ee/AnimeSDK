#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B99FF60)
#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__GETMOBILEVERIFYCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1B9A7BF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c__DisplayClass15_0_TypeDefinitionIndex = 8020;

	class RequestManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18
		::System::String* mobile; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetMobileVerifyCode_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__GETMOBILEVERIFYCODE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
