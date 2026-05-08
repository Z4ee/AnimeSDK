#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode_5.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace UnityEngine { class AnimationCurve; }

#define FLOWCANVAS_NODES_EXTRACTANIMATIONCURVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19846460)
#define FLOWCANVAS_NODES_EXTRACTANIMATIONCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x198464D0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractAnimationCurve_TypeDefinitionIndex = 28203;

	class ExtractAnimationCurve : public ::FlowCanvas::Nodes::ExtractorNode_5<::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Keyframe>*, ::System::Single, ::UnityEngine::WrapMode, ::UnityEngine::WrapMode>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTANIMATIONCURVE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::UnityEngine::AnimationCurve* curve, ::Il2CppArray<::UnityEngine::Keyframe>*& keys, ::System::Single& length, ::UnityEngine::WrapMode& postWrapMode, ::UnityEngine::WrapMode& preWrapMode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Keyframe>*&, ::System::Single&, ::UnityEngine::WrapMode&, ::UnityEngine::WrapMode&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_EXTRACTANIMATIONCURVE_INVOKE_OFFSET))(this, curve, keys, length, postWrapMode, preWrapMode);
		}
	};
}
