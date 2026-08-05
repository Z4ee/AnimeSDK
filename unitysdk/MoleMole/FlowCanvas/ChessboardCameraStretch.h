#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCameraStretch_ParaInfo.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B596EF0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B597270)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraStretch_TypeDefinitionIndex = 51258;

	class ChessboardCameraStretch : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH_INVOKE_OFFSET))(this, info);
		}
	};
}
