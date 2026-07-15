#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_06E38C65842C3B24;
class Class_1_DDF2C200AE487775;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageMonsterDataProvider_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0x18775A50)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEONE_OFFSET UNITYSDK_OFFSET(0x18778D40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18778D30)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageViewModel_Factory_TypeDefinitionIndex = 76613;

	class ChallengeTierceStageViewModel_Factory : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory* _MonsterDataProviderFactory; // 0x10
		::Class_1_DDF2C200AE487775* _AvatarQueryService; // 0x18

		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory* a1, ::Class_1_DDF2C200AE487775* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory*, ::Class_1_DDF2C200AE487775*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* CreateOne(::Class_1_06E38C65842C3B24* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID, ::Class_1_06E38C65842C3B24*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEONE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>* CreateAll(::Class_1_06E38C65842C3B24* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>*(*)(::PVOID, ::Class_1_06E38C65842C3B24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEALL_OFFSET))(this, a1);
		}
	};
}
