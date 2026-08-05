#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class CustomFunctionCall; }
namespace ParadoxNotion { class DynamicParameterDefinition; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_ADDPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EB7D720)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GATHERPORTSUPDATEREFS_OFFSET UNITYSDK_OFFSET(0x1EB7D830)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GETRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x1EB7D710)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EB7D220)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EB7D0A0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_PARAMETERTYPES_OFFSET UNITYSDK_OFFSET(0x1EB7D100)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_RETURNS_OFFSET UNITYSDK_OFFSET(0x1EB7D0C0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1EB7D0E0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_INVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x1EB7D600)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7D490)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_GETINVOCATIONID_OFFSET UNITYSDK_OFFSET(0x1EB7D3D0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x1EB7D540)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EB7D3E0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EB7D260)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EB7D280)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_SET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1EB7D0B0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_SET_RETURNS_OFFSET UNITYSDK_OFFSET(0x1EB7D0D0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7DBF0)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__GATHERPORTSUPDATEREFS_B__27_0_OFFSET UNITYSDK_OFFSET(0x1EB7DD30)
#define FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__INVOKE_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB7DD20)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomFunctionEvent_TypeDefinitionIndex = 29841;

	class CustomFunctionEvent : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::ParadoxNotion::DynamicParameterDefinition* _returns; // 0xA8
		::FlowCanvas::FlowOutput* onInvoke; // 0xB0
		::System::String* identifier; // 0xB8
		::Il2CppArray<::System::Object*>* args; // 0xC0
		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* _parameters; // 0xC8
		::System::Object* returnValue; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* get_parameters()
		{
			return ((::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_PARAMETERS_OFFSET))(this);
		}

		::System::Void set_parameters(::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ParadoxNotion::DynamicParameterDefinition*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_SET_PARAMETERS_OFFSET))(this, value);
		}

		::ParadoxNotion::DynamicParameterDefinition* get_returns()
		{
			return ((::ParadoxNotion::DynamicParameterDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_RETURNS_OFFSET))(this);
		}

		::System::Void set_returns(::ParadoxNotion::DynamicParameterDefinition* value)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::DynamicParameterDefinition*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_SET_RETURNS_OFFSET))(this, value);
		}

		::System::Type* get_returnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_RETURNTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::Type*>* get_parameterTypes()
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_PARAMETERTYPES_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GET_NAME_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_REGISTERPORTS_OFFSET))(this);
		}

		::System::String* NodeCanvas_Framework_IInvokable_GetInvocationID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_GETINVOCATIONID_OFFSET))(this);
		}

		::System::Object* NodeCanvas_Framework_IInvokable_Invoke(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKE_OFFSET))(this, args);
		}

		::System::Void NodeCanvas_Framework_IInvokable_InvokeAsync(::System::Action_1<::System::Object*>* callback, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_NODECANVAS_FRAMEWORK_IINVOKABLE_INVOKEASYNC_OFFSET))(this, callback, args);
		}

		::System::Object* Invoke(::FlowCanvas::Flow f, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::PVOID, ::FlowCanvas::Flow, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_INVOKE_OFFSET))(this, f, args);
		}

		::System::Void InvokeAsync(::FlowCanvas::Flow f, ::FlowCanvas::FlowHandler* flowCallback, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow, ::FlowCanvas::FlowHandler*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_INVOKEASYNC_OFFSET))(this, f, flowCallback, args);
		}

		::System::Object* GetReturnValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GETRETURNVALUE_OFFSET))(this);
		}

		::System::Void AddParameter(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_ADDPARAMETER_OFFSET))(this, type);
		}

		::System::Void GatherPortsUpdateRefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT_GATHERPORTSUPDATEREFS_OFFSET))(this);
		}

		::System::Void _Invoke_b__23_0(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__INVOKE_B__23_0_OFFSET))(this, o);
		}

		::System::Boolean _GatherPortsUpdateRefs_b__27_0(::FlowCanvas::Nodes::CustomFunctionCall* n)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlowCanvas::Nodes::CustomFunctionCall*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMFUNCTIONEVENT__GATHERPORTSUPDATEREFS_B__27_0_OFFSET))(this, n);
		}
	};
}
