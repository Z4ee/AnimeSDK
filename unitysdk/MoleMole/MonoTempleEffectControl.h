#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET UNITYSDK_OFFSET(0x191AE940)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_METHOD_5_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0x191AE690)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_METHOD_5_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x191AF170)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x191AE5D0)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET UNITYSDK_OFFSET(0x191AE900)
#define MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x191AF120)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTempleEffectControl_TypeDefinitionIndex = 69596;

	class MonoTempleEffectControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MeshFilter* Mesh; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Particles; // 0x20
		::UnityEngine::MeshFilter* Field_5_7; // 0x28
		::UnityEngine::MeshRenderer* Field_5_6; // 0x30
		::System::Boolean Field_5_5; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_START_OFFSET))(this);
		}

		::System::Void InitTempleParticle(::MoleMole::Battle::Entity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_INITTEMPLEPARTICLE_OFFSET))(this, a1);
		}

		::System::Void Method_5_025E4B1A2211CF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_METHOD_5_025E4B1A2211CF52_OFFSET))(this);
		}

		::System::Void Method_5_652F3820D8B242FF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTEMPLEEFFECTCONTROL_METHOD_5_652F3820D8B242FF_OFFSET))(this);
		}
	};
}
