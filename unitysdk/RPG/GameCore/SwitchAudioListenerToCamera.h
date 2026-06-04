#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_METHOD_3_3359703AC7FF383E_OFFSET UNITYSDK_OFFSET(0x19CD7590)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_METHOD_3_3F70BE524BA17F0F_OFFSET UNITYSDK_OFFSET(0x19CD7510)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CD7560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAudioListenerToCamera_TypeDefinitionIndex = 21026;

	class SwitchAudioListenerToCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3F70BE524BA17F0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAudioListenerToCamera*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAudioListenerToCamera*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_METHOD_3_3F70BE524BA17F0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3359703AC7FF383E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchAudioListenerToCamera* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchAudioListenerToCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOCAMERA_METHOD_3_3359703AC7FF383E_OFFSET))(a1, a2);
		}
	};
}
