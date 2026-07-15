#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_METHOD_3_257AD7BAB8737084_OFFSET UNITYSDK_OFFSET(0x1CFBFBF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_METHOD_3_312E09DFADA3B0C8_OFFSET UNITYSDK_OFFSET(0x1CFBFBA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBFBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterRogueTournRoomInitConfig_TypeDefinitionIndex = 17051;

	class RogueModifierExecuteActionAfterRogueTournRoomInitConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_312E09DFADA3B0C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_METHOD_3_312E09DFADA3B0C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_257AD7BAB8737084(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterRogueTournRoomInitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERROGUETOURNROOMINITCONFIG_METHOD_3_257AD7BAB8737084_OFFSET))(a1, a2);
		}
	};
}
