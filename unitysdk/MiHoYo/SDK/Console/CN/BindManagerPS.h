#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/CN/BindManager.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS_GENERATEACCESSTOKEN_OFFSET UNITYSDK_OFFSET(0x1740E790)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS_GETBINDINGWEBURL_OFFSET UNITYSDK_OFFSET(0x1740F180)
#define MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1740BD50)

namespace MiHoYo::SDK::Console::CN
{
	inline static constexpr unsigned int BindManagerPS_TypeDefinitionIndex = 7866;

	class BindManagerPS : public ::MiHoYo::SDK::Console::CN::BindManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS__CTOR_OFFSET))(this);
		}

		::System::Void GenerateAccessToken(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS_GENERATEACCESSTOKEN_OFFSET))(this, callback);
		}

		::System::String* GetBindingWebURL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_BINDMANAGERPS_GETBINDINGWEBURL_OFFSET))(this);
		}
	};
}
