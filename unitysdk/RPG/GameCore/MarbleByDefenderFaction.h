#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_AA609FA006972764_OFFSET UNITYSDK_OFFSET(0x1D2301F0)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_EB90F0FD30C5C6C6_OFFSET UNITYSDK_OFFSET(0x1D230250)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D230240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFaction_TypeDefinitionIndex = 16689;

	class MarbleByDefenderFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AA609FA006972764(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFaction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFaction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_AA609FA006972764_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EB90F0FD30C5C6C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFaction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_EB90F0FD30C5C6C6_OFFSET))(a1, a2);
		}
	};
}
