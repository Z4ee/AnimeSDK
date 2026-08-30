#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animator_OnAnimatorDispatchMovementJobFinishDelegate; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager___O_TypeDefinitionIndex = 57264;

	class AdventureMovementManager___O : public ::System::Object
	{
	public:
		static ::UnityEngine::Animator_OnAnimatorDispatchMovementJobFinishDelegate** StaticGet__0___DispatchMovementJobScheduler()
		{
			return (::UnityEngine::Animator_OnAnimatorDispatchMovementJobFinishDelegate**)Il2CppClass::FromTypeDefinitionIndex(AdventureMovementManager___O_TypeDefinitionIndex)->GetStaticField(0x662A0);
		}
	};
}
