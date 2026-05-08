#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE_INVOKE_OFFSET UNITYSDK_OFFSET(0x125A9BF0)
#define MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x125AA620)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerCloseScanLine_TypeDefinitionIndex = 39062;

	class HackerCloseScanLine : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERCLOSESCANLINE_INVOKE_OFFSET))(this, a);
		}
	};
}
