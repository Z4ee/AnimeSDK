#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DirectDeliveryNoticeToastConfig.h"

namespace System { class String; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG_GET_UINAME_OFFSET UNITYSDK_OFFSET(0xB7F69D0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG_GET_UIPATH_OFFSET UNITYSDK_OFFSET(0xB7F69C0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F69E0)

namespace RPG::Client
{
	inline static constexpr unsigned int DirectDeliveryNoticeRewardToastConfig_TypeDefinitionIndex = 59510;

	class DirectDeliveryNoticeRewardToastConfig : public ::RPG::Client::DirectDeliveryNoticeToastConfig
	{
	public:
		::System::String* _UIPath; // 0x10
		::System::String* _UIName; // 0x18

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_UIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG_GET_UIPATH_OFFSET))(this);
		}

		::System::String* get_UIName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICEREWARDTOASTCONFIG_GET_UINAME_OFFSET))(this);
		}
	};
}
