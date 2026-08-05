#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIDataAdapter.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREASOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19240300)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x192403B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDTargetAreaSource_TypeDefinitionIndex = 56112;

	class LDDTargetAreaSource : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* dataSource; // 0x10
		::System::Int32 currentIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREASOURCE__CTOR_OFFSET))(this);
		}

		::System::Boolean MoveNext(::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter& areaUIDataAdapter)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDTARGETAREASOURCE_MOVENEXT_OFFSET))(this, areaUIDataAdapter);
		}
	};
}
