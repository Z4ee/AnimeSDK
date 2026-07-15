#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKUploader; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185196F0)
#define MIHOYO_SDK_MIHOYOSDKUPLOADER___C__DISPLAYCLASS17_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1851BB20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKUploader___c__DisplayClass17_0_TypeDefinitionIndex = 44740;

	class MiHoYoSDKUploader___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKUploader* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKUPLOADER___C__DISPLAYCLASS17_0__POSTREQUEST_B__0_OFFSET))(this, a1);
		}
	};
}
