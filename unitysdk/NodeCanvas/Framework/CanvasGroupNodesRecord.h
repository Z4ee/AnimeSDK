#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class CanvasGroup; }
namespace NodeCanvas::Framework { class Node; }

#define NODECANVAS_FRAMEWORK_CANVASGROUPNODESRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5287F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int CanvasGroupNodesRecord_TypeDefinitionIndex = 30463;

	class CanvasGroupNodesRecord : public ::System::Object
	{
	public:
		::Il2CppArray<::NodeCanvas::Framework::CanvasGroup*>* srcCanvasGroup; // 0x10
		::Il2CppArray<::NodeCanvas::Framework::Node*>* containedNodes; // 0x18

		::System::Void _ctor(::Il2CppArray<::NodeCanvas::Framework::CanvasGroup*>* inCanvasGroup, ::Il2CppArray<::NodeCanvas::Framework::Node*>* inContainedNodes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::NodeCanvas::Framework::CanvasGroup*>*, ::Il2CppArray<::NodeCanvas::Framework::Node*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CANVASGROUPNODESRECORD__CTOR_OFFSET))(this, inCanvasGroup, inContainedNodes);
		}
	};
}
