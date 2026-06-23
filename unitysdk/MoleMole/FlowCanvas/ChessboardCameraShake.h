#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15109680)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x151098D0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraShake_TypeDefinitionIndex = 66304;

	class ChessboardCameraShake : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* cameraShakeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE_INVOKE_OFFSET))(this, cameraShakeKey);
		}
	};
}
