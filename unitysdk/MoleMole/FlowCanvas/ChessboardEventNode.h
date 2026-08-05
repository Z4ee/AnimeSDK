#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"

class Class_5_DCFF91E03A93C03C;
namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0x1B526ED0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x1B526D40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_ONRECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x1B526C90)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B526C10)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B5269D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1B526AF0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B527060)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEventNode_TypeDefinitionIndex = 84323;

	class ChessboardEventNode : public ::FlowCanvas::Nodes::RouterEventNode_1<::NodeCanvas::Framework::GraphOwner*>
	{
	public:
		::FlowCanvas::FlowOutput* _onReceived; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnReceiveEvent(::System::String* eventName, ::ParadoxNotion::IEventData* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_ONRECEIVEEVENT_OFFSET))(this, eventName, msg);
		}

		::Class_5_DCFF91E03A93C03C* get_CurrentChessboard()
		{
			return ((::Class_5_DCFF91E03A93C03C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
