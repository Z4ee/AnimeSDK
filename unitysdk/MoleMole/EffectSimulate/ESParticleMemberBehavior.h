#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0x1B5064E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_990C94EC15D6CE86_OFFSET UNITYSDK_OFFSET(0x1B5062F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B506470)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESParticleMemberBehavior_TypeDefinitionIndex = 81853;

	class ESParticleMemberBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::ParticleSystem* m_stPSCom; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_990C94EC15D6CE86(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_990C94EC15D6CE86_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
