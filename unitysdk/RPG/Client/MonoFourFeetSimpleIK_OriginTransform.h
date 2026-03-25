#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x9D01E00)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9D01CA0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x9D01EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_OriginTransform_TypeDefinitionIndex = 56012;

	class MonoFourFeetSimpleIK_OriginTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* transform; // 0x10
		::System::Int32 spineNum; // 0x18
		::System::Single defaultWeight; // 0x1C
		::UnityEngine::AnimationCurve* weightCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_ORIGINTRANSFORM_GET_ROTATION_OFFSET))(this);
		}
	};
}
