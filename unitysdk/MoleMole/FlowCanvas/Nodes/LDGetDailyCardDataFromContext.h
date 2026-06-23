#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_1.h"

namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1911BD90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1911C090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetDailyCardDataFromContext_TypeDefinitionIndex = 85271;

	class LDGetDailyCardDataFromContext : public ::FlowCanvas::Nodes::CallableFunctionNode_1<::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT__CTOR_OFFSET))(this);
		}

		::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>* Invoke()
		{
			return ((::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETDAILYCARDDATAFROMCONTEXT_INVOKE_OFFSET))(this);
		}
	};
}
