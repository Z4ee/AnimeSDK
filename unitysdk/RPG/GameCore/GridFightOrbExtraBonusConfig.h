#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_METHOD_2_034344149C20E4F0_OFFSET UNITYSDK_OFFSET(0x1EE710A0)
#define RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE710E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbExtraBonusConfig_TypeDefinitionIndex = 19177;

	class GridFightOrbExtraBonusConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_034344149C20E4F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightOrbExtraBonusConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightOrbExtraBonusConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBEXTRABONUSCONFIG_METHOD_2_034344149C20E4F0_OFFSET))(a1, a2);
		}
	};
}
