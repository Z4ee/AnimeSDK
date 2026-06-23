#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::FlowCanvas::Nodes { class LDTurnBasedOnTurnOver; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1710F890)
#define MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__ONTURNOVER_B__0_OFFSET UNITYSDK_OFFSET(0x1710F8A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDTurnBasedOnTurnOver___c__DisplayClass5_0_TypeDefinitionIndex = 53838;

	class LDTurnBasedOnTurnOver___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LDTurnBasedOnTurnOver* __4__this; // 0x10
		::Class_1_B7E341C5F1A6F199* evt; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTurnOver_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDTURNBASEDONTURNOVER___C__DISPLAYCLASS5_0__ONTURNOVER_B__0_OFFSET))(this);
		}
	};
}
