#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_1.h"

class Class_3_5139B0F7496B8379_5;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS_INVOKE_OFFSET UNITYSDK_OFFSET(0x161DD1A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS__CTOR_OFFSET UNITYSDK_OFFSET(0x161DD2C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMiniScapeQueryWeeklyTasks_TypeDefinitionIndex = 77395;

	class LDMiniScapeQueryWeeklyTasks : public ::FlowCanvas::Nodes::PureFunctionNode_1<::System::Collections::Generic::IReadOnlyList_1<::Class_3_5139B0F7496B8379_5*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_3_5139B0F7496B8379_5*>* Invoke()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_3_5139B0F7496B8379_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYWEEKLYTASKS_INVOKE_OFFSET))(this);
		}
	};
}
