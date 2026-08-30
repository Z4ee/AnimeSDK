#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A78CE7582CF7C10E;
class Class_1_DDF2C200AE487775;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamInfoProviderViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA16B60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA23640)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamInfoProviderViewModel_Factory_TypeDefinitionIndex = 80257;

	class ChallengeTierceTeamInfoProviderViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_DDF2C200AE487775* _AvatarQueryService; // 0x10

		::System::Void _ctor(::Class_1_DDF2C200AE487775* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DDF2C200AE487775*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel* Create(::System::Collections::Generic::IEnumerable_1<::Class_1_A78CE7582CF7C10E*>* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_A78CE7582CF7C10E*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
