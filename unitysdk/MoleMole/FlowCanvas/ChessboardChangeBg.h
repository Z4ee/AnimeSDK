#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_5_FCAF801AC482D3B5;
namespace MoleMole::FlowCanvas { class ChessboardChangeBg_ParaInfo; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_CHANGEPIECECENTER_OFFSET UNITYSDK_OFFSET(0x170F7D70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_INVOKE_OFFSET UNITYSDK_OFFSET(0x170F76F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG__CTOR_OFFSET UNITYSDK_OFFSET(0x170F8490)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardChangeBg_TypeDefinitionIndex = 69804;

	class ChessboardChangeBg : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_1<::MoleMole::FlowCanvas::ChessboardChangeBg_ParaInfo*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessboardChangeBg_ParaInfo* a)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessboardChangeBg_ParaInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_INVOKE_OFFSET))(this, a);
		}

		::System::Nullable_1<::UnityEngine::Vector3> ChangePieceCenter(::MoleMole::FlowCanvas::ChessboardChangeBg_ParaInfo* a, ::Class_5_FCAF801AC482D3B5* chessboard, ::System::Nullable_1<::MoleMole::Vector2Int>& colrol)
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::MoleMole::FlowCanvas::ChessboardChangeBg_ParaInfo*, ::Class_5_FCAF801AC482D3B5*, ::System::Nullable_1<::MoleMole::Vector2Int>&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCHANGEBG_CHANGEPIECECENTER_OFFSET))(this, a, chessboard, colrol);
		}
	};
}
