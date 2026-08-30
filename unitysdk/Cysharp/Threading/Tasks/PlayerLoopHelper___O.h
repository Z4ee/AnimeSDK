#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper___O_TypeDefinitionIndex = 42623;

	class PlayerLoopHelper___O : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction** StaticGet__0___Run()
		{
			return (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper___O_TypeDefinitionIndex)->GetStaticField(0x56440);
		}
	};
}
