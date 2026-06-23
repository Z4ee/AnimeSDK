#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_AXISTOOLS_GETAXISTODIRECTION_OFFSET UNITYSDK_OFFSET(0x1E445510)
#define ROOTMOTION_AXISTOOLS_GETAXISTOPOINT_OFFSET UNITYSDK_OFFSET(0x1E445310)
#define ROOTMOTION_AXISTOOLS_GETAXISVECTORTODIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1E4456A0)
#define ROOTMOTION_AXISTOOLS_GETAXISVECTORTODIRECTION_OFFSET UNITYSDK_OFFSET(0x1E445630)
#define ROOTMOTION_AXISTOOLS_GETAXISVECTORTOPOINT_OFFSET UNITYSDK_OFFSET(0x1E445460)
#define ROOTMOTION_AXISTOOLS_TOAXIS_OFFSET UNITYSDK_OFFSET(0x1E4452C0)
#define ROOTMOTION_AXISTOOLS_TOVECTOR3_OFFSET UNITYSDK_OFFSET(0x1E445260)
#define ROOTMOTION_AXISTOOLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E445A00)

namespace RootMotion
{
	inline static constexpr unsigned int AxisTools_TypeDefinitionIndex = 38168;

	class AxisTools : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 ToVector3(::RootMotion::Axis axis)
		{
			return ((::UnityEngine::Vector3(*)(::RootMotion::Axis))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_TOVECTOR3_OFFSET))(axis);
		}

		static ::RootMotion::Axis ToAxis(::UnityEngine::Vector3 v)
		{
			return ((::RootMotion::Axis(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_TOAXIS_OFFSET))(v);
		}

		static ::RootMotion::Axis GetAxisToPoint(::UnityEngine::Transform* t, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::RootMotion::Axis(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_GETAXISTOPOINT_OFFSET))(t, worldPosition);
		}

		static ::RootMotion::Axis GetAxisToDirection(::UnityEngine::Transform* t, ::UnityEngine::Vector3 direction)
		{
			return ((::RootMotion::Axis(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_GETAXISTODIRECTION_OFFSET))(t, direction);
		}

		static ::UnityEngine::Vector3 GetAxisVectorToPoint(::UnityEngine::Transform* t, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_GETAXISVECTORTOPOINT_OFFSET))(t, worldPosition);
		}

		static ::UnityEngine::Vector3 GetAxisVectorToDirection(::UnityEngine::Transform* t, ::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_GETAXISVECTORTODIRECTION_OFFSET))(t, direction);
		}

		static ::UnityEngine::Vector3 GetAxisVectorToDirection_1(::UnityEngine::Quaternion r, ::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_AXISTOOLS_GETAXISVECTORTODIRECTION_1_OFFSET))(r, direction);
		}
	};
}
