#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_METHOD_2_5DC296C7E8F952AA_OFFSET UNITYSDK_OFFSET(0x172196F0)
#define RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17219870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationTargetDistanceConfig_TypeDefinitionIndex = 16699;

	class FormationTargetDistanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single DistanceRangeMin; // 0x10
		::System::Single DistanceRangeMax; // 0x14
		::System::Single TargetDistance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5DC296C7E8F952AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FormationTargetDistanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FormationTargetDistanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORMATIONTARGETDISTANCECONFIG_METHOD_2_5DC296C7E8F952AA_OFFSET))(a1, a2);
		}
	};
}
