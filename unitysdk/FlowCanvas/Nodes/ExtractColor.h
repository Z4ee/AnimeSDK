#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/Color.h"

#define FLOWCANVAS_NODES_EXTRACTCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4575B0)
#define FLOWCANVAS_NODES_EXTRACTCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4575E0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractColor_TypeDefinitionIndex = 27810;

	class ExtractColor : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLOR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Color color, ::System::Single& r, ::System::Single& g, ::System::Single& b, ::System::Single& a)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTCOLOR_INVOKE_OFFSET))(this, color, r, g, b, a);
		}
	};
}
