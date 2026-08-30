#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG_METHOD_3_36835CBC71D232A1_OFFSET UNITYSDK_OFFSET(0x1E331D30)
#define RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG_METHOD_3_7B6DE5D55825B6D9_OFFSET UNITYSDK_OFFSET(0x1E331CD0)
#define RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E331D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntitiesIntersectionSelectorConfig_TypeDefinitionIndex = 15743;

	class ChimeraDuelEntitiesIntersectionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* Sources; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B6DE5D55825B6D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG_METHOD_3_7B6DE5D55825B6D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36835CBC71D232A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesIntersectionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESINTERSECTIONSELECTORCONFIG_METHOD_3_36835CBC71D232A1_OFFSET))(a1, a2);
		}
	};
}
