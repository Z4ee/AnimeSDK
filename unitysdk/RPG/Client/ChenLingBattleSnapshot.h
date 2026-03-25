#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B1C37B065CBC515F;
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_1_OFFSET UNITYSDK_OFFSET(0x934F990)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x9320E50)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9330160)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x932CF90)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSnapshot_TypeDefinitionIndex = 49835;

	class ChenLingBattleSnapshot : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleTeamSnapshot* Enemy; // 0x10
		::RPG::Client::ChenLingBattleTeamSnapshot* Ally; // 0x18

		::System::Void _ctor(::RPG::Client::ChenLingBattleTeamSnapshot* ally, ::RPG::Client::ChenLingBattleTeamSnapshot* enemy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT__CTOR_OFFSET))(this, ally, enemy);
		}

		static ::RPG::Client::ChenLingBattleSnapshot* CreateFake()
		{
			return ((::RPG::Client::ChenLingBattleSnapshot*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattleSnapshot* CreateFake_1(::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* allyArmyProfilers, ::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>* enemyArmyProfilers)
		{
			return ((::RPG::Client::ChenLingBattleSnapshot*(*)(::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>*, ::System::Collections::Generic::List_1<::Class_1_B1C37B065CBC515F*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_1_OFFSET))(allyArmyProfilers, enemyArmyProfilers);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_DISPOSE_OFFSET))(this);
		}
	};
}
