#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageViewModel___O_TypeDefinitionIndex = 74231;

	class ChallengeTierceStageViewModel___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType, ::RPG::GameCore::AttackDamageType>** StaticGet__0___Convert()
		{
			return (::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType, ::RPG::GameCore::AttackDamageType>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageViewModel___O_TypeDefinitionIndex)->GetStaticField(0x5AEE0);
		}
	};
}
