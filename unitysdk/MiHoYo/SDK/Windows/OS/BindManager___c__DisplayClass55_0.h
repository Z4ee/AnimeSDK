#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E3450)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__REQUESTCREATEACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x182E77F0)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass55_0_TypeDefinitionIndex = 8299;

	class BindManager___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::System::String* account; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* callback; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x20
		::System::String* actionType; // 0x28
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestCreateActionTicket_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS55_0__REQUESTCREATEACTIONTICKET_B__0_OFFSET))(this, a1);
		}
	};
}
