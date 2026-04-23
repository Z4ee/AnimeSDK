#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174E5550)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__REQUESTCREATEACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x174E99F0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass55_0_TypeDefinitionIndex = 7396;

	class BindManager___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x10
		::System::String* actionType; // 0x18
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback; // 0x28
		::System::String* account; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCreateActionTicket_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__REQUESTCREATEACTIONTICKET_B__0_OFFSET))(this, accessToken);
		}
	};
}
