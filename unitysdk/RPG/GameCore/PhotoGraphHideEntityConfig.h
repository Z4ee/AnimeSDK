#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_METHOD_2_63695B24485F3054_OFFSET UNITYSDK_OFFSET(0x18BF6020)
#define RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18BF63D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphHideEntityConfig_TypeDefinitionIndex = 20472;

	class PhotoGraphHideEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HideEntity; // 0x10
		::System::Boolean HideNPC; // 0x18
		::System::Boolean HideMunicipalCrowd; // 0x19
		::System::Boolean HideMunicipalPedestrian; // 0x1A
		::System::Boolean HideMunicipalOther; // 0x1B
		::System::Boolean HideMonster; // 0x1C
		::System::Boolean HideProp; // 0x1D
		::System::Boolean HidePet; // 0x1E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_63695B24485F3054(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphHideEntityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphHideEntityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHHIDEENTITYCONFIG_METHOD_2_63695B24485F3054_OFFSET))(a1, a2);
		}
	};
}
