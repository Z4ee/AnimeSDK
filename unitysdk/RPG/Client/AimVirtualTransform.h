#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIMVIRTUALTRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x90889A0)
#define RPG_CLIENT_AIMVIRTUALTRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9088A60)
#define RPG_CLIENT_AIMVIRTUALTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x9088B80)

namespace RPG::Client
{
	inline static constexpr unsigned int AimVirtualTransform_TypeDefinitionIndex = 55920;

	class AimVirtualTransform : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::Transform* OriginTransform; // 0x18
		::UnityEngine::Vector3 LocalPosition; // 0x20
		::UnityEngine::Quaternion LocalRotation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMVIRTUALTRANSFORM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMVIRTUALTRANSFORM_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIMVIRTUALTRANSFORM_GET_ROTATION_OFFSET))(this);
		}
	};
}
