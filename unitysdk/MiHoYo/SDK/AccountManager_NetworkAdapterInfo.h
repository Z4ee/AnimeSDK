#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTMANAGER_NETWORKADAPTERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1991F4F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountManager_NetworkAdapterInfo_TypeDefinitionIndex = 18816;

	class AccountManager_NetworkAdapterInfo : public ::System::Object
	{
	public:
		::System::String* mac_address; // 0x10
		::System::String* description; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTMANAGER_NETWORKADAPTERINFO__CTOR_OFFSET))(this);
		}
	};
}
