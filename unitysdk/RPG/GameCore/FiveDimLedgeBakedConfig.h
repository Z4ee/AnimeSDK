#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_METHOD_2_1E0F23A694BAFE4D_OFFSET UNITYSDK_OFFSET(0x1BA9CBF0)
#define RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9CD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLedgeBakedConfig_TypeDefinitionIndex = 16004;

	class FiveDimLedgeBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single LedgeHeight; // 0x10
		::System::Single LedgeFlipHeight; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1E0F23A694BAFE4D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimLedgeBakedConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimLedgeBakedConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLEDGEBAKEDCONFIG_METHOD_2_1E0F23A694BAFE4D_OFFSET))(a1, a2);
		}
	};
}
