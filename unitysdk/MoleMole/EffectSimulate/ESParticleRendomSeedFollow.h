#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/IEffectSimulate.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_11BAD3ECA1725598_OFFSET UNITYSDK_OFFSET(0x115FAF20)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_515D3C400111AC71_OFFSET UNITYSDK_OFFSET(0x115FB2D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_59D646B5498A8FF8_OFFSET UNITYSDK_OFFSET(0x115FB550)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_C433AF37CE9D6E5B_OFFSET UNITYSDK_OFFSET(0x115FB800)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x115FB4B0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESParticleRendomSeedFollow_TypeDefinitionIndex = 53600;

	class ESParticleRendomSeedFollow : public ::MoleMole::EffectSimulate::IEffectSimulate
	{
	public:
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* controlPSs; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_11BAD3ECA1725598(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_11BAD3ECA1725598_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Method_2_59D646B5498A8FF8()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_59D646B5498A8FF8_OFFSET))(this);
		}

		::System::Void Method_2_C433AF37CE9D6E5B(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_C433AF37CE9D6E5B_OFFSET))(this, a1);
		}

		::System::Void Method_2_515D3C400111AC71(::UnityEngine::ParticleSystem* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLERENDOMSEEDFOLLOW_METHOD_2_515D3C400111AC71_OFFSET))(this, a1, a2, a3);
		}
	};
}
