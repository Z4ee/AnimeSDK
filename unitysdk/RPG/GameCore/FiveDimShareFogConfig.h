#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_METHOD_2_3132C228A53DDE85_OFFSET UNITYSDK_OFFSET(0x1BEB2660)
#define RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB26A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimShareFogConfig_TypeDefinitionIndex = 17795;

	class FiveDimShareFogConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3132C228A53DDE85(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimShareFogConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimShareFogConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSHAREFOGCONFIG_METHOD_2_3132C228A53DDE85_OFFSET))(a1, a2);
		}
	};
}
