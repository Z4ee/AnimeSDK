#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleFaction.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_11E8DB0D283FEB54_OFFSET UNITYSDK_OFFSET(0x18A98960)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_9878885BC41F5FB1_OFFSET UNITYSDK_OFFSET(0x18A98880)
#define RPG_GAMECORE_MARBLEBYDEFENDERFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A98910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByDefenderFaction_TypeDefinitionIndex = 15969;

	class MarbleByDefenderFaction : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleFaction>* FactionList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9878885BC41F5FB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFaction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFaction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_9878885BC41F5FB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_11E8DB0D283FEB54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByDefenderFaction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByDefenderFaction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYDEFENDERFACTION_METHOD_4_11E8DB0D283FEB54_OFFSET))(a1, a2);
		}
	};
}
