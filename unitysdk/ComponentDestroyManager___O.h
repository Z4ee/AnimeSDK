#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

inline static constexpr unsigned int ComponentDestroyManager___O_TypeDefinitionIndex = 44580;

class ComponentDestroyManager___O : public ::System::Object
{
public:
	static ::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction** StaticGet__0___ProcessPendingDestroy()
	{
		return (::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction**)Il2CppClass::FromTypeDefinitionIndex(ComponentDestroyManager___O_TypeDefinitionIndex)->GetStaticField(0x68920);
	}
};
