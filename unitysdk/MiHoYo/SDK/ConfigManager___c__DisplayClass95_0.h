#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7567A0)
#define MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS95_0__REQUESTMDKCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1B75D180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfigManager___c__DisplayClass95_0_TypeDefinitionIndex = 8169;

	class ConfigManager___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ConfigManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS95_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestMDKConfig_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIGMANAGER___C__DISPLAYCLASS95_0__REQUESTMDKCONFIG_B__0_OFFSET))(this, a1);
		}
	};
}
