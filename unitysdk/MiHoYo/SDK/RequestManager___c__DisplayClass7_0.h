#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18414640)
#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS7_0__MOBILECAPTCHA_B__0_OFFSET UNITYSDK_OFFSET(0x1841D4C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c__DisplayClass7_0_TypeDefinitionIndex = 8003;

	class RequestManager___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* ticket; // 0x10
		::System::String* actionType; // 0x18
		::System::String* mobile; // 0x20
		::System::String* url; // 0x28
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _MobileCaptcha_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS7_0__MOBILECAPTCHA_B__0_OFFSET))(this, a1, a2);
		}
	};
}
