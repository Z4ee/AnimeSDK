#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/CakeRaceProperty.h"
#include "unitysdk/RPG/GameCore/DynamicRadiusType.h"
#include "unitysdk/RPG/GameCore/SelectEntityType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_METHOD_3_5B1949625F5A6A74_OFFSET UNITYSDK_OFFSET(0x1704A860)
#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_METHOD_3_815831156BA113D9_OFFSET UNITYSDK_OFFSET(0x170483F0)
#define RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170483E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCircleTargetSelectorConfig_TypeDefinitionIndex = 16887;

	class CakeRaceCircleTargetSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Int32 Radius; // 0x10
		::RPG::GameCore::CakeRaceProperty DynamicRadiusProperty; // 0x14
		::RPG::GameCore::DynamicRadiusType DynamicRadiusSetType; // 0x18
		::RPG::GameCore::SelectEntityType EntityType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5B1949625F5A6A74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_METHOD_3_5B1949625F5A6A74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_815831156BA113D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCircleTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECIRCLETARGETSELECTORCONFIG_METHOD_3_815831156BA113D9_OFFSET))(a1, a2);
		}
	};
}
