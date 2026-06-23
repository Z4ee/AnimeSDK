#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_10.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERADATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x15117700)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x151178B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPushLevelPerformCameraData_TypeDefinitionIndex = 81699;

	class LDPushLevelPerformCameraData : public ::FlowCanvas::Nodes::CallableActionNode_10<::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERADATA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag, ::System::String* baseConfigKey, ::System::String* overrideConfigKey, ::System::Boolean enableInitAimTarget, ::UnityEngine::Vector3 initAimTargetPos, ::System::Boolean enableInitPitch, ::System::Single initPitch, ::System::Boolean enableInitYaw, ::System::Single initYaw, ::System::Boolean useWorldCoordYaw)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPUSHLEVELPERFORMCAMERADATA_INVOKE_OFFSET))(this, tag, baseConfigKey, overrideConfigKey, enableInitAimTarget, initAimTargetPos, enableInitPitch, initPitch, enableInitYaw, initYaw, useWorldCoordYaw);
		}
	};
}
