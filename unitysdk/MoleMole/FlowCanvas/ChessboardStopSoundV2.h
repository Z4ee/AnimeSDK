#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x14983D70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2__CTOR_OFFSET UNITYSDK_OFFSET(0x14983EC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardStopSoundV2_TypeDefinitionIndex = 61378;

	class ChessboardStopSoundV2 : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Int32, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
