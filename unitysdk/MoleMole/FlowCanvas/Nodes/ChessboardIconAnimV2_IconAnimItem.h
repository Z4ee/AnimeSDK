#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowConstant_RenderPriority.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_ICONANIMITEM_GETRENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A3929D0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_ICONANIMITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A392A60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardIconAnimV2_IconAnimItem_TypeDefinitionIndex = 73880;

	class ChessboardIconAnimV2_IconAnimItem : public ::System::Object
	{
	public:
		::System::String* AnimKey; // 0x10
		::System::String* VideoPath; // 0x18
		::System::Int32 ScreenIndex; // 0x20
		::MoleMole::HollowChessboard::HollowConstant_RenderPriority RenderPriority; // 0x24
		::System::Boolean UseVideo; // 0x28
		::MoleMole::HollowPieceBlendMode BlendMode; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_ICONANIMITEM__CTOR_OFFSET))(this);
		}

		::System::Int32 GetRenderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDICONANIMV2_ICONANIMITEM_GETRENDERPRIORITY_OFFSET))(this);
		}
	};
}
