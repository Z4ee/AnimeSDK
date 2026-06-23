#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"
#include "unitysdk/MoleMole/DoubleEliteCardInfo.h"

namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITECARDDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D48280)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITECARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D482C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReaDoubleEliteCardData_TypeDefinitionIndex = 60457;

	class LD_ReaDoubleEliteCardData : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::DoubleEliteCardInfo>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITECARDDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::DoubleEliteCardInfo>* Invoke()
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::DoubleEliteCardInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITECARDDATA_INVOKE_OFFSET))(this);
		}
	};
}
