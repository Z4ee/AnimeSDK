#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_RANDOM_GET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EB7EAF0)
#define FLOWCANVAS_NODES_RANDOM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7EB10)
#define FLOWCANVAS_NODES_RANDOM_SET_PORTCOUNT_OFFSET UNITYSDK_OFFSET(0x1EB7EB00)
#define FLOWCANVAS_NODES_RANDOM_STARTCOROUTINEWRAP_OFFSET UNITYSDK_OFFSET(0x1EB7ECF0)
#define FLOWCANVAS_NODES_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7ED30)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 31400;

	class Random : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::System::Func_5<::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32, ::System::Boolean>** StaticGet_OnCall()
		{
			return (::System::Func_5<::FlowCanvas::Nodes::Random*, ::FlowCanvas::Flow, ::System::Collections::Generic::List_1<::FlowCanvas::FlowOutput*>*, ::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Random_TypeDefinitionIndex)->GetStaticField(0x259A0);
		}
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::System::Int32 _portCount; // 0xB0
		::System::Int32 current; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PortCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM_GET_PORTCOUNT_OFFSET))(this);
		}

		::System::Void set_PortCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM_SET_PORTCOUNT_OFFSET))(this, value);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartCoroutineWrap(::System::Collections::IEnumerator* enumerator)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_RANDOM_STARTCOROUTINEWRAP_OFFSET))(this, enumerator);
		}
	};
}
