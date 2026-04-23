#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_6_4191DAEE9273C754_OFFSET UNITYSDK_OFFSET(0x18CF6A10)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_6_4C6A43311E58A71A_OFFSET UNITYSDK_OFFSET(0x18CF6CC0)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF6B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondDimensionPointConfig_TypeDefinitionIndex = 18788;

	class RogueCondDimensionPointConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4191DAEE9273C754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondDimensionPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondDimensionPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_6_4191DAEE9273C754_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4C6A43311E58A71A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondDimensionPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondDimensionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_6_4C6A43311E58A71A_OFFSET))(a1, a2);
		}
	};
}
