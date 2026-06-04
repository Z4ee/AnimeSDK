#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_087072B9C70D5828_OFFSET UNITYSDK_OFFSET(0x1970EE40)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_820B1F3CB77484CC_OFFSET UNITYSDK_OFFSET(0x1970F000)
#define RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970EF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateCondLineupHasAvatarConfig_TypeDefinitionIndex = 18261;

	class FateCondLineupHasAvatarConfig : public ::RPG::GameCore::FateConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_087072B9C70D5828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_087072B9C70D5828_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_820B1F3CB77484CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateCondLineupHasAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateCondLineupHasAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDLINEUPHASAVATARCONFIG_METHOD_6_820B1F3CB77484CC_OFFSET))(a1, a2);
		}
	};
}
