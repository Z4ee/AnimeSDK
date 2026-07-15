#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

namespace RPG
{
	inline static constexpr unsigned int UnityTimeTool___O_TypeDefinitionIndex = 33748;

	class UnityTimeTool___O : public ::System::Object
	{
	public:
		static ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction** StaticGet__0___CheckTime()
		{
			return (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction**)Il2CppClass::FromTypeDefinitionIndex(UnityTimeTool___O_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
	};
}
