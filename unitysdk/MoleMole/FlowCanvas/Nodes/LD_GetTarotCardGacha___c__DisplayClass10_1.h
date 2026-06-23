#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }
namespace MoleMole::FlowCanvas::Nodes { class LD_GetTarotCardGacha___c__DisplayClass10_0; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15126370)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1___ONRECV_B__1_OFFSET UNITYSDK_OFFSET(0x15126380)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTarotCardGacha___c__DisplayClass10_1_TypeDefinitionIndex = 48240;

	class LD_GetTarotCardGacha___c__DisplayClass10_1 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelCardOptionsDialogPopWindowController* ctrl; // 0x10
		::MoleMole::FlowCanvas::Nodes::LD_GetTarotCardGacha___c__DisplayClass10_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1__CTOR_OFFSET))(this);
		}

		::System::Void __OnRecv_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_1___ONRECV_B__1_OFFSET))(this);
		}
	};
}
