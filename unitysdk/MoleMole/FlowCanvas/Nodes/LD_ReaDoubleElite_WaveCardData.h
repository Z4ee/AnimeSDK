#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x182DF740)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x182DFB10)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__READWAVEDATA_OFFSET UNITYSDK_OFFSET(0x182DF910)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x182DFB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x182DFBC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_2_OFFSET UNITYSDK_OFFSET(0x182DFBD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_READOUBLEELITE_WAVECARDDATA__REGISTERPORTS_B__7_3_OFFSET UNITYSDK_OFFSET(0x182DFBE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReaDoubleElite_WaveCardData_TypeDefinitionIndex = 40010;

	class LD_ReaDoubleElite_WaveCardData : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _currentCardIdsList; // 0xA8
		::FlowCanvas::FlowOutput* _FinishOut; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xB8
		::FlowCanvas::FlowOutput* _doOut; // 0xC0
		::System::Int32 waveIndex; // 0xC8
		::System::Boolean _hasNextWave; // 0xCC
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
