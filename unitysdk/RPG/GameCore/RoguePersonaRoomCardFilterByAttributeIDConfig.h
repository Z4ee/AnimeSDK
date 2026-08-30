#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoguePersonaRoomCardFilterBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_METHOD_3_50689128D9077FF4_OFFSET UNITYSDK_OFFSET(0x1E546BB0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_METHOD_3_6F14F48D44C7D078_OFFSET UNITYSDK_OFFSET(0x1E546DC0)
#define RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaRoomCardFilterByAttributeIDConfig_TypeDefinitionIndex = 19649;

	class RoguePersonaRoomCardFilterByAttributeIDConfig : public ::RPG::GameCore::RoguePersonaRoomCardFilterBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F14F48D44C7D078(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_METHOD_3_6F14F48D44C7D078_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50689128D9077FF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RoguePersonaRoomCardFilterByAttributeIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAROOMCARDFILTERBYATTRIBUTEIDCONFIG_METHOD_3_50689128D9077FF4_OFFSET))(a1, a2);
		}
	};
}
