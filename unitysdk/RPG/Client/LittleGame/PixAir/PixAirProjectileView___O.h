#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T> class Action_1; }

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirProjectileView___O_TypeDefinitionIndex = 76856;

	class PixAirProjectileView___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::MonoEffect*>** StaticGet__0____OnTrackedHitEffectRemoved()
		{
			return (::System::Action_1<::RPG::Client::MonoEffect*>**)Il2CppClass::FromTypeDefinitionIndex(PixAirProjectileView___O_TypeDefinitionIndex)->GetStaticField(0x644B0);
		}
	};
}
