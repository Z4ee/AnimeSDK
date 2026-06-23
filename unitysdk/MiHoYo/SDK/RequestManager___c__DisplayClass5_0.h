#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCED00)
#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS5_0__GETMAILVERIFYCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1BBCED10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c__DisplayClass5_0_TypeDefinitionIndex = 19821;

	class RequestManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* actionType; // 0x10
		::System::String* actionTicket; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x20
		::System::String* url; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetMailVerifyCode_b__0(::System::Int32 code, ::System::String* mmt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS5_0__GETMAILVERIFYCODE_B__0_OFFSET))(this, code, mmt);
		}
	};
}
