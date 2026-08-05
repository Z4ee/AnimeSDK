#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_16EA9862B8D2E5C9;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCEINTERNAL_OFFSET UNITYSDK_OFFSET(0x19DA8F40)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCE_OFFSET UNITYSDK_OFFSET(0x19DA8D30)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_PAUSE_OFFSET UNITYSDK_OFFSET(0x19DA8C50)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19DA8180)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_RESUME_OFFSET UNITYSDK_OFFSET(0x19DA8CC0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_START_OFFSET UNITYSDK_OFFSET(0x19DA8610)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DA93B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x19DA93F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_1_OFFSET UNITYSDK_OFFSET(0x19DA9420)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_2_OFFSET UNITYSDK_OFFSET(0x19DA94B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_3_OFFSET UNITYSDK_OFFSET(0x19DA9540)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_4_OFFSET UNITYSDK_OFFSET(0x19DA9550)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_5_OFFSET UNITYSDK_OFFSET(0x19DA9560)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_6_OFFSET UNITYSDK_OFFSET(0x19DA9630)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_7_OFFSET UNITYSDK_OFFSET(0x19DA9640)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_8_OFFSET UNITYSDK_OFFSET(0x19DA9650)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardMonsterSpawnerNode_TypeDefinitionIndex = 76675;

	class ChessboardMonsterSpawnerNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* _hever; // 0xA8
		::FlowCanvas::FlowOutput* _update; // 0xB0
		::FlowCanvas::FlowInput* _pause; // 0xB8
		::FlowCanvas::FlowOutput* _finish; // 0xC0
		::FlowCanvas::ValueInput_1<::System::String*>* _groupIndex; // 0xC8
		::FlowCanvas::FlowInput* _start; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Int32>* _peedRatio; // 0xD8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _curFrame; // 0xE0
		::FlowCanvas::FlowInput* _resume; // 0xE8
		::FlowCanvas::ValueOutput_1<::System::Int32>* _totalFrame; // 0xF0
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*>* _cellMap; // 0xF8
		::System::Collections::Generic::List_1<::System::UInt32>* cacheSpawnerEntityList; // 0x100
		::FlowCanvas::ValueInput_1<::System::Int32>* _groupId; // 0x108
		::System::Collections::Generic::List_1<::System::Int32>* _tokenList; // 0x110
		::FlowCanvas::ValueOutput_1<::System::String*>* _spawnSignal; // 0x118
		::FlowCanvas::ValueInput_1<::System::Int32>* _feverGroupId; // 0x120
		::Class_1_16EA9862B8D2E5C9* _hoverSpawner; // 0x128
		::System::String* _spawnSignalValue; // 0x130
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::Int32>*>* _TokenList; // 0x138
		::FlowCanvas::ValueOutput_1<::System::Collections::Generic::List_1<::System::UInt32>*>* _spawnerEntityList; // 0x140
		::Class_1_16EA9862B8D2E5C9* _spawner; // 0x148
		::FlowCanvas::FlowInput* _advance; // 0x150
		::FlowCanvas::FlowOutput* _then; // 0x158
		::System::Boolean pause; // 0x160
		::System::Boolean start; // 0x161
		::System::Boolean finish; // 0x162
		::System::Int32 _curFrameInternal; // 0x164
		::System::Int32 _curTime; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_START_OFFSET))(this, flow);
		}

		::System::Void Pause(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_PAUSE_OFFSET))(this, flow);
		}

		::System::Void Resume(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_RESUME_OFFSET))(this, flow);
		}

		::System::Void Advance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCE_OFFSET))(this);
		}

		::System::Boolean AdvanceInternal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE_ADVANCEINTERNAL_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_1_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_2(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_2_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__0_3(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_3_OFFSET))(this, f);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _RegisterPorts_b__0_4()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_4_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_5_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__0_6()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_6_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__0_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_7_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* _RegisterPorts_b__0_8()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDMONSTERSPAWNERNODE__REGISTERPORTS_B__0_8_OFFSET))(this);
		}
	};
}
