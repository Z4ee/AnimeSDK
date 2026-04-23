#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CCC2EF06EFF8B0C4_OFFSET UNITYSDK_OFFSET(0x18D3FC60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CD9B4FB6BDE97D4D_OFFSET UNITYSDK_OFFSET(0x18D3FB90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3FC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyRoomCardDrawNumConfig_TypeDefinitionIndex = 16931;

	class RogueModifierModifiyRoomCardDrawNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CD9B4FB6BDE97D4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CD9B4FB6BDE97D4D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCC2EF06EFF8B0C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CCC2EF06EFF8B0C4_OFFSET))(a1, a2);
		}
	};
}
