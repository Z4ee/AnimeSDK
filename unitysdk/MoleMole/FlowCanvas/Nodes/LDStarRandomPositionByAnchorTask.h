#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDStarRandomPositionByAnchorTask_State.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_CLOSE_OFFSET UNITYSDK_OFFSET(0x1780AFE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_CORORANDOMPOSITION_OFFSET UNITYSDK_OFFSET(0x1780B4D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_PAUSE_OFFSET UNITYSDK_OFFSET(0x1780AF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1780AB90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_RESUME_OFFSET UNITYSDK_OFFSET(0x1780AF70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_START_OFFSET UNITYSDK_OFFSET(0x1780B0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1780B570)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__REGISTERPORTS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1780B5B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__REGISTERPORTS_B__18_1_OFFSET UNITYSDK_OFFSET(0x1780B5C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDStarRandomPositionByAnchorTask_TypeDefinitionIndex = 66913;

	class LDStarRandomPositionByAnchorTask : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* _inputDefaultExclude; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::String*>*>* _inputAnchorList; // 0xB0
		::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* _outputPosition; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputCount; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* inputCenter; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* _inputRange; // 0xD0
		::FlowCanvas::FlowOutput* _flowOutputDo; // 0xD8
		::FlowCanvas::FlowOutput* _flowOutputOut; // 0xE0
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector2>* inputRandomDelay; // 0xE8
		::FlowCanvas::FlowOutput* _groupStart; // 0xF0
		::FlowCanvas::FlowOutput* _flowOutputFinish; // 0xF8
		::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* _inputCenterOffset; // 0x100
		::UnityEngine::Coroutine* runingCoroutine; // 0x108
		::FlowCanvas::ValueInput_1<::System::Single>* inputInterval; // 0x110
		::UnityEngine::Vector3 outPosition; // 0x118
		::System::Int32 taskHandle; // 0x124
		::MoleMole::FlowCanvas::Nodes::LDStarRandomPositionByAnchorTask_State _state; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Pause(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_PAUSE_OFFSET))(this, f);
		}

		::System::Void Resume(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_RESUME_OFFSET))(this, f);
		}

		::System::Void Close(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_CLOSE_OFFSET))(this, f);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_START_OFFSET))(this, f);
		}

		::Cysharp::Threading::Tasks::UniTask CoroRandomPosition()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK_CORORANDOMPOSITION_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__18_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__REGISTERPORTS_B__18_0_OFFSET))(this);
		}

		::UnityEngine::Vector3 _RegisterPorts_b__18_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSTARRANDOMPOSITIONBYANCHORTASK__REGISTERPORTS_B__18_1_OFFSET))(this);
		}
	};
}
