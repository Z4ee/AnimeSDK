#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_5.h"
#include "unitysdk/UnityEngine/Color.h"

#define FLOWCANVAS_NODES_NEWCOLOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D81E870)
#define FLOWCANVAS_NODES_NEWCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D81E8A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewColor_TypeDefinitionIndex = 30551;

	class NewColor : public ::FlowCanvas::Nodes::PureFunctionNode_5<::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWCOLOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color Invoke(::System::Single r, ::System::Single g, ::System::Single b, ::System::Single a)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWCOLOR_INVOKE_OFFSET))(this, r, g, b, a);
		}
	};
}
