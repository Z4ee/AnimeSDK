#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ROTATIONX_GETCAMERAROTATIONTOTARGET_OFFSET UNITYSDK_OFFSET(0x1D59D920)
#define FOUNDATION_ROTATIONX_LOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1D59CAE0)
#define FOUNDATION_ROTATIONX_LOOKAT_2_OFFSET UNITYSDK_OFFSET(0x1D59CB50)
#define FOUNDATION_ROTATIONX_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1D59CA40)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_X_1_OFFSET UNITYSDK_OFFSET(0x1D59C710)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_X_OFFSET UNITYSDK_OFFSET(0x1D59C650)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Y_1_OFFSET UNITYSDK_OFFSET(0x1D59C860)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Y_OFFSET UNITYSDK_OFFSET(0x1D59C7A0)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Z_1_OFFSET UNITYSDK_OFFSET(0x1D59C9B0)
#define FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Z_OFFSET UNITYSDK_OFFSET(0x1D59C8F0)
#define FOUNDATION_ROTATIONX_ROTATE_DEGREESPERSECOND_1_OFFSET UNITYSDK_OFFSET(0x1D59C4A0)
#define FOUNDATION_ROTATIONX_ROTATE_DEGREESPERSECOND_OFFSET UNITYSDK_OFFSET(0x1D59C400)
#define FOUNDATION_ROTATIONX_SLERPWITHREFERENCEUP_OFFSET UNITYSDK_OFFSET(0x1D59CC00)

namespace Foundation
{
	inline static constexpr unsigned int RotationX_TypeDefinitionIndex = 8024;

	class RotationX : public ::System::Object
	{
	public:
		static ::System::Void Rotate_DegreesPerSecond(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 direction, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATE_DEGREESPERSECOND_OFFSET))(go, direction, timeInSeconds);
		}

		static ::System::Void Rotate_DegreesPerSecond_1(::UnityEngine::Transform* goTrans, ::UnityEngine::Vector3 direction, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATE_DEGREESPERSECOND_1_OFFSET))(goTrans, direction, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_X(::UnityEngine::GameObject* go, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_X_OFFSET))(go, degrees, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_X_1(::UnityEngine::Transform* goTrans, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_X_1_OFFSET))(goTrans, degrees, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_Y(::UnityEngine::GameObject* go, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Y_OFFSET))(go, degrees, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_Y_1(::UnityEngine::Transform* goTrans, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Y_1_OFFSET))(goTrans, degrees, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_Z(::UnityEngine::GameObject* go, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Z_OFFSET))(go, degrees, timeInSeconds);
		}

		static ::System::Void RotateAroundAxis_Z_1(::UnityEngine::Transform* goTrans, ::System::Single degrees, ::System::Single timeInSeconds)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_ROTATEAROUNDAXIS_Z_1_OFFSET))(goTrans, degrees, timeInSeconds);
		}

		static ::System::Void LookAt(::UnityEngine::GameObject* go, ::UnityEngine::GameObject* targetGo)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_LOOKAT_OFFSET))(go, targetGo);
		}

		static ::System::Void LookAt_1(::UnityEngine::GameObject* go, ::UnityEngine::Transform* targetTrans)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_LOOKAT_1_OFFSET))(go, targetTrans);
		}

		static ::System::Void LookAt_2(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 targetVector)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_LOOKAT_2_OFFSET))(go, targetVector);
		}

		static ::UnityEngine::Quaternion SlerpWithReferenceUp(::UnityEngine::Quaternion qA, ::UnityEngine::Quaternion qB, ::System::Single t, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_SLERPWITHREFERENCEUP_OFFSET))(qA, qB, t, up);
		}

		static ::UnityEngine::Vector2 GetCameraRotationToTarget(::UnityEngine::Quaternion orient, ::UnityEngine::Vector3 lookAtDir, ::UnityEngine::Vector3 worldUp)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_ROTATIONX_GETCAMERAROTATIONTOTARGET_OFFSET))(orient, lookAtDir, worldUp);
		}
	};
}
