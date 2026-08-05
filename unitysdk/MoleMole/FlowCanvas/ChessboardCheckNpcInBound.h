#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole { class ChessEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKNPCINBOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x13A7EE00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKNPCINBOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x13A7F210)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCheckNpcInBound_TypeDefinitionIndex = 43061;

	class ChessboardCheckNpcInBound : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::ChessEntity*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKNPCINBOUND__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* bound, ::MoleMole::ChessEntity* chessEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::ChessEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHECKNPCINBOUND_INVOKE_OFFSET))(this, bound, chessEntity);
		}
	};
}
