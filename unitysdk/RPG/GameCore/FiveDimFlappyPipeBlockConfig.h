#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_METHOD_2_DE463D5C807A01DF_OFFSET UNITYSDK_OFFSET(0x189014F0)
#define RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18901620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimFlappyPipeBlockConfig_TypeDefinitionIndex = 15848;

	class FiveDimFlappyPipeBlockConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Difficulty; // 0x10
		::System::Single Probability; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DE463D5C807A01DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimFlappyPipeBlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMFLAPPYPIPEBLOCKCONFIG_METHOD_2_DE463D5C807A01DF_OFFSET))(a1, a2);
		}
	};
}
