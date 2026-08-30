#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IContext; }
namespace Entitas::VisualDebugging::Unity { class ContextObserverBehaviour; }

#define ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVEREXTENSION_FINDCONTEXTOBSERVER_OFFSET UNITYSDK_OFFSET(0x1EED01F0)

namespace Entitas::VisualDebugging::Unity
{
	inline static constexpr unsigned int ContextObserverExtension_TypeDefinitionIndex = 10000;

	class ContextObserverExtension : public ::System::Object
	{
	public:
		static ::Entitas::VisualDebugging::Unity::ContextObserverBehaviour* FindContextObserver(::Entitas::IContext* a1)
		{
			return ((::Entitas::VisualDebugging::Unity::ContextObserverBehaviour*(*)(::Entitas::IContext*))((::PBYTE)hIl2Cpp + ENTITAS_VISUALDEBUGGING_UNITY_CONTEXTOBSERVEREXTENSION_FINDCONTEXTOBSERVER_OFFSET))(a1);
		}
	};
}
