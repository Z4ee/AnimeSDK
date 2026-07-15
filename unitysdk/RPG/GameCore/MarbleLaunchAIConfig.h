#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSampleConfig; }

#define RPG_GAMECORE_MARBLELAUNCHAICONFIG_METHOD_2_3D2FC51262288A18_OFFSET UNITYSDK_OFFSET(0x1BD1A310)
#define RPG_GAMECORE_MARBLELAUNCHAICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD1A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleLaunchAIConfig_TypeDefinitionIndex = 16235;

	class MarbleLaunchAIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::MarbleSampleConfig* DirectSample; // 0x10
		::RPG::GameCore::MarbleSampleConfig* IndirectSample; // 0x18
		::System::Single AddHpFactor; // 0x20
		::System::Single CostHpFactor; // 0x24
		::System::Single AddAttackFactor; // 0x28
		::System::Single ActionAgainScore; // 0x2C
		::Il2CppArray<::System::Single>* RankInterval; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELAUNCHAICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3D2FC51262288A18(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleLaunchAIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleLaunchAIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLELAUNCHAICONFIG_METHOD_2_3D2FC51262288A18_OFFSET))(a1, a2);
		}
	};
}
