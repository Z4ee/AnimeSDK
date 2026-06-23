#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }

#define MOLEMOLE_CAMERAS_VCAMERASBASELAYOUT_SETTLELAYOUT_OFFSET UNITYSDK_OFFSET(0x10CDE500)
#define MOLEMOLE_CAMERAS_VCAMERASBASELAYOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x10CDE5A0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int VCamerasBaseLayout_TypeDefinitionIndex = 65225;

	class VCamerasBaseLayout : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASBASELAYOUT__CTOR_OFFSET))(this);
		}

		::System::Void SettleLayout(::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>* vCameras, ::UnityEngine::Vector3 followPos, ::UnityEngine::Vector3 lookatPos, ::System::Single dis2RootLookYOffset, ::System::UInt32 fromEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cinemachine::CinemachineVirtualCamera*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_VCAMERASBASELAYOUT_SETTLELAYOUT_OFFSET))(this, vCameras, followPos, lookatPos, dis2RootLookYOffset, fromEntityId);
		}
	};
}
