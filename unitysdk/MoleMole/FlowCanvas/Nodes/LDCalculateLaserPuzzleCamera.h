#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA_CALCULATECAMERA_OFFSET UNITYSDK_OFFSET(0x14989E70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x14989B40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1498B810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_0_OFFSET UNITYSDK_OFFSET(0x1498B850)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_1_OFFSET UNITYSDK_OFFSET(0x1498B870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_2_OFFSET UNITYSDK_OFFSET(0x1498B890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCalculateLaserPuzzleCamera_TypeDefinitionIndex = 51319;

	class LDCalculateLaserPuzzleCamera : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::Single AspectRatio; // 0x0
		::FlowCanvas::ValueInput_1<::System::Single>* frameLeft; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* height; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* frameRight; // 0xB8
		::FlowCanvas::FlowOutput* _output; // 0xC0
		::FlowCanvas::ValueInput_1<::System::Single>* yawOffset; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* fieldOfView; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* targetTagList; // 0xD8
		::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* cameraRotation; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Single>* frameBottom; // 0xE8
		::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* cameraLocation; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Single>* frameTop; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* baseEntity; // 0x100
		::UnityEngine::Vector3 _cameraRotation; // 0x108
		::UnityEngine::Vector3 _cameraLocation; // 0x114

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void CalculateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA_CALCULATECAMERA_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__15_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__15_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_1_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__15_2(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCALCULATELASERPUZZLECAMERA__REGISTERPORTS_B__15_2_OFFSET))(this, flow);
		}
	};
}
