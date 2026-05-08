#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATNATIVE_PLUGINUITASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A877C70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatNative_PluginUITask_TypeDefinitionIndex = 34910;

	class AccountPlatNative_PluginUITask : public ::System::Object
	{
	public:
		::System::String* m_strMsgName; // 0x10
		::System::String* m_strParams; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATNATIVE_PLUGINUITASK__CTOR_OFFSET))(this);
		}
	};
}
