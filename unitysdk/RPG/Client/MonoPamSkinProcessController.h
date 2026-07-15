#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMPOSITION_OFFSET UNITYSDK_OFFSET(0x18C68440)
#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMROTATION_OFFSET UNITYSDK_OFFSET(0x18C68520)
#define RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C68580)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPamSkinProcessController_TypeDefinitionIndex = 69539;

	class MonoPamSkinProcessController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::UInt32 _PROP_GROUP_ID = 0x27; // 0x0
		// static const ::System::UInt32 _PROP_INSTANCE_ID = 0x493E1; // 0x0
		::UnityEngine::Vector3 _PostionOffset; // 0x18
		::UnityEngine::Quaternion _RotationOffset; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_PamPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_PamRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMSKINPROCESSCONTROLLER_GET_PAMROTATION_OFFSET))(this);
		}
	};
}
