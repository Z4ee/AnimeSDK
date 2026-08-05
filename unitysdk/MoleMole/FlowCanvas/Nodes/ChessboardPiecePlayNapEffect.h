#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B05CB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x19B05F60)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B060E0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x19B06190)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardPiecePlayNapEffect_TypeDefinitionIndex = 46773;

	class ChessboardPiecePlayNapEffect : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_2<::System::UInt32, ::System::String*>
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _cacheUid; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::System::String* effectKey)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT_INVOKE_OFFSET))(this, effectKey);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDPIECEPLAYNAPEFFECT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
