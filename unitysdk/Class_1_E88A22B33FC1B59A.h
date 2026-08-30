#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::GameCore { class MiniEmoEffectOverride; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E88A22B33FC1B59A_METHOD_1_C1FE3125BB1CBFB2_OFFSET UNITYSDK_OFFSET(0x1687AC80)

inline static constexpr unsigned int Class_1_E88A22B33FC1B59A_TypeDefinitionIndex = 55931;

class Class_1_E88A22B33FC1B59A : public ::System::Object
{
public:
	static ::System::Void Method_1_C1FE3125BB1CBFB2(::RPG::GameCore::MiniEmoEffectOverride* a1, ::RPG::Client::MonoEffectPluginMiniEmotion* a2, ::UnityEngine::GameObject* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::MiniEmoEffectOverride*, ::RPG::Client::MonoEffectPluginMiniEmotion*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_E88A22B33FC1B59A_METHOD_1_C1FE3125BB1CBFB2_OFFSET))(a1, a2, a3);
	}
};
