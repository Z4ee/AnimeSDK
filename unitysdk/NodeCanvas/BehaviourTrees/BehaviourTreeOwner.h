#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }

#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1D391320)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_ROOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1D391890)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1D3915D0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1D391480)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1D391730)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_TICK_OFFSET UNITYSDK_OFFSET(0x1D3919F0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D391B50)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BehaviourTreeOwner_TypeDefinitionIndex = 30124;

	class BehaviourTreeOwner : public ::NodeCanvas::Framework::GraphOwner_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_repeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_REPEAT_OFFSET))(this);
		}

		::System::Void set_repeat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_REPEAT_OFFSET))(this, value);
		}

		::System::Single get_updateInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_UPDATEINTERVAL_OFFSET))(this);
		}

		::System::Void set_updateInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_UPDATEINTERVAL_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status get_rootStatus()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_ROOTSTATUS_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status Tick()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_TICK_OFFSET))(this);
		}
	};
}
