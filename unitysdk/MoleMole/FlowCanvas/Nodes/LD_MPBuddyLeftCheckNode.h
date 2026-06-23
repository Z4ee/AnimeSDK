#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class EventArgs; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_DOREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x1301D390)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETALIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1301D720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETDEADCOUNT_OFFSET UNITYSDK_OFFSET(0x1301D780)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1301DAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_ONMARCELANYPLAYERFINISH_OFFSET UNITYSDK_OFFSET(0x1301D620)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_ONMARCELUPDATETOTALNUMBER_OFFSET UNITYSDK_OFFSET(0x1301D6A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1301D210)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1301DC70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_MPBuddyLeftCheckNode_TypeDefinitionIndex = 59923;

	class LD_MPBuddyLeftCheckNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::System::Int32>* _deadCount; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _aliveCount; // 0xB0
		::FlowCanvas::FlowOutput* _OnChanged; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _totalCount; // 0xC0
		::System::Int32 savedTotalCount; // 0xC8
		::System::Boolean hasSavedTotalCount; // 0xCC
		::System::Boolean hasRegistered; // 0xCD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoRegisterEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_DOREGISTEREVENT_OFFSET))(this);
		}

		::System::Void OnMarcelAnyPlayerFinish(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_ONMARCELANYPLAYERFINISH_OFFSET))(this, obj);
		}

		::System::Void OnMarcelUpdateTotalNumber(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_ONMARCELUPDATETOTALNUMBER_OFFSET))(this, args);
		}

		::System::Int32 GetAliveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETALIVECOUNT_OFFSET))(this);
		}

		::System::Int32 GetDeadCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETDEADCOUNT_OFFSET))(this);
		}

		::System::Int32 GetTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_MPBUDDYLEFTCHECKNODE_GETTOTALCOUNT_OFFSET))(this);
		}
	};
}
