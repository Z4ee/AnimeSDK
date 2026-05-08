#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x10B9BDD0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x10B9C020)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPostCustomEvent_TypeDefinitionIndex = 71932;

	class ChessboardPostCustomEvent : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT_INVOKE_OFFSET))(this, triggerName);
		}
	};
}
