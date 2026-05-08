#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

class Class_1_84C5B95CD7B4A033;
class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10E11CE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10E11E50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONTURNOVER_OFFSET UNITYSDK_OFFSET(0x10E11F00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E11C60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER__CTOR_OFFSET UNITYSDK_OFFSET(0x10E11FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10E12030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10E12040)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedOnTurnOver_TypeDefinitionIndex = 42067;

	class LDTurnBasedOnTurnOver : public ::FlowCanvas::FlowNode
	{
	public:
		::Class_1_84C5B95CD7B4A033* _redirector; // 0xA8
		::FlowCanvas::FlowOutput* _onTurnOver; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnTurnOver(::Class_1_B7E341C5F1A6F199* evt, ::MoleMole::Battle::Entity* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER_ONTURNOVER_OFFSET))(this, evt, _);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
