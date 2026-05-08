#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_CLASS_1_3336A874CD3123C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11781CE0)

namespace MoleMole::SceneMechanismEffect
{
	inline static constexpr unsigned int SceneMechanismEffectLODProxy_Class_1_3336A874CD3123C3_TypeDefinitionIndex = 63704;

	class SceneMechanismEffectLODProxy_Class_1_3336A874CD3123C3 : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystem* Field_1_0; // 0x10
		::System::Boolean Field_1_2; // 0x18
		::System::Single Field_1_1; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEMECHANISMEFFECT_SCENEMECHANISMEFFECTLODPROXY_CLASS_1_3336A874CD3123C3__CTOR_OFFSET))(this);
		}
	};
}
