#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define FLOWCANVAS_NODES_EXTRACTVECTOR4_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B0EB630)
#define FLOWCANVAS_NODES_EXTRACTVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0EB660)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractVector4_TypeDefinitionIndex = 27486;

	class ExtractVector4 : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR4__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Vector4 vector, ::System::Single& x, ::System::Single& y, ::System::Single& z, ::System::Single& w)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTVECTOR4_INVOKE_OFFSET))(this, vector, x, y, z, w);
		}
	};
}
