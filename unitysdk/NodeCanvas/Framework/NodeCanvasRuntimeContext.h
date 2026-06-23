#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class SignalDefinition_SignalDefinitionProxy; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC5DA80)
#define NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_GET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1BC5D8E0)
#define NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_REINITRUNTIMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1BC5D920)
#define NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D9F0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int NodeCanvasRuntimeContext_TypeDefinitionIndex = 30227;

	class NodeCanvasRuntimeContext : public ::System::Object
	{
	public:
		static ::NodeCanvas::Framework::NodeCanvasRuntimeContext** StaticGet__nodeCanvasRuntimeContext()
		{
			return (::NodeCanvas::Framework::NodeCanvasRuntimeContext**)Il2CppClass::FromTypeDefinitionIndex(NodeCanvasRuntimeContext_TypeDefinitionIndex)->GetStaticField(0x248A0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NodeCanvas::Framework::SignalDefinition_SignalDefinitionProxy*>* InvokeProxyMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT__CTOR_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::NodeCanvasRuntimeContext* get_CurrentContext()
		{
			return ((::NodeCanvas::Framework::NodeCanvasRuntimeContext*(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_GET_CURRENTCONTEXT_OFFSET))();
		}

		static ::System::Void ReInitRuntimeContext()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_REINITRUNTIMECONTEXT_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODECANVASRUNTIMECONTEXT_DISPOSE_OFFSET))();
		}
	};
}
