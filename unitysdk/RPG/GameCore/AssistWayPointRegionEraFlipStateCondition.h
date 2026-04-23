#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistWayPointCondition.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_C5E536C486A9FAD5_OFFSET UNITYSDK_OFFSET(0x186AC890)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_DFAFD709052B7B08_OFFSET UNITYSDK_OFFSET(0x186ABC40)
#define RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x186ABC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointRegionEraFlipStateCondition_TypeDefinitionIndex = 18020;

	class AssistWayPointRegionEraFlipStateCondition : public ::RPG::GameCore::AssistWayPointCondition
	{
	public:
		::RPG::GameCore::EraStateType TargetRegionEraFlipState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C5E536C486A9FAD5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_C5E536C486A9FAD5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFAFD709052B7B08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointRegionEraFlipStateCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTREGIONERAFLIPSTATECONDITION_METHOD_3_DFAFD709052B7B08_OFFSET))(a1, a2);
		}
	};
}
