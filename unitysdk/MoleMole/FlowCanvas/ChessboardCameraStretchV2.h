#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCHV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x1382C970)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCHV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1382CCD0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraStretchV2_TypeDefinitionIndex = 59946;

	class ChessboardCameraStretchV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::MoleMole::HollowChessboard::HollowCell>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCHV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* cameraStretchKey, ::MoleMole::HollowChessboard::HollowCell target)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCHV2_INVOKE_OFFSET))(this, cameraStretchKey, target);
		}
	};
}
