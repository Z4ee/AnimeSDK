#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_3.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x16E3FE20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3FF70)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlaySound_TypeDefinitionIndex = 81913;

	class ChessboardPlaySound : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_3<::System::Int32, ::System::Int32, ::System::Boolean>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index, ::System::Int32 soundConfigId, ::System::Boolean notCanInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYSOUND_INVOKE_OFFSET))(this, index, soundConfigId, notCanInterrupt);
		}
	};
}
