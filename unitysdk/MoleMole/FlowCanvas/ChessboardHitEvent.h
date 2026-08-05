#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardEventNode_1.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x19B01910)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B01970)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardHitEvent_TypeDefinitionIndex = 77177;

	class ChessboardHitEvent : public ::MoleMole::FlowCanvas::ChessboardEventNode_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HackerGameCollisionData>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDHITEVENT_GET_EVENTNAME_OFFSET))(this);
		}
	};
}
