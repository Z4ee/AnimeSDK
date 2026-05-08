#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define PIPELINECAMERA_DATA_LOOKATINFINAL_GENERATEFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1BBD3DB0)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInFinal_TypeDefinitionIndex = 36172;

	class LookAtInFinal : public ::System::Object
	{
	public:
		static ::System::Boolean GenerateFromToRotation(::UnityEngine::Vector3& fromDirection, ::UnityEngine::Vector3& toDirection, ::UnityEngine::Vector3 cameraLocation, ::UnityEngine::Vector3 lookAtLocation, ::UnityEngine::Vector2 lookAtScreenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio, ::System::String*& failureReason)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::String*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINFINAL_GENERATEFROMTOROTATION_OFFSET))(fromDirection, toDirection, cameraLocation, lookAtLocation, lookAtScreenOffset, fieldOfView, aspectRatio, failureReason);
		}
	};
}
