#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG_METHOD_3_B94D27BDE53F5253_OFFSET UNITYSDK_OFFSET(0x187F9A00)
#define RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG_METHOD_3_C633EDBDDEDF8A89_OFFSET UNITYSDK_OFFSET(0x187F99A0)
#define RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187F99F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntitiesFilterSelectorConfig_TypeDefinitionIndex = 15080;

	class ChimeraDuelEntitiesFilterSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* Source; // 0x10
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* KeepCondition; // 0x18
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* DropCondition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C633EDBDDEDF8A89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG_METHOD_3_C633EDBDDEDF8A89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B94D27BDE53F5253(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesFilterSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESFILTERSELECTORCONFIG_METHOD_3_B94D27BDE53F5253_OFFSET))(a1, a2);
		}
	};
}
