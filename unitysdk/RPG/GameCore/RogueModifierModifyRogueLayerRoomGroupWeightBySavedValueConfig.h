#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG_METHOD_3_9F71C9D9307CFC64_OFFSET UNITYSDK_OFFSET(0x19B56CC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG_METHOD_3_F3C03A2F1A26706D_OFFSET UNITYSDK_OFFSET(0x19B60040)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B56C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig_TypeDefinitionIndex = 16865;

	class RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3C03A2F1A26706D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG_METHOD_3_F3C03A2F1A26706D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F71C9D9307CFC64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyRogueLayerRoomGroupWeightBySavedValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYROGUELAYERROOMGROUPWEIGHTBYSAVEDVALUECONFIG_METHOD_3_9F71C9D9307CFC64_OFFSET))(a1, a2);
		}
	};
}
