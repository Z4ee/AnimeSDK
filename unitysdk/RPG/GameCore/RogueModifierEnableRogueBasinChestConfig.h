#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_METHOD_3_3D0FA42776753689_OFFSET UNITYSDK_OFFSET(0x1CFBF7E0)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_METHOD_3_4AE67AFF367E148D_OFFSET UNITYSDK_OFFSET(0x1CFBF830)
#define RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierEnableRogueBasinChestConfig_TypeDefinitionIndex = 17064;

	class RogueModifierEnableRogueBasinChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D0FA42776753689(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_METHOD_3_3D0FA42776753689_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4AE67AFF367E148D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierEnableRogueBasinChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERENABLEROGUEBASINCHESTCONFIG_METHOD_3_4AE67AFF367E148D_OFFSET))(a1, a2);
		}
	};
}
