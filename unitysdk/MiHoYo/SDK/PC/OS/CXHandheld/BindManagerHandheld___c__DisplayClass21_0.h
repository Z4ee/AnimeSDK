#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class BindManagerHandheld; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6685E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS21_0__REQUESTACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1A66A670)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int BindManagerHandheld___c__DisplayClass21_0_TypeDefinitionIndex = 8680;

	class BindManagerHandheld___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* account; // 0x10
		::MiHoYo::SDK::PC::OS::CXHandheld::BindManagerHandheld* __4__this; // 0x18
		::System::String* actionType; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestActionTicket_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_BINDMANAGERHANDHELD___C__DISPLAYCLASS21_0__REQUESTACTIONTICKET_B__0_OFFSET))(this, a1);
		}
	};
}
