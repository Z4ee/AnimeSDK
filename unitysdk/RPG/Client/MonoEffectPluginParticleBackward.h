#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_B5B8C0745497F797;

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0E53E0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC0E55E0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC0E5530)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E5640)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleBackward_TypeDefinitionIndex = 65532;

	class MonoEffectPluginParticleBackward : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxFrameCount; // 0x18
		::Class_2_B5B8C0745497F797* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET))(this);
		}
	};
}
