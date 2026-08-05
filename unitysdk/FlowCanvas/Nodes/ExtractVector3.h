#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_EXTRACTVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E8B71B0)
#define FLOWCANVAS_NODES_EXTRACTVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B71E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractVector3_TypeDefinitionIndex = 30497;

	class ExtractVector3 : public ::FlowCanvas::Nodes::ExtractorNode_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR3__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Vector3 vector, ::System::Single& x, ::System::Single& y, ::System::Single& z)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR3_INVOKE_OFFSET))(this, vector, x, y, z);
		}
	};
}
