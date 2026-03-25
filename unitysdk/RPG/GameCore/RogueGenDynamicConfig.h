#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_METHOD_2_C12FEC38A34A4427_OFFSET UNITYSDK_OFFSET(0x1760AD20)
#define RPG_GAMECORE_ROGUEGENDYNAMICCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1760AD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGenDynamicConfig_TypeDefinitionIndex = 18157;

	class RogueGenDynamicConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGENDYNAMICCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C12FEC38A34A4427(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueGenDynamicConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueGenDynamicConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEGENDYNAMICCONFIG_METHOD_2_C12FEC38A34A4427_OFFSET))(a1, a2);
		}
	};
}
