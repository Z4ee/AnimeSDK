#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG_METHOD_3_848BBA396CAB26E7_OFFSET UNITYSDK_OFFSET(0x1C3950D0)
#define RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG_METHOD_3_CF968462324791FD_OFFSET UNITYSDK_OFFSET(0x1C395070)
#define RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3950C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntitiesExclusionSelectorConfig_TypeDefinitionIndex = 15305;

	class ChimeraDuelEntitiesExclusionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Included; // 0x10
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Excluded; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF968462324791FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG_METHOD_3_CF968462324791FD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_848BBA396CAB26E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesExclusionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESEXCLUSIONSELECTORCONFIG_METHOD_3_848BBA396CAB26E7_OFFSET))(a1, a2);
		}
	};
}
