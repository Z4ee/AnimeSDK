#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_10513DA28B7AD271.h"
#include "unitysdk/Enum_3_E2BB401879FE05E8.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_AAD2B1B6FB741157.h"

class Class_1_878E7E8F99041B8F;
class Class_2_21BB1EBBC5460F75;
class Class_5_AF65C3A968E836D2;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x125A8D70)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x125A9310)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUSINTERNAL_OFFSET UNITYSDK_OFFSET(0x125A95E0)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUS_OFFSET UNITYSDK_OFFSET(0x125A8EB0)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x125A9B30)
#define MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x125A9BE0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessFocusCamera_TypeDefinitionIndex = 68928;

	class ChessFocusCamera : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::String*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_AAD2B1B6FB741157>* _cacheState; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* a, ::System::String* focusKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_INVOKE_OFFSET))(this, a, focusKey);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_ONGRAPHSTOPED_OFFSET))(this);
		}

		static ::System::Boolean TryFocus(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* pointList, ::Enum_3_E2BB401879FE05E8 priority, ::Enum_3_10513DA28B7AD271 focusCameraZMode, ::Class_5_AF65C3A968E836D2* chessboard, ::Struct_2_AAD2B1B6FB741157& cameraStateHandle, ::System::String* focusKey)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Enum_3_E2BB401879FE05E8, ::Enum_3_10513DA28B7AD271, ::Class_5_AF65C3A968E836D2*, ::Struct_2_AAD2B1B6FB741157&, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUS_OFFSET))(pointList, priority, focusCameraZMode, chessboard, cameraStateHandle, focusKey);
		}

		static ::System::Boolean TryFocusInternal(::Enum_3_E2BB401879FE05E8 priority, ::MoleMole::UIHollowChessboard3DModelController* chessboardCtrl, ::Class_5_AF65C3A968E836D2* hollowChessboard, ::Class_2_21BB1EBBC5460F75* cameraController, ::Class_1_878E7E8F99041B8F* focusCamera, ::Struct_2_AAD2B1B6FB741157& cameraStateHandle)
		{
			return ((::System::Boolean(*)(::Enum_3_E2BB401879FE05E8, ::MoleMole::UIHollowChessboard3DModelController*, ::Class_5_AF65C3A968E836D2*, ::Class_2_21BB1EBBC5460F75*, ::Class_1_878E7E8F99041B8F*, ::Struct_2_AAD2B1B6FB741157&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA_TRYFOCUSINTERNAL_OFFSET))(priority, chessboardCtrl, hollowChessboard, cameraController, focusCamera, cameraStateHandle);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSFOCUSCAMERA___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
