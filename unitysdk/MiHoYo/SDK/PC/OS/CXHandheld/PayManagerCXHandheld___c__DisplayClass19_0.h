#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFD43F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1CFD4400)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int PayManagerCXHandheld___c__DisplayClass19_0_TypeDefinitionIndex = 20864;

	class PayManagerCXHandheld___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* xuid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateXstsAccessToken_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET))(this, result);
		}
	};
}
