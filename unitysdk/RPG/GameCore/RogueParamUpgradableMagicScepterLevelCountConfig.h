#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_6_0086BA23DC14E856_OFFSET UNITYSDK_OFFSET(0x1E546590)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_6_9A66B98609259932_OFFSET UNITYSDK_OFFSET(0x1E5465E0)
#define RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5465D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamUpgradableMagicScepterLevelCountConfig_TypeDefinitionIndex = 19600;

	class RogueParamUpgradableMagicScepterLevelCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0086BA23DC14E856(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_6_0086BA23DC14E856_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9A66B98609259932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamUpgradableMagicScepterLevelCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMUPGRADABLEMAGICSCEPTERLEVELCOUNTCONFIG_METHOD_6_9A66B98609259932_OFFSET))(a1, a2);
		}
	};
}
