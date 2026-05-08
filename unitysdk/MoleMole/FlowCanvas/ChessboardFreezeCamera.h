#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E3F5C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3F7C0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFreezeCamera_TypeDefinitionIndex = 44391;

	class ChessboardFreezeCamera : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean freeze)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET))(this, freeze);
		}
	};
}
