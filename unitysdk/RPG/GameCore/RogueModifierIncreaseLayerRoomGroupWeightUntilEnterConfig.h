#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_4B3A8F68CAF2016D_OFFSET UNITYSDK_OFFSET(0x1EEF9D10)
#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_7C2E24D25D3EA8D1_OFFSET UNITYSDK_OFFSET(0x1EEF9D60)
#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig_TypeDefinitionIndex = 17529;

	class RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B3A8F68CAF2016D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_4B3A8F68CAF2016D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C2E24D25D3EA8D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_7C2E24D25D3EA8D1_OFFSET))(a1, a2);
		}
	};
}
