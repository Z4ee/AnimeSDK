#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class CustomEventProxy_EventNameValidateDelegate; }
namespace System { class String; }

#define FLOWCANVAS_NODES_CUSTOMEVENTPROXY_CHECKEVENTNAMEVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D6DCF50)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomEventProxy_TypeDefinitionIndex = 29189;

	class CustomEventProxy : public ::System::Object
	{
	public:
		static ::FlowCanvas::Nodes::CustomEventProxy_EventNameValidateDelegate** StaticGet_EventNameValidate()
		{
			return (::FlowCanvas::Nodes::CustomEventProxy_EventNameValidateDelegate**)Il2CppClass::FromTypeDefinitionIndex(CustomEventProxy_TypeDefinitionIndex)->GetStaticField(0x24BD0);
		}

		static ::System::Boolean CheckEventNameValidate(::System::String* eventName, ::System::String*& eventComment)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_CUSTOMEVENTPROXY_CHECKEVENTNAMEVALIDATE_OFFSET))(eventName, eventComment);
		}
	};
}
