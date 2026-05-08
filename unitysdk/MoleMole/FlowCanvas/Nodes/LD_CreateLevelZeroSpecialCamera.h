#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18216FE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18217130)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x18217180)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_B__9_1_OFFSET UNITYSDK_OFFSET(0x18217190)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_G____CLOSECAMERA_9_2_OFFSET UNITYSDK_OFFSET(0x18217BF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CreateLevelZeroSpecialCamera_TypeDefinitionIndex = 60105;

	class LD_CreateLevelZeroSpecialCamera : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueOutput_1<::UnityEngine::RenderTexture*>* outputRT; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* spawnPoint; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* isRT; // 0xC0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* extraOffset; // 0xC8
		::UnityEngine::RenderTexture* createdTempRT; // 0xD0
		::System::Boolean copyFromMainCamera; // 0xD8
		::System::Single screenScale; // 0xDC
		::System::Single rtDuration; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA_REGISTERPORTS_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* _RegisterPorts_b__9_0()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_B__9_0_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__9_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_B__9_1_OFFSET))(this, flow);
		}

		::System::Collections::IEnumerator* _RegisterPorts_g____CloseCamera_9_2()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_CREATELEVELZEROSPECIALCAMERA__REGISTERPORTS_G____CLOSECAMERA_9_2_OFFSET))(this);
		}
	};
}
