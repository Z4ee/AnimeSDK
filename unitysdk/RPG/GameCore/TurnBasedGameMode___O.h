#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RootMotion::FinalIK { class GroundPhysicsHelper_CapsuleCastDelegate; }
namespace RootMotion::FinalIK { class GroundPhysicsHelper_SphereCastDelegate; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___O_TypeDefinitionIndex = 51136;

	class TurnBasedGameMode___O : public ::System::Object
	{
	public:
		static ::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate** StaticGet__1___BattleCapsuleCast()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_CapsuleCastDelegate**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___O_TypeDefinitionIndex)->GetStaticField(0x68A00);
		}
		static ::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate** StaticGet__0___BattleSphereCast()
		{
			return (::RootMotion::FinalIK::GroundPhysicsHelper_SphereCastDelegate**)Il2CppClass::FromTypeDefinitionIndex(TurnBasedGameMode___O_TypeDefinitionIndex)->GetStaticField(0x68A08);
		}
	};
}
