#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_BIPEDLIMBORIENTATIONS_LIMBORIENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A7620)

namespace RootMotion
{
	inline static constexpr unsigned int BipedLimbOrientations_LimbOrientation_TypeDefinitionIndex = 38957;

	class BipedLimbOrientations_LimbOrientation : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 upperBoneForwardAxis; // 0x10
		::UnityEngine::Vector3 lowerBoneForwardAxis; // 0x1C
		::UnityEngine::Vector3 lastBoneLeftAxis; // 0x28

		::System::Void _ctor(::UnityEngine::Vector3 upperBoneForwardAxis, ::UnityEngine::Vector3 lowerBoneForwardAxis, ::UnityEngine::Vector3 lastBoneLeftAxis)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_BIPEDLIMBORIENTATIONS_LIMBORIENTATION__CTOR_OFFSET))(this, upperBoneForwardAxis, lowerBoneForwardAxis, lastBoneLeftAxis);
		}
	};
}
