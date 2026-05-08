#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEffect_LayeredEffectFadeConfig; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOEFFECT_LAYEREDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B34A30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffect_LayeredEffect_TypeDefinitionIndex = 39613;

	class MonoEffect_LayeredEffect : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* EffectObject; // 0x10
		::MoleMole::MonoEffect_LayeredEffectFadeConfig* FadeConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECT_LAYEREDEFFECT__CTOR_OFFSET))(this);
		}
	};
}
