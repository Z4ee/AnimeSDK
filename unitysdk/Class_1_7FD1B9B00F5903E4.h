#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7FD1B9B00F5903E4_METHOD_1_83F75AB1CF80A22E_OFFSET UNITYSDK_OFFSET(0x129FF180)

inline static constexpr unsigned int Class_1_7FD1B9B00F5903E4_TypeDefinitionIndex = 51392;

class Class_1_7FD1B9B00F5903E4 : public ::System::Object
{
public:
	static ::System::Void Method_1_83F75AB1CF80A22E(::RPG::GameCore::MiniEmoEffectOverride* a1, ::RPG::Client::MonoEffectPluginMiniEmotion* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::MiniEmoEffectOverride*, ::RPG::Client::MonoEffectPluginMiniEmotion*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7FD1B9B00F5903E4_METHOD_1_83F75AB1CF80A22E_OFFSET))(a1, a2, a3);
	}
};
