#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_BEGIN_OFFSET UNITYSDK_OFFSET(0x136A1EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x136A1A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_PLAY_OFFSET UNITYSDK_OFFSET(0x136A1B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x136A1990)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x136A1F60)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x136A1FD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x136A2010)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SummerTideTreasureTimer_TypeDefinitionIndex = 67422;

	class LD_SummerTideTreasureTimer : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* finish; // 0xA8
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0xB0
		::FlowCanvas::FlowOutput* start; // 0xB8
		::FlowCanvas::FlowOutput* update; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Play(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_PLAY_OFFSET))(this, f);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_UPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid Begin(::FlowCanvas::Flow f)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER_BEGIN_OFFSET))(this, f);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SUMMERTIDETREASURETIMER___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
