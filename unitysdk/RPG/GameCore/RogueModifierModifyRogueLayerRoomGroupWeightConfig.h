#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_35D71EF53F2D9E39_OFFSET UNITYSDK_OFFSET(0x1D3FA920)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_50EE166A0D6F197D_OFFSET UNITYSDK_OFFSET(0x1D3FA970)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FA960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueLayerRoomGroupWeightConfig_TypeDefinitionIndex = 17528;

	class RogueModifierModifyRogueLayerRoomGroupWeightConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35D71EF53F2D9E39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_35D71EF53F2D9E39_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50EE166A0D6F197D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTCONFIG_METHOD_3_50EE166A0D6F197D_OFFSET))(a1, a2);
		}
	};
}
