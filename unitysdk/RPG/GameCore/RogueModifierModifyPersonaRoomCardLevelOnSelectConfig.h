#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_14661D3D02FF161C_OFFSET UNITYSDK_OFFSET(0x1D164060)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_20927B31A9676558_OFFSET UNITYSDK_OFFSET(0x1D1640B0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1640A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardLevelOnSelectConfig_TypeDefinitionIndex = 17123;

	class RogueModifierModifyPersonaRoomCardLevelOnSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14661D3D02FF161C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_14661D3D02FF161C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20927B31A9676558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_20927B31A9676558_OFFSET))(a1, a2);
		}
	};
}
