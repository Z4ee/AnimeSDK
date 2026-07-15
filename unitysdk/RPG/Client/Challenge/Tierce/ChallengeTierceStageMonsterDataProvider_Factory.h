#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DE58AEA447C9CD;
class Class_1_AF10B3ABB955124D;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageMonsterDataProvider; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x18767200)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x187671F0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageMonsterDataProvider_Factory_TypeDefinitionIndex = 76611;

	class ChallengeTierceStageMonsterDataProvider_Factory : public ::System::Object
	{
	public:
		::Class_1_AF10B3ABB955124D* _Service; // 0x10

		::System::Void _ctor(::Class_1_AF10B3ABB955124D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_AF10B3ABB955124D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider* Create(::Class_1_52DE58AEA447C9CD* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider*(*)(::PVOID, ::Class_1_52DE58AEA447C9CD*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}
	};
}
