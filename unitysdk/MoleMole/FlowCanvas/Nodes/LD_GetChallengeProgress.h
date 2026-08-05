#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_A26009A270D71B3D;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x118C1F70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x118C2110)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x118C2190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x118C21A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_2_OFFSET UNITYSDK_OFFSET(0x118C21B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetChallengeProgress_TypeDefinitionIndex = 49251;

	class LD_GetChallengeProgress : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::String* _cacheStrProg; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::String*>* stringProgressOutput; // 0xB0
		::FlowCanvas::ValueInput_1<::Class_1_A26009A270D71B3D*>* challengeItem; // 0xB8
		::FlowCanvas::FlowInput* updateProgress; // 0xC0
		::FlowCanvas::FlowOutput* onChangeProgress; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::ChallengeSubTypeItem*>* challengeSubTypeItem; // 0xD0
		::System::Boolean _hasFirstCall; // 0xD8
		::System::Single _preProg; // 0xDC
		::System::Single _cacheProg; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__9_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__9_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETCHALLENGEPROGRESS__REGISTERPORTS_B__9_2_OFFSET))(this, flow);
		}
	};
}
