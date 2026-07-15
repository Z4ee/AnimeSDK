#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_26F63603FB4C7E16;
class Class_1_56190D054EB32434;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x1AC68DE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC68DD0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceEntranceViewModel_Factory_TypeDefinitionIndex = 76623;

	class ChallengeTierceEntranceViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_26F63603FB4C7E16* _SwitchService; // 0x10
		::Class_1_56190D054EB32434* _Repository; // 0x18

		::System::Void _ctor(::Class_1_56190D054EB32434* a1, ::Class_1_26F63603FB4C7E16* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56190D054EB32434*, ::Class_1_26F63603FB4C7E16*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
