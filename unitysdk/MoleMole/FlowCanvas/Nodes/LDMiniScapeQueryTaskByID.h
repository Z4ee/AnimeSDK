#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

class Class_1_5DA2E7556103D5A3_320;

#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYTASKBYID_INVOKE_OFFSET UNITYSDK_OFFSET(0x18A3C360)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYTASKBYID__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3C480)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMiniScapeQueryTaskByID_TypeDefinitionIndex = 66110;

	class LDMiniScapeQueryTaskByID : public ::FlowCanvas::Nodes::PureFunctionNode_2<::Class_1_5DA2E7556103D5A3_320*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYTASKBYID__CTOR_OFFSET))(this);
		}

		::Class_1_5DA2E7556103D5A3_320* Invoke(::System::Int32 id)
		{
			return ((::Class_1_5DA2E7556103D5A3_320*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMINISCAPEQUERYTASKBYID_INVOKE_OFFSET))(this, id);
		}
	};
}
