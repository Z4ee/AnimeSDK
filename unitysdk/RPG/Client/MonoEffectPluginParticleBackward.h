#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6A3353FBBA99407C;

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CD5820)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9CD5A20)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CD5970)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x9CD5A80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleBackward_TypeDefinitionIndex = 57352;

	class MonoEffectPluginParticleBackward : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxFrameCount; // 0x18
		::Class_2_6A3353FBBA99407C* Field_5_1; // 0x20

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
