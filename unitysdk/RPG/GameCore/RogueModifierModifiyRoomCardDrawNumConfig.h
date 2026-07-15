#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_8ECC9FB496A3DD08_OFFSET UNITYSDK_OFFSET(0x1D1633A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CCC2EF06EFF8B0C4_OFFSET UNITYSDK_OFFSET(0x1D1633F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1633E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifiyRoomCardDrawNumConfig_TypeDefinitionIndex = 17108;

	class RogueModifierModifiyRoomCardDrawNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8ECC9FB496A3DD08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_8ECC9FB496A3DD08_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CCC2EF06EFF8B0C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifiyRoomCardDrawNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFIYROOMCARDDRAWNUMCONFIG_METHOD_3_CCC2EF06EFF8B0C4_OFFSET))(a1, a2);
		}
	};
}
