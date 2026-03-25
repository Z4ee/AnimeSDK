#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETANIMSPEEDINCHILDREN_OFFSET UNITYSDK_OFFSET(0x97F8370)
#define RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETPARTICLESYSTEMSPEEDINCHILDREN_OFFSET UNITYSDK_OFFSET(0x97F81D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectUtils_TypeDefinitionIndex = 52390;

	class GridFightEffectUtils : public ::System::Object
	{
	public:
		static ::System::Void SetParticleSystemSpeedInChildren(::UnityEngine::Transform* root, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETPARTICLESYSTEMSPEEDINCHILDREN_OFFSET))(root, speed);
		}

		static ::System::Void SetAnimSpeedInChildren(::UnityEngine::Transform* root, ::System::Single speed)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETANIMSPEEDINCHILDREN_OFFSET))(root, speed);
		}
	};
}
