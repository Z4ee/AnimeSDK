#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataBase.h"

namespace MoleMole::FlowCanvas::Nodes { class BandTrapData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_TRAPCREATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D49F80)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int TrapCreateData_TypeDefinitionIndex = 58043;

	class TrapCreateData : public ::MoleMole::FlowCanvas::Nodes::MonsterCreateDataBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::BandTrapData*>* trapAnchorList; // 0x48
		::System::Int32 randomNum; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_TRAPCREATEDATA__CTOR_OFFSET))(this);
		}
	};
}
