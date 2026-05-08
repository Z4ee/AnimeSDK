#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_5.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERFIXEDCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x18208530)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERFIXEDCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18208750)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterFixedCamera_TypeDefinitionIndex = 47854;

	class LDEnterFixedCamera : public ::FlowCanvas::Nodes::CallableActionNode_5<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERFIXEDCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Vector3 location, ::UnityEngine::Vector3 rotation, ::System::Single fov, ::MoleMole::Cameras::CameraTrackBlending* blendIn, ::MoleMole::Cameras::CameraTrackBlending* blendOut)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Cameras::CameraTrackBlending*, ::MoleMole::Cameras::CameraTrackBlending*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERFIXEDCAMERA_INVOKE_OFFSET))(this, location, rotation, fov, blendIn, blendOut);
		}
	};
}
