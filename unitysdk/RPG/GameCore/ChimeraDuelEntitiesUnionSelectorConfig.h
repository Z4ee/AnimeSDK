#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_3603613DF33DD3A3_OFFSET UNITYSDK_OFFSET(0x1963BDE0)
#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_386811AEE2472893_OFFSET UNITYSDK_OFFSET(0x1963BE40)
#define RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1963BE30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntitiesUnionSelectorConfig_TypeDefinitionIndex = 15139;

	class ChimeraDuelEntitiesUnionSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*>* Selectors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3603613DF33DD3A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_3603613DF33DD3A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_386811AEE2472893(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntitiesUnionSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITIESUNIONSELECTORCONFIG_METHOD_3_386811AEE2472893_OFFSET))(a1, a2);
		}
	};
}
