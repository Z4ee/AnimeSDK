#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class ParticleSystemRenderer; }

#define PARTICLEVATSIZECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8EBA340)
#define PARTICLEVATSIZECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8EBA410)
#define PARTICLEVATSIZECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EBA530)

inline static constexpr unsigned int ParticleVATSizeController_TypeDefinitionIndex = 38222;

class ParticleVATSizeController : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::ParticleSystemRenderer* Field_5_0; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_5_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEVATSIZECONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEVATSIZECONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARTICLEVATSIZECONTROLLER_UPDATE_OFFSET))(this);
	}
};
