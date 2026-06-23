#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/StatusEffectType.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole { class ChessEntity; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A0192E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT_START_OFFSET UNITYSDK_OFFSET(0x1A019420)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A019720)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1A019760)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameEntitySetEffect_TypeDefinitionIndex = 75273;

	class HackerGameEntitySetEffect : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* output; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::ChessEntity*>* chessEntity; // 0xB0
		::FlowCanvas::FlowInput* start; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::StatusEffectType>* effectType; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* value; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT_START_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEENTITYSETEFFECT__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}
	};
}
