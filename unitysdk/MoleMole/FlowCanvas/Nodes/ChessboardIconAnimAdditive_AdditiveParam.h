#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE_ADDITIVEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52C580)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimAdditive_AdditiveParam_TypeDefinitionIndex = 68467;

	class ChessboardIconAnimAdditive_AdditiveParam : public ::System::Object
	{
	public:
		::System::String* AnimKey; // 0x10
		::System::Boolean IsBigTv; // 0x18
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMADDITIVE_ADDITIVEPARAM__CTOR_OFFSET))(this);
		}
	};
}
