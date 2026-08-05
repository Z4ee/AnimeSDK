#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatItem.h"

class Class_5_DCFF91E03A93C03C;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole { class ConfigRhythmMoveBeatMap_BeatMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_GETCURMUSICPLAYTIME_OFFSET UNITYSDK_OFFSET(0x1B52AED0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x1B52A290)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1B52BD00)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONBGMSYNCCALLBACKEVENT_OFFSET UNITYSDK_OFFSET(0x1B52AC20)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B52A8B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B52AD80)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B52A390)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_RESET_OFFSET UNITYSDK_OFFSET(0x1B52AA00)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_START_OFFSET UNITYSDK_OFFSET(0x1B52BB60)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B52B0F0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52BD80)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1B52BDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_1_OFFSET UNITYSDK_OFFSET(0x1B52BDF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_2_OFFSET UNITYSDK_OFFSET(0x1B52BEA0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_3_OFFSET UNITYSDK_OFFSET(0x1B52BEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_4_OFFSET UNITYSDK_OFFSET(0x1B52BEC0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_5_OFFSET UNITYSDK_OFFSET(0x1B52BED0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_6_OFFSET UNITYSDK_OFFSET(0x1B52BEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_7_OFFSET UNITYSDK_OFFSET(0x1B52BEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_8_OFFSET UNITYSDK_OFFSET(0x1B52BF00)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__UPDATE_G__TRYLATETICK_42_0_OFFSET UNITYSDK_OFFSET(0x1B52BAF0)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B52BF10)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B52BF20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardBeatMapUpdater_TypeDefinitionIndex = 58767;

	class ChessboardBeatMapUpdater : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* continueAfterMusicFinish; // 0xA8
		::FlowCanvas::ValueOutput_1<::System::Single>* currentTime; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* beatMapKey; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Single>* beatMapTimeOffset; // 0xC0
		::FlowCanvas::ValueOutput_1<::System::Single>* preBeatTime; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* lateTickOffset; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* _currentBeatItems; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* beatIndexOffset; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* alertBeatOffset; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Single>* nextBeatTime; // 0xF0
		::FlowCanvas::FlowOutput* lateTick; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Single>* speedRatio; // 0x100
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>*>* currentBeatItems; // 0x108
		::FlowCanvas::FlowOutput* update; // 0x110
		::FlowCanvas::FlowOutput* finish; // 0x118
		::MoleMole::ConfigRhythmMoveBeatMap_BeatMap* _beatMap; // 0x120
		::Class_5_DCFF91E03A93C03C* _savedCurrentChessboard; // 0x128
		::FlowCanvas::ValueOutput_1<::System::Int32>* currentBeatIndexWithOffset; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Int32>* currentBeatIndex; // 0x138
		::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* _alertBeatItems; // 0x140
		::FlowCanvas::ValueInput_1<::System::Boolean>* enableAutoRefreshIndex; // 0x148
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>*>* alertBeatItems; // 0x150
		::System::Single _lastUpdatedTime; // 0x158
		::System::Single _currentTime; // 0x15C
		::System::Single _lastLateBeatIndex; // 0x160
		::System::Int32 beatOffset; // 0x164
		::System::Single _nextBeatTime; // 0x168
		::System::Single _nextLateBeatTime; // 0x16C
		::System::Boolean _finish; // 0x170
		::System::Boolean _revertFlag; // 0x171
		::System::Boolean _nodeEnter; // 0x172
		::System::Boolean _init; // 0x173
		::System::Int32 _lastBeatIndex; // 0x174
		::System::Single _preBeatTime; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__CTOR_OFFSET))(this);
		}

		::Class_5_DCFF91E03A93C03C* get_CurrentChessboard()
		{
			return ((::Class_5_DCFF91E03A93C03C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnBGMSyncCallbackEvent(::System::String* cueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONBGMSYNCCALLBACKEVENT_OFFSET))(this, cueName);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Single GetCurMusicPlayTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_GETCURMUSICPLAYTIME_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_UPDATE_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_START_OFFSET))(this, f);
		}

		::System::Void Interrupt(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER_INTERRUPT_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__36_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__36_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_1_OFFSET))(this, f);
		}

		::System::Single _RegisterPorts_b__36_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_2_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__36_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_3_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__36_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_4_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__36_5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_5_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__36_6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_6_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* _RegisterPorts_b__36_7()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_7_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* _RegisterPorts_b__36_8()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__REGISTERPORTS_B__36_8_OFFSET))(this);
		}

		::System::Void _Update_g__TryLateTick_42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER__UPDATE_G__TRYLATETICK_42_0_OFFSET))(this);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDBEATMAPUPDATER___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
