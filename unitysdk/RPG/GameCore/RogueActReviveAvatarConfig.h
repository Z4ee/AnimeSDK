#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_2DF97855D0404C31_OFFSET UNITYSDK_OFFSET(0x175C8070)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_FC77173B9CE8F0AC_OFFSET UNITYSDK_OFFSET(0x175C8290)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C81B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReviveAvatarConfig_TypeDefinitionIndex = 17985;

	class RogueActReviveAvatarConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2DF97855D0404C31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_2DF97855D0404C31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FC77173B9CE8F0AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_FC77173B9CE8F0AC_OFFSET))(a1, a2);
		}
	};
}
