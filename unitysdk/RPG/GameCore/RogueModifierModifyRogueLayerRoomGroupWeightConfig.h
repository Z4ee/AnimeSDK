#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_0E03E80EA144A004_OFFSET UNITYSDK_OFFSET(0x17635990)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_50EE166A0D6F197D_OFFSET UNITYSDK_OFFSET(0x17635A60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17635A10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueLayerRoomGroupWeightConfig_TypeDefinitionIndex = 16294;

	class RogueModifierModifyRogueLayerRoomGroupWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E03E80EA144A004(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_0E03E80EA144A004_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50EE166A0D6F197D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_50EE166A0D6F197D_OFFSET))(a1, a2);
		}
	};
}
