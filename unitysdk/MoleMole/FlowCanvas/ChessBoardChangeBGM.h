#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM_INVOKE_OFFSET UNITYSDK_OFFSET(0x18201040)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM__CTOR_OFFSET UNITYSDK_OFFSET(0x18201270)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardChangeBGM_TypeDefinitionIndex = 50655;

	class ChessBoardChangeBGM : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBGM_INVOKE_OFFSET))(this, eventName);
		}
	};
}
