#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IGraphAssignable; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_AUTOLINKBYNAME_OFFSET UNITYSDK_OFFSET(0x1C638530)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_CHECKINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C62C790)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYPAUSESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C632EA0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYREADMAPPEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1C62DDB0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYRESUMESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C6330F0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTARTSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C637730)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTOPSUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C632AC0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYUPDATESUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1C637C40)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYWRITEMAPPEDVARIABLES_OFFSET UNITYSDK_OFFSET(0x1C62D0B0)
#define NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_VALIDATESUBGRAPHANDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1C638020)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int IGraphAssignableExtensions_TypeDefinitionIndex = 29147;

	class IGraphAssignableExtensions : public ::System::Object
	{
	public:
		static ::NodeCanvas::Framework::Graph* CheckInstance(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_CHECKINSTANCE_OFFSET))(assignable);
		}

		static ::System::Boolean TryStartSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable, ::UnityEngine::Component* agent, ::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*, ::UnityEngine::Component*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTARTSUBGRAPH_OFFSET))(assignable, agent, callback);
		}

		static ::System::Boolean TryStopSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYSTOPSUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryPauseSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYPAUSESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryResumeSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYRESUMESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Boolean TryUpdateSubGraph(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYUPDATESUBGRAPH_OFFSET))(assignable);
		}

		static ::System::Void TryWriteMappedVariables(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYWRITEMAPPEDVARIABLES_OFFSET))(assignable);
		}

		static ::System::Void TryReadMappedVariables(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_TRYREADMAPPEDVARIABLES_OFFSET))(assignable);
		}

		static ::System::Void ValidateSubGraphAndParameters(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_VALIDATESUBGRAPHANDPARAMETERS_OFFSET))(assignable);
		}

		static ::System::Void AutoLinkByName(::NodeCanvas::Framework::IGraphAssignable* assignable)
		{
			return ((::System::Void(*)(::NodeCanvas::Framework::IGraphAssignable*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_IGRAPHASSIGNABLEEXTENSIONS_AUTOLINKBYNAME_OFFSET))(assignable);
		}
	};
}
