#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPTEXTURESHEETGROUP_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B9544C0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPTEXTURESHEETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x144B6E60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardStopTextureSheetGroup_TypeDefinitionIndex = 51447;

	class ChessboardStopTextureSheetGroup : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPTEXTURESHEETGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* performEntities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPTEXTURESHEETGROUP_INVOKE_OFFSET))(this, performEntities);
		}
	};
}
