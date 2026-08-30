#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A78CE7582CF7C10E;
class Class_1_DDF2C200AE487775;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_GET_FIRSTAVATAR_OFFSET UNITYSDK_OFFSET(0xCA21FA0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_GET_ISSHOWAVATARTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xCA23600)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_ISAVATARINTEAM_OFFSET UNITYSDK_OFFSET(0xCA23440)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_TRYGETAVATARTEAMINDEX_OFFSET UNITYSDK_OFFSET(0xCA234F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_VISITALLAVATARS_OFFSET UNITYSDK_OFFSET(0xCA22D20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_VISITAVATARSINTEAM_OFFSET UNITYSDK_OFFSET(0xCA23250)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA21FB0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamInfoProviderViewModel_TypeDefinitionIndex = 80256;

	class ChallengeTierceTeamInfoProviderViewModel : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _FirstAvatar_k__BackingField; // 0x10
		::Class_1_DDF2C200AE487775* _AvatarQueryService; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* _StageIndexOfAvatar; // 0x20

		::System::Void _ctor(::Class_1_DDF2C200AE487775* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_A78CE7582CF7C10E*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDF2C200AE487775*, ::System::Collections::Generic::IEnumerable_1<::Class_1_A78CE7582CF7C10E*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::AvatarSystem::IAvatar* get_FirstAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_GET_FIRSTAVATAR_OFFSET))(this);
		}

		::System::Void VisitAllAvatars(::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_VISITALLAVATARS_OFFSET))(this, a1);
		}

		::System::Void VisitAvatarsInTeam(::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_VISITAVATARSINTEAM_OFFSET))(this, a1);
		}

		::System::Boolean IsAvatarInTeam(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_ISAVATARINTEAM_OFFSET))(this, a1);
		}

		::System::Boolean TryGetAvatarTeamIndex(::RPG::AvatarSystem::IAvatar* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_TRYGETAVATARTEAMINDEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsShowAvatarTeamIndex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_GET_ISSHOWAVATARTEAMINDEX_OFFSET))(this);
		}
	};
}
