#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelCardOptionsDialogContext; }
namespace MoleMole::FlowCanvas::Nodes { class LD_GetTarotCardGacha; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B16C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_0___ONRECV_B__0_OFFSET UNITYSDK_OFFSET(0x1B1B16D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetTarotCardGacha___c__DisplayClass10_0_TypeDefinitionIndex = 65239;

	class LD_GetTarotCardGacha___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::LD_GetTarotCardGacha* __4__this; // 0x10
		::MoleMole::UIInLevelCardOptionsDialogContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnRecv_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETTAROTCARDGACHA___C__DISPLAYCLASS10_0___ONRECV_B__0_OFFSET))(this);
		}
	};
}
