#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CountDownUIOperation.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_MODIFY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B19D370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_MODIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B19D590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCountDownUI_Modify_TypeDefinitionIndex = 85061;

	class LDCountDownUI_Modify : public ::FlowCanvas::Nodes::CallableActionNode_2<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_MODIFY__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::Nodes::CountDownUIOperation OpUICode, ::System::Int32 OpUIValue)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::CountDownUIOperation, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCOUNTDOWNUI_MODIFY_INVOKE_OFFSET))(this, OpUICode, OpUIValue);
		}
	};
}
