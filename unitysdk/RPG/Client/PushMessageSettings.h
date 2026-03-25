#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHEXPEDITIONFINISH_OFFSET UNITYSDK_OFFSET(0xA23E510)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHSTAMINAFULL_OFFSET UNITYSDK_OFFSET(0xA23E3D0)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHEXPEDITIONFINISH_OFFSET UNITYSDK_OFFSET(0xA23E5B0)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHSTAMINAFULL_OFFSET UNITYSDK_OFFSET(0xA23E470)
#define RPG_CLIENT_PUSHMESSAGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA23E310)

namespace RPG::Client
{
	inline static constexpr unsigned int PushMessageSettings_TypeDefinitionIndex = 48014;

	class PushMessageSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Boolean _DefalutSwitch; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS__CTOR_OFFSET))(this, name);
		}

		::System::Boolean get_EnablePushStaminaFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHSTAMINAFULL_OFFSET))(this);
		}

		::System::Void set_EnablePushStaminaFull(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHSTAMINAFULL_OFFSET))(this, value);
		}

		::System::Boolean get_EnablePushExpeditionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHEXPEDITIONFINISH_OFFSET))(this);
		}

		::System::Void set_EnablePushExpeditionFinish(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHEXPEDITIONFINISH_OFFSET))(this, value);
		}
	};
}
