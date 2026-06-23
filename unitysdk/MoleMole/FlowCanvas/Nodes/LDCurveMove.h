#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_3_AF7A56E03A4D3952;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BEIGIN_OFFSET UNITYSDK_OFFSET(0x182D39C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BREAK_OFFSET UNITYSDK_OFFSET(0x182D3C20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CACHECURVEMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x182D3DC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x182D4240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x182D3B70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182D3780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STARTMOVE_OFFSET UNITYSDK_OFFSET(0x182D3F90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STOPANDCLEARCURVEMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x182D3CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x182D42A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x182D42E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x182D4310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_2_OFFSET UNITYSDK_OFFSET(0x182D4340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_3_OFFSET UNITYSDK_OFFSET(0x182D4370)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCurveMove_TypeDefinitionIndex = 79095;

	class LDCurveMove : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xA8
		::FlowCanvas::FlowInput* start; // 0xB0
		::Class_3_AF7A56E03A4D3952* curveMoveComponent; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::FlowInput* breakInput; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* indexInput; // 0xD0
		::FlowCanvas::ValueOutput_1<::MoleMole::Battle::Entity*>* entityOutPut; // 0xD8
		::FlowCanvas::FlowOutput* finishOutput; // 0xE0
		::UnityEngine::Coroutine* coroutine; // 0xE8
		::MoleMole::Battle::Entity* cacheEntity; // 0xF0
		::FlowCanvas::FlowInput* restart; // 0xF8
		::FlowCanvas::FlowOutput* breakOutput; // 0x100
		::System::Boolean finish; // 0x108
		::System::Boolean isStart; // 0x109

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Beigin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BEIGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_BREAK_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void CacheCurveMoveComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CACHECURVEMOVECOMPONENT_OFFSET))(this);
		}

		::System::Void StartMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STARTMOVE_OFFSET))(this);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_CHECKFINISH_OFFSET))(this);
		}

		::System::Void StopAndClearCurveMoveComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE_STOPANDCLEARCURVEMOVECOMPONENT_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_2_OFFSET))(this, f);
		}

		::MoleMole::Battle::Entity* _RegisterPorts_b__14_3()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCURVEMOVE__REGISTERPORTS_B__14_3_OFFSET))(this);
		}
	};
}
