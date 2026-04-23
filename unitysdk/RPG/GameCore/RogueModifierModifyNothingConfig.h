#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_METHOD_3_76EEA094C4D9CE3B_OFFSET UNITYSDK_OFFSET(0x18D416D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_METHOD_3_940C9C693A572222_OFFSET UNITYSDK_OFFSET(0x18D41600)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyNothingConfig_TypeDefinitionIndex = 16847;

	class RogueModifierModifyNothingConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_940C9C693A572222(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyNothingConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyNothingConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_METHOD_3_940C9C693A572222_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_76EEA094C4D9CE3B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyNothingConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyNothingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYNOTHINGCONFIG_METHOD_3_76EEA094C4D9CE3B_OFFSET))(a1, a2);
		}
	};
}
