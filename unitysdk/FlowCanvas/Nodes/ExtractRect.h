#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_6.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FLOWCANVAS_NODES_EXTRACTRECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E536510)
#define FLOWCANVAS_NODES_EXTRACTRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E536590)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractRect_TypeDefinitionIndex = 30288;

	class ExtractRect : public ::FlowCanvas::Nodes::ExtractorNode_6<::UnityEngine::Rect, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Rect rect, ::UnityEngine::Vector2& center, ::System::Single& xMin, ::System::Single& xMax, ::System::Single& yMin, ::System::Single& yMax)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTRECT_INVOKE_OFFSET))(this, rect, center, xMin, xMax, yMin, yMax);
		}
	};
}
