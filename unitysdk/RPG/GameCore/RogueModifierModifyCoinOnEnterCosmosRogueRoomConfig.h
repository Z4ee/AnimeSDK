#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_78C5D85B863EC9DE_OFFSET UNITYSDK_OFFSET(0x19B5F040)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_DD588C2DD9280ED7_OFFSET UNITYSDK_OFFSET(0x19B550C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B55070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig_TypeDefinitionIndex = 17097;

	class RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_78C5D85B863EC9DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_78C5D85B863EC9DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD588C2DD9280ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_DD588C2DD9280ED7_OFFSET))(a1, a2);
		}
	};
}
