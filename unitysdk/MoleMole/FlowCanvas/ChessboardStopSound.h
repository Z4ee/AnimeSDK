#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x19117540)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x19117680)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardStopSound_TypeDefinitionIndex = 52507;

	class ChessboardStopSound : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND_INVOKE_OFFSET))(this, index);
		}
	};
}
