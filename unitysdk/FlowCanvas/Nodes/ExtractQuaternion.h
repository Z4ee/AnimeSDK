#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_6.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_EXTRACTQUATERNION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8452C0)
#define FLOWCANVAS_NODES_EXTRACTQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8453D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractQuaternion_TypeDefinitionIndex = 27501;

	class ExtractQuaternion : public ::FlowCanvas::Nodes::ExtractorNode_6<::UnityEngine::Quaternion, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTQUATERNION__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Quaternion quaternion, ::System::Single& x, ::System::Single& y, ::System::Single& z, ::System::Single& w, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTQUATERNION_INVOKE_OFFSET))(this, quaternion, x, y, z, w, eulerAngles);
		}
	};
}
