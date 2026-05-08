#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B383C0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginScreenEffect_TypeDefinitionIndex = 56483;

	class MonoEffectPluginScreenEffect : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::System::String* ScreenEffectKey; // 0x18
		::UnityEngine::Transform* FollowTrans; // 0x20
		::System::Single TriggerDelay; // 0x28
		::System::Boolean AlwaysFollow; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINSCREENEFFECT__CTOR_OFFSET))(this);
		}
	};
}
