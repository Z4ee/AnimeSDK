#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_67AC58C55B729E15;
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_1_OFFSET UNITYSDK_OFFSET(0x1AFF2B70)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x1AFF20D0)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFF2E00)
#define RPG_CLIENT_CHENLINGBATTLESNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF2AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleSnapshot_TypeDefinitionIndex = 58696;

	class ChenLingBattleSnapshot : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingBattleTeamSnapshot* Enemy; // 0x10
		::RPG::Client::ChenLingBattleTeamSnapshot* Ally; // 0x18

		::System::Void _ctor(::RPG::Client::ChenLingBattleTeamSnapshot* a1, ::RPG::Client::ChenLingBattleTeamSnapshot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattleTeamSnapshot*, ::RPG::Client::ChenLingBattleTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::RPG::Client::ChenLingBattleSnapshot* CreateFake()
		{
			return ((::RPG::Client::ChenLingBattleSnapshot*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattleSnapshot* CreateFake_1(::System::Collections::Generic::List_1<::Class_1_67AC58C55B729E15*>* a1, ::System::Collections::Generic::List_1<::Class_1_67AC58C55B729E15*>* a2)
		{
			return ((::RPG::Client::ChenLingBattleSnapshot*(*)(::System::Collections::Generic::List_1<::Class_1_67AC58C55B729E15*>*, ::System::Collections::Generic::List_1<::Class_1_67AC58C55B729E15*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_CREATEFAKE_1_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLESNAPSHOT_DISPOSE_OFFSET))(this);
		}
	};
}
