#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableFunctionNode_3.h"

namespace MoleMole { class ChessEntity; }
namespace MoleMole { class ChessEntityCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY_INVOKE_OFFSET UNITYSDK_OFFSET(0x19DA9A20)
#define MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA9D60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int GetChessEntityListByPosY_TypeDefinitionIndex = 54216;

	class GetChessEntityListByPosY : public ::MoleMole::FlowCanvas::ChessboardCallableFunctionNode_3<::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*, ::MoleMole::ChessEntityCollection*, ::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>* Invoke(::MoleMole::ChessEntityCollection* a, ::System::Int32 b)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ChessEntity*>*(*)(::PVOID, ::MoleMole::ChessEntityCollection*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_GETCHESSENTITYLISTBYPOSY_INVOKE_OFFSET))(this, a, b);
		}
	};
}
