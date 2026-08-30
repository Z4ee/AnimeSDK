#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_ACHIEVEMENTUTILS_DOESENTITYCONTAINSMODIFIER_OFFSET UNITYSDK_OFFSET(0xC4AC290)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementUtils_TypeDefinitionIndex = 61459;

	class AchievementUtils : public ::System::Object
	{
	public:
		static ::System::Boolean DoesEntityContainsModifier(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTUTILS_DOESENTITYCONTAINSMODIFIER_OFFSET))(a1, a2);
		}
	};
}
