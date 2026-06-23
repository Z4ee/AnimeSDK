#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP_INVOKE_OFFSET UNITYSDK_OFFSET(0x161CD600)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x161CD3B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x161CDB90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x161CDC20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayTextureSheetGroup_TypeDefinitionIndex = 64913;

	class ChessboardPlayTextureSheetGroup : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::String*>
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* _cachedPerformEntities; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>* Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* cellList, ::System::String* key)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowEntity*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP_INVOKE_OFFSET))(this, cellList, key);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYTEXTURESHEETGROUP___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
