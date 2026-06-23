#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/Share/GridDir.h"

class Class_5_FCAF801AC482D3B5;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_BEGIN_OFFSET UNITYSDK_OFFSET(0x1A01D9A0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_BREAK_OFFSET UNITYSDK_OFFSET(0x1A01DD70)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_DORESTART_OFFSET UNITYSDK_OFFSET(0x1A01DFD0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_FORCEBREAK_OFFSET UNITYSDK_OFFSET(0x1A01DE00)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x1A01D4A0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_INTERNALCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A01DCC0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A01E060)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A01D5A0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_RESTART_OFFSET UNITYSDK_OFFSET(0x1A01DEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_RESTDATA_OFFSET UNITYSDK_OFFSET(0x1A01D910)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A01E250)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A01E150)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_0_OFFSET UNITYSDK_OFFSET(0x1A01E300)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_1_OFFSET UNITYSDK_OFFSET(0x1A01E330)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_2_OFFSET UNITYSDK_OFFSET(0x1A01E360)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_3_OFFSET UNITYSDK_OFFSET(0x1A01E420)
#define MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1A01E430)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowCreateEntityLikeBombermanBomb_TypeDefinitionIndex = 71767;

	class HollowCreateEntityLikeBombermanBomb : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		static ::Il2CppArray<::Share::GridDir>** StaticGet_GRID_DIR_FOUR()
		{
			return (::Il2CppArray<::Share::GridDir>**)Il2CppClass::FromTypeDefinitionIndex(HollowCreateEntityLikeBombermanBomb_TypeDefinitionIndex)->GetStaticField(0x467D0);
		}
		::Il2CppArray<::MoleMole::Vector2Int>* _currentIndex; // 0xA8
		::FlowCanvas::FlowInput* restart; // 0xB0
		::FlowCanvas::FlowOutput* doOutput; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* entityListOutput; // 0xC0
		::System::Collections::Generic::List_1<::System::UInt32>* _crateEntityList; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* distance; // 0xD0
		::UnityEngine::Coroutine* coroutine; // 0xD8
		::FlowCanvas::FlowInput* breakInput; // 0xE0
		::FlowCanvas::FlowInput* start; // 0xE8
		::FlowCanvas::FlowOutput* finishOutput; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Int32>* createEntityID; // 0xF8
		::FlowCanvas::ValueInput_1<::MoleMole::Vector2Int>* startIndex; // 0x100
		::FlowCanvas::ValueInput_1<::System::Single>* createInterval; // 0x108
		::FlowCanvas::ValueInput_1<::System::Int32>* hitLayerMask; // 0x110
		::FlowCanvas::FlowOutput* output; // 0x118
		::System::Single waitDelta; // 0x120
		::System::Boolean isStart; // 0x124
		::System::Single waitDuration; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__CCTOR_OFFSET))();
		}

		::Class_5_FCAF801AC482D3B5* get_CurrentChessboard()
		{
			return ((::Class_5_FCAF801AC482D3B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void RestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_RESTDATA_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_BEGIN_OFFSET))(this, f);
		}

		::System::Void Break(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_BREAK_OFFSET))(this, f);
		}

		::System::Void ForceBreak(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_FORCEBREAK_OFFSET))(this, f);
		}

		::System::Void Restart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_RESTART_OFFSET))(this, f);
		}

		::System::Void DoRestart(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_DORESTART_OFFSET))(this, f);
		}

		::System::Collections::IEnumerator* InternalCoroutine(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_INTERNALCOROUTINE_OFFSET))(this, f);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB_ONRESET_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__21_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__21_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__21_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_2_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RegisterPorts_b__21_3()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB__REGISTERPORTS_B__21_3_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_HOLLOWCREATEENTITYLIKEBOMBERMANBOMB___BASE_ONRESET_OFFSET))(this);
		}
	};
}
