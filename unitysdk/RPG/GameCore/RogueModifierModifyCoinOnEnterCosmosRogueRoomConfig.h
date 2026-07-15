#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_99D701CB0F7B5693_OFFSET UNITYSDK_OFFSET(0x1D163940)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_DD588C2DD9280ED7_OFFSET UNITYSDK_OFFSET(0x1D163990)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D163980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig_TypeDefinitionIndex = 17259;

	class RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_99D701CB0F7B5693(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_99D701CB0F7B5693_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD588C2DD9280ED7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_DD588C2DD9280ED7_OFFSET))(a1, a2);
		}
	};
}
