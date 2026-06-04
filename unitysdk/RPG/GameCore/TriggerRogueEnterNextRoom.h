#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_METHOD_3_35DD831820197305_OFFSET UNITYSDK_OFFSET(0x19E1B4E0)
#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_METHOD_3_9DD5F76A915893B1_OFFSET UNITYSDK_OFFSET(0x19E1B3D0)
#define RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1B4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueEnterNextRoom_TypeDefinitionIndex = 21041;

	class TriggerRogueEnterNextRoom : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9DD5F76A915893B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueEnterNextRoom*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_METHOD_3_9DD5F76A915893B1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_35DD831820197305(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueEnterNextRoom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEENTERNEXTROOM_METHOD_3_35DD831820197305_OFFSET))(a1, a2);
		}
	};
}
