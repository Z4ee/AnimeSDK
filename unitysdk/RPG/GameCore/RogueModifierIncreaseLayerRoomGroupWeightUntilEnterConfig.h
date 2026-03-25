#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_7C2E24D25D3EA8D1_OFFSET UNITYSDK_OFFSET(0x17632890)
#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_E63F6716A23E9A38_OFFSET UNITYSDK_OFFSET(0x176327C0)
#define RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17632840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig_TypeDefinitionIndex = 16295;

	class RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E63F6716A23E9A38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_E63F6716A23E9A38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7C2E24D25D3EA8D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierIncreaseLayerRoomGroupWeightUntilEnterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERINCREASELAYERROOMGROUPWEIGHTUNTILENTERCONFIG_METHOD_3_7C2E24D25D3EA8D1_OFFSET))(a1, a2);
		}
	};
}
