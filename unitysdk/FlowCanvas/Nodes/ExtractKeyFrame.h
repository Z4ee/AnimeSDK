#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define FLOWCANVAS_NODES_EXTRACTKEYFRAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A294B00)
#define FLOWCANVAS_NODES_EXTRACTKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A294B30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractKeyFrame_TypeDefinitionIndex = 28112;

	class ExtractKeyFrame : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::Keyframe, ::System::Single, ::System::Single, ::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTKEYFRAME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::Keyframe key, ::System::Single& inTangent, ::System::Single& outTangent, ::System::Single& time, ::System::Single& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTKEYFRAME_INVOKE_OFFSET))(this, key, inTangent, outTangent, time, value);
		}
	};
}
