#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CAMERAS_VTRANSFORMNOISEPARAMS_METHOD_2_9ED920BA288AD875_OFFSET UNITYSDK_OFFSET(0x7475B0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VTransformNoiseParams_TypeDefinitionIndex = 48284;

	struct alignas(4) VTransformNoiseParams
	{
		::MoleMole::Cameras::VNoiseParams X; // 0x10
		::MoleMole::Cameras::VNoiseParams Y; // 0x1C
		::MoleMole::Cameras::VNoiseParams Z; // 0x28

		/*
		::UnityEngine::Vector3 Method_2_9ED920BA288AD875(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VTRANSFORMNOISEPARAMS_METHOD_2_9ED920BA288AD875_OFFSET))(this, a1, a2);
		}
		*/
	};
}
