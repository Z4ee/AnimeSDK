#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Port.h"

namespace FlowCanvas { class FlowHandler; }
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowNode; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define FLOWCANVAS_FLOWOUTPUT_ADD_POINTER_OFFSET UNITYSDK_OFFSET(0x1AF20300)
#define FLOWCANVAS_FLOWOUTPUT_APPEND_OFFSET UNITYSDK_OFFSET(0x1AF20650)
#define FLOWCANVAS_FLOWOUTPUT_BINDTO_OFFSET UNITYSDK_OFFSET(0x1AF205F0)
#define FLOWCANVAS_FLOWOUTPUT_CALLANDNOTIFYSERVER_OFFSET UNITYSDK_OFFSET(0x1AF204D0)
#define FLOWCANVAS_FLOWOUTPUT_CALL_OFFSET UNITYSDK_OFFSET(0x1AF20510)
#define FLOWCANVAS_FLOWOUTPUT_GET_CALLSEQ_OFFSET UNITYSDK_OFFSET(0x1AF204B0)
#define FLOWCANVAS_FLOWOUTPUT_GET_ISNOTSENDFLOWCALLTOSERVER_OFFSET UNITYSDK_OFFSET(0x1AF20490)
#define FLOWCANVAS_FLOWOUTPUT_GET_ISSENDFLOWCALLTOSERVER_OFFSET UNITYSDK_OFFSET(0x1AF20450)
#define FLOWCANVAS_FLOWOUTPUT_GET_ISTARGETCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1AF20470)
#define FLOWCANVAS_FLOWOUTPUT_GET_ISTARGETNODESERVERCARE_OFFSET UNITYSDK_OFFSET(0x1AF20430)
#define FLOWCANVAS_FLOWOUTPUT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1AF20400)
#define FLOWCANVAS_FLOWOUTPUT_RECORDCALLINFO_OFFSET UNITYSDK_OFFSET(0x1AF205E0)
#define FLOWCANVAS_FLOWOUTPUT_REMOVE_POINTER_OFFSET UNITYSDK_OFFSET(0x1AF20380)
#define FLOWCANVAS_FLOWOUTPUT_SET_CALLSEQ_OFFSET UNITYSDK_OFFSET(0x1AF204C0)
#define FLOWCANVAS_FLOWOUTPUT_SET_ISNOTSENDFLOWCALLTOSERVER_OFFSET UNITYSDK_OFFSET(0x1AF204A0)
#define FLOWCANVAS_FLOWOUTPUT_SET_ISSENDFLOWCALLTOSERVER_OFFSET UNITYSDK_OFFSET(0x1AF20460)
#define FLOWCANVAS_FLOWOUTPUT_SET_ISTARGETCHOICENODE_OFFSET UNITYSDK_OFFSET(0x1AF20480)
#define FLOWCANVAS_FLOWOUTPUT_SET_ISTARGETNODESERVERCARE_OFFSET UNITYSDK_OFFSET(0x1AF20440)
#define FLOWCANVAS_FLOWOUTPUT_UNBIND_OFFSET UNITYSDK_OFFSET(0x1AF206D0)
#define FLOWCANVAS_FLOWOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF202F0)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowOutput_TypeDefinitionIndex = 26938;

	class FlowOutput : public ::FlowCanvas::Port
	{
	public:
		static ::System::Action_2<::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*>** StaticGet_OnCall()
		{
			return (::System::Action_2<::FlowCanvas::FlowOutput*, ::FlowCanvas::FlowNode*>**)Il2CppClass::FromTypeDefinitionIndex(FlowOutput_TypeDefinitionIndex)->GetStaticField(0x20D40);
		}
		::FlowCanvas::FlowHandler* pointer; // 0x38
		::System::Boolean _IsNotSendFlowCallToServer_k__BackingField; // 0x40
		::System::Boolean _IsTargetChoiceNode_k__BackingField; // 0x41
		::System::Boolean _IsSendFlowCallToServer_k__BackingField; // 0x42
		::System::Boolean _IsTargetNodeServerCare_k__BackingField; // 0x43
		::System::Int32 _CallSeq_k__BackingField; // 0x44

		::System::Void _ctor(::FlowCanvas::FlowNode* parent, ::System::String* name, ::System::String* ID)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT__CTOR_OFFSET))(this, parent, name, ID);
		}

		::System::Void add_pointer(::FlowCanvas::FlowHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_ADD_POINTER_OFFSET))(this, value);
		}

		::System::Void remove_pointer(::FlowCanvas::FlowHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_REMOVE_POINTER_OFFSET))(this, value);
		}

		::System::Type* get_type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean get_IsTargetNodeServerCare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_ISTARGETNODESERVERCARE_OFFSET))(this);
		}

		::System::Void set_IsTargetNodeServerCare(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_SET_ISTARGETNODESERVERCARE_OFFSET))(this, value);
		}

		::System::Boolean get_IsSendFlowCallToServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_ISSENDFLOWCALLTOSERVER_OFFSET))(this);
		}

		::System::Void set_IsSendFlowCallToServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_SET_ISSENDFLOWCALLTOSERVER_OFFSET))(this, value);
		}

		::System::Boolean get_IsTargetChoiceNode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_ISTARGETCHOICENODE_OFFSET))(this);
		}

		::System::Void set_IsTargetChoiceNode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_SET_ISTARGETCHOICENODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsNotSendFlowCallToServer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_ISNOTSENDFLOWCALLTOSERVER_OFFSET))(this);
		}

		::System::Void set_IsNotSendFlowCallToServer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_SET_ISNOTSENDFLOWCALLTOSERVER_OFFSET))(this, value);
		}

		::System::Int32 get_CallSeq()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_GET_CALLSEQ_OFFSET))(this);
		}

		::System::Void set_CallSeq(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_SET_CALLSEQ_OFFSET))(this, value);
		}

		::System::Void CallAndNotifyServer(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_CALLANDNOTIFYSERVER_OFFSET))(this, f);
		}

		::System::Void Call(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_CALL_OFFSET))(this, f);
		}

		::System::Void RecordCallInfo(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_RECORDCALLINFO_OFFSET))(this, f);
		}

		::System::Void BindTo(::FlowCanvas::FlowInput* target)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowInput*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_BINDTO_OFFSET))(this, target);
		}

		::System::Void Append(::FlowCanvas::FlowHandler* callback)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowHandler*))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_APPEND_OFFSET))(this, callback);
		}

		::System::Void UnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWOUTPUT_UNBIND_OFFSET))(this);
		}
	};
}
