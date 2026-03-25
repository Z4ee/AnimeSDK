#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ELFFARMCONFIG_METHOD_2_2695D861F14F89E2_OFFSET UNITYSDK_OFFSET(0x1718E5B0)
#define RPG_GAMECORE_ELFFARMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1718E800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfFarmConfig_TypeDefinitionIndex = 16952;

	class ElfFarmConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SeedlingModelPath1; // 0x10
		::System::String* SeedlingModelPath2; // 0x18
		::System::String* MatureCropsEffectPath; // 0x20
		::System::String* PlantCropsEffectPath; // 0x28
		::System::String* CollectCropsEffectPath; // 0x30
		::System::String* CollectCropsExtraEffectPath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2695D861F14F89E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfFarmConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfFarmConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFFARMCONFIG_METHOD_2_2695D861F14F89E2_OFFSET))(a1, a2);
		}
	};
}
