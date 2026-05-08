#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/GraphOwner_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }

#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1A8FE510)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_ROOTSTATUS_OFFSET UNITYSDK_OFFSET(0x1A8FEA80)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_GET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A8FE7C0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_REPEAT_OFFSET UNITYSDK_OFFSET(0x1A8FE670)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A8FE920)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER_TICK_OFFSET UNITYSDK_OFFSET(0x1A8FEBE0)
#define NODECANVAS_BEHAVIOURTREES_BEHAVIOURTREEOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FED40)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BehaviourTreeOwner_TypeDefinitionIndex = 27291;

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
