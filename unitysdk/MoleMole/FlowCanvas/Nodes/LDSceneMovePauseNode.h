#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSceneMovePauseNode_PauseType.h"

class Class_3_8CC859447F33469F;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_BEIGIN_OFFSET UNITYSDK_OFFSET(0x19DB59F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_BREAK_OFFSET UNITYSDK_OFFSET(0x19DB5C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x19DB6510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_INITSCENEMOVEGROUP_OFFSET UNITYSDK_OFFSET(0x19DB5D20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x19DB5BA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DB5800)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB6720)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x19DB67F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x19DB6820)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0x19DB6850)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSceneMovePauseNode_TypeDefinitionIndex = 64393;

	class LDSceneMovePauseNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* breakOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* pauseTypeInput; // 0xB0
		::FlowCanvas::FlowInput* start; // 0xB8
		::System::Collections::Generic::List_1<::Class_3_8CC859447F33469F*>* childSceneMoveComponents; // 0xC0
		::Class_3_8CC859447F33469F* mainSceneMoveComponent; // 0xC8
		::FlowCanvas::FlowOutput* output; // 0xD0
		::FlowCanvas::FlowInput* breakInput; // 0xD8
		::UnityEngine::Coroutine* coroutine; // 0xE0
		::FlowCanvas::ValueInput_1<::System::String*>* groupInput; // 0xE8
		::FlowCanvas::FlowOutput* finishOutput; // 0xF0
		::FlowCanvas::FlowInput* restart; // 0xF8
		::System::Boolean isStart; // 0x100
		::System::Boolean finish; // 0x101

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_BEIGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_BREAK_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void InitSceneMoveGroup(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_INITSCENEMOVEGROUP_OFFSET))(this, key);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSCENEMOVEPAUSENODE__REGISTERPORTS_B__14_2_OFFSET))(this, f);
		}
	};
}
