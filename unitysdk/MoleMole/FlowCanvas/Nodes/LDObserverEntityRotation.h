#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_ONCOMPLETEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12BB5FB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12BB5500)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_START_OFFSET UNITYSDK_OFFSET(0x12BB5790)
#define MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB60C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDObserverEntityRotation_TypeDefinitionIndex = 75433;

	class LDObserverEntityRotation : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Single>* precision; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Boolean>* listenAxisZ; // 0xB0
		::FlowCanvas::FlowOutput* OnAbort; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* entity; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Boolean>* listenAxisX; // 0xC8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* targetValueInput; // 0xD0
		::FlowCanvas::FlowOutput* OnComplete; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Boolean>* listenAxisY; // 0xE0
		::System::Int32 taskHandle; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_START_OFFSET))(this, f);
		}

		::System::Void OnCompletedCallBack(::System::Boolean bComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDOBSERVERENTITYROTATION_ONCOMPLETEDCALLBACK_OFFSET))(this, bComplete);
		}
	};
}
