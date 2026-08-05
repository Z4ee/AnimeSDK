#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19B16EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B17290)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__READWAVEDATA_OFFSET UNITYSDK_OFFSET(0x19B17090)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x19B172E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x19B17330)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_2_OFFSET UNITYSDK_OFFSET(0x19B17340)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_3_OFFSET UNITYSDK_OFFSET(0x19B17350)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReaDoubleElite_WaveCardData_TypeDefinitionIndex = 91428;

	class LD_ReaDoubleElite_WaveCardData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _FinishOut; // 0xA8
		::System::Collections::Generic::List_1<::System::Int32>* _currentCardIdsList; // 0xB0
		::FlowCanvas::FlowOutput* _doOut; // 0xB8
		::FlowCanvas::FlowOutput* _output; // 0xC0
		::System::Boolean _hasNextWave; // 0xC8
		::System::Int32 waveIndex; // 0xCC
		::System::Int32 totalWave; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _ReadWaveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__READWAVEDATA_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__7_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__7_1(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_1_OFFSET))(this, flow);
		}

		::System::Boolean _RegisterPorts_b__7_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_2_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _RegisterPorts_b__7_3()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_3_OFFSET))(this);
		}
	};
}
