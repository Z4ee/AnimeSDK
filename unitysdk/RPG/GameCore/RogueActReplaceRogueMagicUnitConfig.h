#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG_METHOD_6_035A161E31149A1F_OFFSET UNITYSDK_OFFSET(0x19AF82B0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG_METHOD_6_E004E4922A280D7A_OFFSET UNITYSDK_OFFSET(0x19AF8090)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF81D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueMagicUnitConfig_TypeDefinitionIndex = 18658;

	class RogueActReplaceRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E004E4922A280D7A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG_METHOD_6_E004E4922A280D7A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_035A161E31149A1F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICUNITCONFIG_METHOD_6_035A161E31149A1F_OFFSET))(a1, a2);
		}
	};
}
