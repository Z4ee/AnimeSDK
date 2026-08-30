#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_METHOD_2_553FFFFCBE68CCE4_OFFSET UNITYSDK_OFFSET(0x1D3EBA70)
#define RPG_GAMECORE_ROGUELAYEREFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EBAB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueLayerEffectConfig_TypeDefinitionIndex = 17710;

	class RogueLayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_553FFFFCBE68CCE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueLayerEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueLayerEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUELAYEREFFECTCONFIG_METHOD_2_553FFFFCBE68CCE4_OFFSET))(a1, a2);
		}
	};
}
