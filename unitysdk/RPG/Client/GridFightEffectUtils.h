#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETANIMSPEEDINCHILDREN_OFFSET UNITYSDK_OFFSET(0xBB0F1D0)
#define RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETPARTICLESYSTEMSPEEDINCHILDREN_OFFSET UNITYSDK_OFFSET(0xBB0F040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectUtils_TypeDefinitionIndex = 60281;

	class GridFightEffectUtils : public ::System::Object
	{
	public:
		static ::System::Void SetParticleSystemSpeedInChildren(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETPARTICLESYSTEMSPEEDINCHILDREN_OFFSET))(a1, a2);
		}

		static ::System::Void SetAnimSpeedInChildren(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTUTILS_SETANIMSPEEDINCHILDREN_OFFSET))(a1, a2);
		}
	};
}
