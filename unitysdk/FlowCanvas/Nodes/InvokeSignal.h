#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class ValueInput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace NodeCanvas::Framework { class SignalDefinition; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FLOWCANVAS_NODES_INVOKESIGNAL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DB93430)
#define FLOWCANVAS_NODES_INVOKESIGNAL_GET_SIGNALDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DB93370)
#define FLOWCANVAS_NODES_INVOKESIGNAL_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DB93780)
#define FLOWCANVAS_NODES_INVOKESIGNAL_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1DB936C0)
#define FLOWCANVAS_NODES_INVOKESIGNAL_SET_SIGNALDEFINITION_OFFSET UNITYSDK_OFFSET(0x1DB933D0)
#define FLOWCANVAS_NODES_INVOKESIGNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB93C20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InvokeSignal_TypeDefinitionIndex = 29583;

	class InvokeSignal : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::Transform*>* target; // 0xA8
		::Il2CppArray<::FlowCanvas::ValueInput*>* inputArgs; // 0xB0
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::Framework::SignalDefinition*>* _signalDefinition; // 0xB8
		::System::Boolean global; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::SignalDefinition* get_signalDefinition()
		{
			return ((::NodeCanvas::Framework::SignalDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL_GET_SIGNALDEFINITION_OFFSET))(this);
		}

		::System::Void set_signalDefinition(::NodeCanvas::Framework::SignalDefinition* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::SignalDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL_SET_SIGNALDEFINITION_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL_GET_NAME_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL_SETTARGET_OFFSET))(this, target);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_INVOKESIGNAL_REGISTERPORTS_OFFSET))(this);
		}
	};
}
