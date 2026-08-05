#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class ChessboardIconAnimAdditive_AdditiveParam; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B82F6A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimAdditive___c__DisplayClass1_0_TypeDefinitionIndex = 68466;

	class ChessboardIconAnimAdditive___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::FlowCanvas::Nodes::ChessboardIconAnimAdditive_AdditiveParam* additiveParam; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}
	};
}
