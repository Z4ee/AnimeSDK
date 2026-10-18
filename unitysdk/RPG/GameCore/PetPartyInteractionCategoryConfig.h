#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PetPartyInteractionCategory.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace RPG::GameCore { class PetPartySingleCombinationConfig; }
namespace RPG::GameCore { class PetPartySingleDoubleCombinationConfig; }

#define RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_METHOD_2_E7C6343767197749_OFFSET UNITYSDK_OFFSET(0x1D8DBA40)
#define RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DBC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionCategoryConfig_TypeDefinitionIndex = 17553;

	class PetPartyInteractionCategoryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PetPartyInteractionCategory Category; // 0x10
		::System::UInt32 Weight; // 0x14
		::Il2CppArray<::RPG::GameCore::PetPartyInteractionDefinition*>* Interactions; // 0x18
		::RPG::GameCore::PetPartySingleCombinationConfig* SingleCombination; // 0x20
		::RPG::GameCore::PetPartySingleDoubleCombinationConfig* SingleDoubleCombination; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E7C6343767197749(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyInteractionCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyInteractionCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYINTERACTIONCATEGORYCONFIG_METHOD_2_E7C6343767197749_OFFSET))(a1, a2);
		}
	};
}
