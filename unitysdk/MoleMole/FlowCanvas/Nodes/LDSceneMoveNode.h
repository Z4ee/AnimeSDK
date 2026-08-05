#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_8CC859447F33469F;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_BEIGIN_OFFSET UNITYSDK_OFFSET(0x107D1A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_BREAK_OFFSET UNITYSDK_OFFSET(0x107D1C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x107D28A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x107D19F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_INITSCENEMOVEGROUP_OFFSET UNITYSDK_OFFSET(0x107D1EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x107D1BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x107D1780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_SETMOVEPARAM_OFFSET UNITYSDK_OFFSET(0x107D26D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_STOPANDCLEARSCENEMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x107D1D60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x107D2930)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_0_OFFSET UNITYSDK_OFFSET(0x107D2A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_1_OFFSET UNITYSDK_OFFSET(0x107D2A30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_2_OFFSET UNITYSDK_OFFSET(0x107D2A60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_3_OFFSET UNITYSDK_OFFSET(0x107D2A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE___BASE_DOPRELOAD_OFFSET UNITYSDK_OFFSET(0x107D2AA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMoveNode_TypeDefinitionIndex = 70887;

	class LDSceneMoveNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* breakInput; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::String*>* groupKeyOutput; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* moveCycleInput; // 0xB8
		::System::Collections::Generic::List_1<::Class_3_8CC859447F33469F*>* childSceneMoveComponents; // 0xC0
		::UnityEngine::Coroutine* coroutine; // 0xC8
		::FlowCanvas::FlowInput* restart; // 0xD0
		::FlowCanvas::FlowOutput* output; // 0xD8
		::System::String* groupKey; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* keyInput; // 0xE8
		::FlowCanvas::ValueInput_1<::System::Single>* moveTimeInput; // 0xF0
		::Class_3_8CC859447F33469F* mainSceneMoveComponent; // 0xF8
		::FlowCanvas::FlowInput* start; // 0x100
		::FlowCanvas::FlowOutput* finishOutput; // 0x108
		::System::Boolean finish; // 0x110
		::System::Boolean isStart; // 0x111

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_DOPRELOAD_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_BEIGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_BREAK_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void InitSceneMoveGroup(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_INITSCENEMOVEGROUP_OFFSET))(this, key);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void StopAndClearSceneMoveComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_STOPANDCLEARSCENEMOVECOMPONENT_OFFSET))(this);
		}

		::System::Void SetMoveParam(::Class_3_8CC859447F33469F* sceneMoveComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_8CC859447F33469F*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE_SETMOVEPARAM_OFFSET))(this, sceneMoveComponent);
		}

		::System::Void _RegisterPorts_b__15_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__15_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__15_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_2_OFFSET))(this, f);
		}

		::System::String* _RegisterPorts_b__15_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE__REGISTERPORTS_B__15_3_OFFSET))(this);
		}

		::System::Void __base_DoPreload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVENODE___BASE_DOPRELOAD_OFFSET))(this);
		}
	};
}
