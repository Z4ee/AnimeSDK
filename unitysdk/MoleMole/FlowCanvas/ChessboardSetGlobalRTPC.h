#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCallableActionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x12BAB930)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x12BABAE0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BABC00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x12BABC90)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardSetGlobalRTPC_TypeDefinitionIndex = 86714;

	class ChessboardSetGlobalRTPC : public ::MoleMole::FlowCanvas::ChessboardCallableActionNode_2<::System::String*, ::System::Single>
	{
	public:
		::System::String* _rtpcName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* rtpcName, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_INVOKE_OFFSET))(this, rtpcName, value);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSETGLOBALRTPC___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
