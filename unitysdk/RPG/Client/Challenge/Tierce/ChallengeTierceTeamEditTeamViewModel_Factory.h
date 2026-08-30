#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_19DB14C0C5CFE108;
class Class_1_DDF2C200AE487775;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditTeamViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0xCA1FE90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEONE_OFFSET UNITYSDK_OFFSET(0xCA1FDC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA1FDB0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditTeamViewModel_Factory_TypeDefinitionIndex = 80299;

	class ChallengeTierceTeamEditTeamViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_19DB14C0C5CFE108* _TeamConflictCheckService; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* _StageFactory; // 0x18
		::Class_1_DDF2C200AE487775* _AvatarQueryService; // 0x20

		::System::Void _ctor(::Class_1_DDF2C200AE487775* a1, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory* a2, ::Class_1_19DB14C0C5CFE108* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDF2C200AE487775*, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel_Factory*, ::Class_1_19DB14C0C5CFE108*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel* CreateOne(::Class_1_06E38C65842C3B24* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEONE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*>* CreateAll(::Class_1_06E38C65842C3B24* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditTeamViewModel*>*(*)(::PVOID, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITTEAMVIEWMODEL_FACTORY_CREATEALL_OFFSET))(this, a1);
		}
	};
}
