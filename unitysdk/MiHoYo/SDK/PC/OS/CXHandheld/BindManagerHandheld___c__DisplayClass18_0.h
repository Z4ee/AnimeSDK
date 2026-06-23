#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class BindManagerHandheld; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__BINDEMAIL_B__0_OFFSET UNITYSDK_OFFSET(0x1C394B80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__BINDEMAIL_B__1_OFFSET UNITYSDK_OFFSET(0x1C394DE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C394B70)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerHandheld___c__DisplayClass18_0_TypeDefinitionIndex = 20484;

	class BindManagerHandheld___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* OnBindResult; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerHandheld* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindEmail_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__BINDEMAIL_B__0_OFFSET))(this, response);
		}

		::System::Void _BindEmail_b__1(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS18_0__BINDEMAIL_B__1_OFFSET))(this, response);
		}
	};
}
