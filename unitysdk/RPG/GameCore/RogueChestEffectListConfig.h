#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_METHOD_2_380B69A1472C3BBC_OFFSET UNITYSDK_OFFSET(0x18CF45A0)
#define RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF45E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueChestEffectListConfig_TypeDefinitionIndex = 17001;

	class RogueChestEffectListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_380B69A1472C3BBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueChestEffectListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueChestEffectListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECHESTEFFECTLISTCONFIG_METHOD_2_380B69A1472C3BBC_OFFSET))(a1, a2);
		}
	};
}
