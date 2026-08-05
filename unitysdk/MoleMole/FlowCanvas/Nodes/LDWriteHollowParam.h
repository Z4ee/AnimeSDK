#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1369D5E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1369D7B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWriteHollowParam_TypeDefinitionIndex = 52084;

	class LDWriteHollowParam : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Boolean, ::System::String*, ::System::Object*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* paramName, ::System::Object* paramValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDWRITEHOLLOWPARAM_INVOKE_OFFSET))(this, paramName, paramValue);
		}
	};
}
