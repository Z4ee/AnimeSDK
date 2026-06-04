#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ParticleSystemRenderer; }

#define RPG_CLIENT_LAYERORDERADJUSTPARTICLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xBD6C1C0)

namespace RPG::Client
{
	inline static constexpr unsigned int LayerOrderAdjustParticleItem_TypeDefinitionIndex = 68236;

	class LayerOrderAdjustParticleItem : public ::System::Object
	{
	public:
		::UnityEngine::ParticleSystemRenderer* ParticleSysRenderer; // 0x10
		::System::Int32 Offset; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LAYERORDERADJUSTPARTICLEITEM__CTOR_OFFSET))(this);
		}
	};
}
