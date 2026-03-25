#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_3CD06829264B741E_OFFSET UNITYSDK_OFFSET(0x1709A550)
#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_70275BFB064647A6_OFFSET UNITYSDK_OFFSET(0x1709A4F0)
#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1709A540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntitiesUnionSelectorConfig_TypeDefinitionIndex = 14606;

	class ChimeraDuelEntitiesUnionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* Selectors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70275BFB064647A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_70275BFB064647A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3CD06829264B741E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_3CD06829264B741E_OFFSET))(a1, a2);
		}
	};
}
