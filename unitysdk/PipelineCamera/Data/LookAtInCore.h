#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define PIPELINECAMERA_DATA_LOOKATINCORE_GENERATEFROMTOROTATION_OFFSET UNITYSDK_OFFSET(0x1DCCCB00)

namespace PipelineCamera::Data
{
	inline static constexpr unsigned int LookAtInCore_TypeDefinitionIndex = 38435;

	class LookAtInCore : public ::System::Object
	{
	public:
		static ::System::Boolean GenerateFromToRotation(::UnityEngine::Vector3& fromDirection, ::UnityEngine::Vector3& toDirection, ::UnityEngine::Vector3 mainLocation, ::UnityEngine::Vector2 mainScreenOffset, ::System::Single mainRadius, ::UnityEngine::Vector3 lookAtLocation, ::UnityEngine::Vector2 lookAtScreenOffset, ::System::Single fieldOfView, ::System::Single aspectRatio, ::System::String*& failureReason)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::String*&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATA_LOOKATINCORE_GENERATEFROMTOROTATION_OFFSET))(fromDirection, toDirection, mainLocation, mainScreenOffset, mainRadius, lookAtLocation, lookAtScreenOffset, fieldOfView, aspectRatio, failureReason);
		}
	};
}
