#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_6_4210A79AA57996CE_OFFSET UNITYSDK_OFFSET(0x19BB3440)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_6_F321C9A8EDD8B928_OFFSET UNITYSDK_OFFSET(0x19BB36F0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB35C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournLayerIndexConfig_TypeDefinitionIndex = 18787;

	class RogueParamRogueTournLayerIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4210A79AA57996CE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_6_4210A79AA57996CE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F321C9A8EDD8B928(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournLayerIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNLAYERINDEXCONFIG_METHOD_6_F321C9A8EDD8B928_OFFSET))(a1, a2);
		}
	};
}
