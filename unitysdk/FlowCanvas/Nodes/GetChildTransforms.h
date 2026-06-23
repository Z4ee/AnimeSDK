#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_GETCHILDTRANSFORMS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D531EC0)
#define FLOWCANVAS_NODES_GETCHILDTRANSFORMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D531F00)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetChildTransforms_TypeDefinitionIndex = 30636;

	class GetChildTransforms : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*, ::UnityEngine::Transform*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETCHILDTRANSFORMS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>* Invoke(::UnityEngine::Transform* parent)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform*>*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_GETCHILDTRANSFORMS_INVOKE_OFFSET))(this, parent);
		}
	};
}
