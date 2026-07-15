#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_92E6833FDF64B70A_OFFSET UNITYSDK_OFFSET(0x1CFBF7D0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_AC6C6994AAA444CE_OFFSET UNITYSDK_OFFSET(0x1CFBF780)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableDiceReRollFreeConfig_TypeDefinitionIndex = 17228;

	class RogueModifierEnableDiceReRollFreeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AC6C6994AAA444CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_AC6C6994AAA444CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92E6833FDF64B70A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableDiceReRollFreeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEDICEREROLLFREECONFIG_METHOD_3_92E6833FDF64B70A_OFFSET))(a1, a2);
		}
	};
}
