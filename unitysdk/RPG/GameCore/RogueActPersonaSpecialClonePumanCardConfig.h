#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_METHOD_6_26F4118F8CA9A523_OFFSET UNITYSDK_OFFSET(0x1D3BA460)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_METHOD_6_6A45FE87E92EE71F_OFFSET UNITYSDK_OFFSET(0x1D3BA410)
#define RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSpecialClonePumanCardConfig_TypeDefinitionIndex = 19555;

	class RogueActPersonaSpecialClonePumanCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6A45FE87E92EE71F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_METHOD_6_6A45FE87E92EE71F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_26F4118F8CA9A523(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSpecialClonePumanCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASPECIALCLONEPUMANCARDCONFIG_METHOD_6_26F4118F8CA9A523_OFFSET))(a1, a2);
		}
	};
}
