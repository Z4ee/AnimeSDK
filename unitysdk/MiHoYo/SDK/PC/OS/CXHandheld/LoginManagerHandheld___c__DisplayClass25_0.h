#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerHandheld; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2576D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__OPENUSERCENTER_G__ACTIONRESPONSE_1_OFFSET UNITYSDK_OFFSET(0x1A258A40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__OPENUSERCENTER_G__OPENWEB_0_OFFSET UNITYSDK_OFFSET(0x1A2576E0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerHandheld___c__DisplayClass25_0_TypeDefinitionIndex = 8696;

	class LoginManagerHandheld___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerHandheld* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_g__openWeb_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__OPENUSERCENTER_G__OPENWEB_0_OFFSET))(this, a1);
		}

		::System::Void _OpenUserCenter_g__actionResponse_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS25_0__OPENUSERCENTER_G__ACTIONRESPONSE_1_OFFSET))(this, a1);
		}
	};
}
