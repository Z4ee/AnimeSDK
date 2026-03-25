#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYAND_METHOD_4_3010C2AFF4A1C870_OFFSET UNITYSDK_OFFSET(0x17388A70)
#define RPG_GAMECORE_MARBLEBYAND_METHOD_4_DD0BA2583E82015D_OFFSET UNITYSDK_OFFSET(0x17388990)
#define RPG_GAMECORE_MARBLEBYAND__CTOR_OFFSET UNITYSDK_OFFSET(0x17388A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByAnd_TypeDefinitionIndex = 15445;

	class MarbleByAnd : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarblePredicateConfig*>* PredicateList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DD0BA2583E82015D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByAnd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByAnd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_METHOD_4_DD0BA2583E82015D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3010C2AFF4A1C870(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByAnd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByAnd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYAND_METHOD_4_3010C2AFF4A1C870_OFFSET))(a1, a2);
		}
	};
}
