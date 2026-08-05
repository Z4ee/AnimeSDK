#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardPureFunctionNode_3.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/HollowEntityGetCanMoveNeighborIndex_Param.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX_INVOKE_OFFSET UNITYSDK_OFFSET(0x19B06BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B07190)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19B070E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCanMoveNeighborIndex_TypeDefinitionIndex = 68912;

	class HollowEntityGetCanMoveNeighborIndex : public ::MoleMole::FlowCanvas::ChessboardPureFunctionNode_3<::System::Collections::Generic::IList_1<::MoleMole::Vector2Int>*, ::System::UInt32, ::MoleMole::FlowCanvas::Nodes::HollowEntityGetCanMoveNeighborIndex_Param>
	{
	public:
		static ::Il2CppArray<::Share::GridDir>** StaticGet_GRID_DIR_FOUR()
		{
			return (::Il2CppArray<::Share::GridDir>**)Il2CppClass::FromTypeDefinitionIndex(HollowEntityGetCanMoveNeighborIndex_TypeDefinitionIndex)->GetStaticField(0x51910);
		}
		::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* _canMoveNeighborIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IList_1<::MoleMole::Vector2Int>* Invoke(::System::UInt32 entityRuntimeID, ::MoleMole::FlowCanvas::Nodes::HollowEntityGetCanMoveNeighborIndex_Param param)
		{
			return ((::System::Collections::Generic::IList_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::System::UInt32, ::MoleMole::FlowCanvas::Nodes::HollowEntityGetCanMoveNeighborIndex_Param))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWENTITYGETCANMOVENEIGHBORINDEX_INVOKE_OFFSET))(this, entityRuntimeID, param);
		}
	};
}
