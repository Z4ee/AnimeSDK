#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatItem.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatType.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BlockType.h"
#include "unitysdk/MoleMole/DoubleEliteCardInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardChangePieceInfo_ServerInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_FilterParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_IndexSearchInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_SearchParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_CanvasRTParams.h"
#include "unitysdk/MoleMole/FlowCanvas/HollowEntityMoveEvent_Param.h"
#include "unitysdk/MoleMole/FlowCanvas/LDDestroyEntity_DestroyEntityType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorWithStyle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardUpdateStateMachineParams_StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InteractionEndSuddenEventMsg.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIDataAdapter.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDListenAvatarNode_ListenAvatarTargetType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDReadDailyCardData_MonsterInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDTurnBasedGetEnemyMonsterList_Element.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_ReadMonsterFromCardData_CardMonsterInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Optional_1.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/HackerGamePlayerAttachEffectData.h"
#include "unitysdk/MoleMole/HackerGamePlayerEffectTypeChangedData.h"
#include "unitysdk/MoleMole/HackerGamePlayerOnDamagedData.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MultiTaskNodeHandle.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FlowCanvas { template <typename T> class BinderConnection_1; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class AddListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class CustomEvent_1; }
namespace FlowCanvas::Nodes { template <typename T> class ForEach_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetListIsEmpty_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetRandomListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class GetVariable_1; }
namespace FlowCanvas::Nodes { template <typename T> class Identity_1; }
namespace FlowCanvas::Nodes { template <typename T> class LDForeachNext_1; }
namespace FlowCanvas::Nodes { template <typename T> class ReadFlowParameter_1; }
namespace FlowCanvas::Nodes { template <typename T> class ReflectedExtractorNodeWrapper_1; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueOutput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SelectOnBool_1; }
namespace FlowCanvas::Nodes { template <typename T> class SendEvent_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetListItem_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetVariable_1; }
namespace FlowCanvas::Nodes { template <typename T> class TryGetValue_1; }
namespace FlowCanvas::Nodes { template <typename T> class WriteFlowParameter_1; }
namespace MoleMole { class ChessEntity; }
namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework { template <typename T> class Variable_1; }
namespace NodeCanvas::Tasks::Actions { template <typename T> class SetVariable_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_92CD8FB9950242B3_METHOD_1_2A63F6B581CB1CA9_1_OFFSET UNITYSDK_OFFSET(0x103114F0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_2A63F6B581CB1CA9_OFFSET UNITYSDK_OFFSET(0x102F2100)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x10316990)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x102E5150)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x10306C00)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_4256453CFEAAC957_OFFSET UNITYSDK_OFFSET(0x1032F100)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_4FFFF6F96B26E95A_OFFSET UNITYSDK_OFFSET(0x102F9CD0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_6E5FCBBC887ED8B7_OFFSET UNITYSDK_OFFSET(0x103109A0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_775B6D644F07B554_1_OFFSET UNITYSDK_OFFSET(0x10323DC0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x102E8540)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x102FF730)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x10332290)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x10328BC0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10328BB0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0x1030CFB0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_A2458167D7752575_OFFSET UNITYSDK_OFFSET(0x102ED330)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_C3CD621FE895B79A_OFFSET UNITYSDK_OFFSET(0x10313230)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_E596C3AA2D8708A5_1_OFFSET UNITYSDK_OFFSET(0x1031E1F0)
#define CLASS_1_92CD8FB9950242B3_METHOD_1_E596C3AA2D8708A5_OFFSET UNITYSDK_OFFSET(0x102F4100)
#define CLASS_1_92CD8FB9950242B3__CTOR_OFFSET UNITYSDK_OFFSET(0x102E5140)

inline static constexpr unsigned int Class_1_92CD8FB9950242B3_TypeDefinitionIndex = 85926;

class Class_1_92CD8FB9950242B3 : public ::System::Object
{
public:
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_39; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>* Field_1_253; // 0x18
	::NodeCanvas::Tasks::Actions::SetVariable_1<::System::Boolean>* Field_1_232; // 0x20
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_21; // 0x28
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_87; // 0x30
	::FlowCanvas::Nodes::GetListItem_1<::System::Boolean>* Field_1_82; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* Field_1_255; // 0x40
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::DoubleEliteCardInfo>* Field_1_124; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_254; // 0x50
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_264; // 0x58
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_126; // 0x60
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_183; // 0x68
	::NodeCanvas::Framework::Variable_1<::MoleMole::Level::RatingType>* Field_1_223; // 0x70
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_93; // 0x78
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_187; // 0x80
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::StatusEffectType>* Field_1_101; // 0x88
	::FlowCanvas::Nodes::ForEach_1<::System::Boolean>* Field_1_75; // 0x90
	::FlowCanvas::BinderConnection_1<::System::Int32>* Field_1_58; // 0x98
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_43; // 0xA0
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::UnityEngine::Vector3>* Field_1_137; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_258; // 0xB0
	::FlowCanvas::Nodes::GetListItem_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_81; // 0xB8
	::FlowCanvas::BinderConnection_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_3; // 0xC0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_37; // 0xC8
	::FlowCanvas::BinderConnection_1<::MoleMole::DoubleEliteCardInfo>* Field_1_13; // 0xD0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_189; // 0xD8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Config::TimePeriodType>* Field_1_84; // 0xE0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_260; // 0xE8
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::WeatherType>* Field_1_208; // 0xF0
	::FlowCanvas::ValueInput_1<::System::Boolean>* Field_1_171; // 0xF8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* Field_1_40; // 0x100
	::FlowCanvas::Nodes::GetVariable_1<::System::Single>* Field_1_106; // 0x108
	::FlowCanvas::Nodes::AddListItem_1<::System::Boolean>* Field_1_65; // 0x110
	::FlowCanvas::BinderConnection_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_5; // 0x118
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_216; // 0x120
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_218; // 0x128
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::DoubleEliteCardInfo>* Field_1_173; // 0x130
	::FlowCanvas::BinderConnection_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_11; // 0x138
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::EntityHandle>* Field_1_148; // 0x140
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_149; // 0x148
	::System::Collections::Generic::IEnumerable_1<::System::UInt32>* Field_1_246; // 0x150
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_33; // 0x158
	::FlowCanvas::ValueInput_1<::System::Int32>* Field_1_172; // 0x160
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_44; // 0x168
	::FlowCanvas::Nodes::GetVariable_1<::System::Int32>* Field_1_105; // 0x170
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::Vector2Int>* Field_1_136; // 0x178
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::WeatherType>* Field_1_147; // 0x180
	::System::Collections::Generic::IEnumerable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_239; // 0x188
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_18; // 0x190
	::NodeCanvas::Framework::Variable_1<::MoleMole::Vector2Int>* Field_1_225; // 0x198
	::FlowCanvas::Nodes::SetVariable_1<::System::Int32>* Field_1_160; // 0x1A0
	::FlowCanvas::BinderConnection_1<::MoleMole::Level::RatingType>* Field_1_50; // 0x1A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_155; // 0x1B0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Vector2>* Field_1_230; // 0x1B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_184; // 0x1C0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::TimePeriodType>* Field_1_179; // 0x1C8
	::FlowCanvas::Nodes::CustomEvent_1<::MoleMole::MultiTaskNodeHandle>* Field_1_67; // 0x1D0
	::FlowCanvas::Nodes::AddListItem_1<::MoleMole::EntityHandle>* Field_1_64; // 0x1D8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_27; // 0x1E0
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_90; // 0x1E8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::EntityHandle>* Field_1_125; // 0x1F0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_23; // 0x1F8
	::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Field_1_259; // 0x200
	::FlowCanvas::Nodes::LDForeachNext_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_114; // 0x208
	::FlowCanvas::Nodes::ForEach_1<::System::UInt32>* Field_1_78; // 0x210
	::FlowCanvas::BinderConnection_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_53; // 0x218
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_92; // 0x220
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_213; // 0x228
	::FlowCanvas::BinderConnection_1<::MoleMole::MultiTaskNodeHandle>* Field_1_51; // 0x230
	::FlowCanvas::Nodes::GetVariable_1<::UnityEngine::Vector2>* Field_1_108; // 0x238
	::System::Object* Field_1_0; // 0x240
	::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector3>* Field_1_247; // 0x248
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Int32>* Field_1_174; // 0x250
	::System::Collections::Generic::IEnumerable_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_236; // 0x258
	::System::Collections::Generic::IList_1<::MoleMole::EntityHandle>* Field_1_248; // 0x260
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_217; // 0x268
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_262; // 0x270
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector2>* Field_1_204; // 0x278
	::NodeCanvas::Framework::Variable_1<::System::Int32>* Field_1_227; // 0x280
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Single>* Field_1_168; // 0x288
	::FlowCanvas::Nodes::SendEvent_1<::System::Boolean>* Field_1_143; // 0x290
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_38; // 0x298
	::FlowCanvas::Nodes::SetVariable_1<::System::Single>* Field_1_161; // 0x2A0
	::FlowCanvas::BinderConnection_1<::MoleMole::StatusEffectType>* Field_1_52; // 0x2A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_150; // 0x2B0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_188; // 0x2B8
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_70; // 0x2C0
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_129; // 0x2C8
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Single>* Field_1_121; // 0x2D0
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Int32>* Field_1_120; // 0x2D8
	::System::Collections::Generic::IEnumerable_1<::System::Single>* Field_1_245; // 0x2E0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_265; // 0x2E8
	::System::Collections::Generic::IList_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_249; // 0x2F0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector3>* Field_1_63; // 0x2F8
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_134; // 0x300
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_185; // 0x308
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_220; // 0x310
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Vector3>* Field_1_164; // 0x318
	::NodeCanvas::Framework::BBParameter_1<::System::Int32>* Field_1_200; // 0x320
	::System::Collections::Generic::IEnumerable_1<::System::Boolean>* Field_1_243; // 0x328
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_91; // 0x330
	::FlowCanvas::BinderConnection_1<::MoleMole::Vector2Int>* Field_1_54; // 0x338
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_26; // 0x340
	::FlowCanvas::BinderConnection_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_49; // 0x348
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::GameplayTag>* Field_1_99; // 0x350
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_95; // 0x358
	::System::Collections::Generic::IEnumerable_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_238; // 0x360
	::FlowCanvas::Nodes::LDForeachNext_1<::System::UInt32>* Field_1_117; // 0x368
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Level::RatingType>* Field_1_100; // 0x370
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_30; // 0x378
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_132; // 0x380
	::FlowCanvas::Nodes::LDForeachNext_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_115; // 0x388
	::System::Collections::Generic::IEnumerable_1<::MoleMole::GameplayTag>* Field_1_241; // 0x390
	::FlowCanvas::BinderConnection_1<::System::Boolean>* Field_1_57; // 0x398
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Int32>* Field_1_167; // 0x3A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::GameplayTag>* Field_1_194; // 0x3A8
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_46; // 0x3B0
	::FlowCanvas::Nodes::ForEach_1<::System::Int32>* Field_1_76; // 0x3B8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_96; // 0x3C0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_22; // 0x3C8
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::WeatherType>* Field_1_9; // 0x3D0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MonsterStrengthType>* Field_1_7; // 0x3D8
	::System::Collections::Generic::IEnumerable_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_240; // 0x3E0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_29; // 0x3E8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_89; // 0x3F0
	::FlowCanvas::Nodes::SetVariable_1<::System::UInt32>* Field_1_162; // 0x3F8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_17; // 0x400
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_235; // 0x408
	::FlowCanvas::Nodes::SetVariable_1<::System::Boolean>* Field_1_159; // 0x410
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_211; // 0x418
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_127; // 0x420
	::FlowCanvas::Nodes::GetVariable_1<::System::Boolean>* Field_1_104; // 0x428
	::FlowCanvas::Nodes::GetVariable_1<::UnityEngine::Vector3>* Field_1_109; // 0x430
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::EntityHandle>* Field_1_71; // 0x438
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_212; // 0x440
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_34; // 0x448
	::FlowCanvas::Nodes::Identity_1<::System::UInt32>* Field_1_113; // 0x450
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_19; // 0x458
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_32; // 0x460
	::NodeCanvas::Framework::Variable_1<::MoleMole::EntityHandle>* Field_1_209; // 0x468
	::FlowCanvas::BinderConnection_1<::System::UInt32>* Field_1_60; // 0x470
	::FlowCanvas::Nodes::TryGetValue_1<::System::Int32>* Field_1_165; // 0x478
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_97; // 0x480
	::FlowCanvas::Nodes::AddListItem_1<::System::Int32>* Field_1_66; // 0x488
	::FlowCanvas::Nodes::GetRandomListItem_1<::System::Int32>* Field_1_83; // 0x490
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_192; // 0x498
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Config::WeatherType>* Field_1_85; // 0x4A0
	::FlowCanvas::Nodes::ForEach_1<::System::Single>* Field_1_77; // 0x4A8
	::FlowCanvas::Nodes::LDForeachNext_1<::System::Int32>* Field_1_116; // 0x4B0
	::FlowCanvas::Nodes::LDForeachNext_1<::UnityEngine::Vector3>* Field_1_118; // 0x4B8
	::System::Collections::Generic::IEnumerable_1<::MoleMole::EntityHandle>* Field_1_237; // 0x4C0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_182; // 0x4C8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* Field_1_98; // 0x4D0
	::System::Collections::Generic::IList_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_250; // 0x4D8
	::FlowCanvas::Nodes::Identity_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_111; // 0x4E0
	::NodeCanvas::Framework::Variable_1<::UnityEngine::Vector3>* Field_1_231; // 0x4E8
	::FlowCanvas::Nodes::GetVariable_1<::System::UInt32>* Field_1_107; // 0x4F0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* Field_1_205; // 0x4F8
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::GameplayTag>* Field_1_73; // 0x500
	::FlowCanvas::ValueInput_1<::MoleMole::EntityHandle>* Field_1_169; // 0x508
	::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* Field_1_199; // 0x510
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_122; // 0x518
	::FlowCanvas::BinderConnection_1<::Foundation::Unreal::FTransform3D>* Field_1_1; // 0x520
	::FlowCanvas::Nodes::RelayValueInput_1<::System::Single>* Field_1_139; // 0x528
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_152; // 0x530
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_214; // 0x538
	::System::Collections::Generic::IEnumerable_1<::System::Int32>* Field_1_244; // 0x540
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_16; // 0x548
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_210; // 0x550
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::Vector2Int>* Field_1_103; // 0x558
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_72; // 0x560
	::FlowCanvas::BinderConnection_1<::MoleMole::ChessEntityType>* Field_1_4; // 0x568
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_130; // 0x570
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::EntityHandle>* Field_1_86; // 0x578
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::GameplayTag>* Field_1_133; // 0x580
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_48; // 0x588
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_191; // 0x590
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_190; // 0x598
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGameDamageData>* Field_1_42; // 0x5A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Level::RatingType>* Field_1_195; // 0x5A8
	::FlowCanvas::BinderConnection_1<::System::Single>* Field_1_59; // 0x5B0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_35; // 0x5B8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_170; // 0x5C0
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_135; // 0x5C8
	::FlowCanvas::BinderConnection_1<::PipelineCamera::FinalCameraData>* Field_1_55; // 0x5D0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Quaternion>* Field_1_61; // 0x5D8
	::FlowCanvas::BinderConnection_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_12; // 0x5E0
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::TimePeriodType>* Field_1_207; // 0x5E8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_36; // 0x5F0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_151; // 0x5F8
	::FlowCanvas::Nodes::RelayValueInput_1<::System::Int32>* Field_1_138; // 0x600
	::FlowCanvas::Nodes::CustomEvent_1<::System::Int32>* Field_1_69; // 0x608
	::System::Collections::Generic::IList_1<::System::Int32>* Field_1_252; // 0x610
	::System::Collections::Generic::IEnumerable_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_242; // 0x618
	::NodeCanvas::Framework::Variable_1<::MoleMole::Config::CampType>* Field_1_206; // 0x620
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_257; // 0x628
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::TimePeriodType>* Field_1_146; // 0x630
	::NodeCanvas::Framework::Variable_1<::System::Boolean>* Field_1_226; // 0x638
	::FlowCanvas::Nodes::SetListItem_1<::System::Boolean>* Field_1_145; // 0x640
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowEntity*>* Field_1_233; // 0x648
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::TimePeriodType>* Field_1_8; // 0x650
	::NodeCanvas::Framework::Variable_1<::MoleMole::GameplayTag>* Field_1_221; // 0x658
	::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_256; // 0x660
	::FlowCanvas::BinderConnection_1<::MoleMole::GameplayTag>* Field_1_41; // 0x668
	::FlowCanvas::Nodes::GetListItem_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_80; // 0x670
	::NodeCanvas::Framework::BBParameter_1<::System::UInt32>* Field_1_202; // 0x678
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_131; // 0x680
	::System::Collections::Generic::List_1<::System::Single>* Field_1_263; // 0x688
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_128; // 0x690
	::FlowCanvas::Nodes::SelectOnBool_1<::System::Boolean>* Field_1_141; // 0x698
	::FlowCanvas::Nodes::Identity_1<::MoleMole::HackerGameDamageData>* Field_1_110; // 0x6A0
	::FlowCanvas::Nodes::WriteFlowParameter_1<::System::Boolean>* Field_1_166; // 0x6A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_153; // 0x6B0
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_102; // 0x6B8
	::NodeCanvas::Framework::Variable_1<::System::Single>* Field_1_228; // 0x6C0
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_47; // 0x6C8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int>>* Field_1_193; // 0x6D0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_197; // 0x6D8
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector2>* Field_1_62; // 0x6E0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_24; // 0x6E8
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_215; // 0x6F0
	::FlowCanvas::BinderConnection_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_10; // 0x6F8
	::FlowCanvas::Nodes::CustomEvent_1<::System::Boolean>* Field_1_68; // 0x700
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_186; // 0x708
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_31; // 0x710
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_261; // 0x718
	::FlowCanvas::Nodes::SelectOnBool_1<::System::Int32>* Field_1_142; // 0x720
	::NodeCanvas::Framework::Variable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_222; // 0x728
	::NodeCanvas::Framework::Variable_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_219; // 0x730
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_88; // 0x738
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::CampType>* Field_1_6; // 0x740
	::FlowCanvas::Nodes::SendEvent_1<::System::Int32>* Field_1_144; // 0x748
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::GameplayTag>* Field_1_156; // 0x750
	::FlowCanvas::Nodes::RelayValueOutput_1<::System::Int32>* Field_1_140; // 0x758
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_25; // 0x760
	::FlowCanvas::Nodes::ReadFlowParameter_1<::System::Boolean>* Field_1_119; // 0x768
	::FlowCanvas::Nodes::ReflectedExtractorNodeWrapper_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_123; // 0x770
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_28; // 0x778
	::System::Collections::Generic::IList_1<::System::Boolean>* Field_1_251; // 0x780
	::NodeCanvas::Framework::Variable_1<::System::UInt32>* Field_1_229; // 0x788
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Vector2Int>* Field_1_198; // 0x790
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_158; // 0x798
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::EntityHandle>* Field_1_181; // 0x7A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::WeatherType>* Field_1_180; // 0x7A8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::StatusEffectType>* Field_1_196; // 0x7B0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::KeyCode>* Field_1_203; // 0x7B8
	::FlowCanvas::BinderConnection_1<::Share::GridDir>* Field_1_56; // 0x7C0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Vector2>* Field_1_163; // 0x7C8
	::FlowCanvas::Nodes::GetVariable_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_94; // 0x7D0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ChessEntity*>* Field_1_234; // 0x7D8
	::FlowCanvas::Nodes::Identity_1<::System::Int32>* Field_1_112; // 0x7E0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Level::RatingType>* Field_1_157; // 0x7E8
	::NodeCanvas::Framework::Variable_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_224; // 0x7F0
	::FlowCanvas::BinderConnection_1<::MoleMole::AbyssS2_EventType>* Field_1_2; // 0x7F8
	::FlowCanvas::Nodes::ForEach_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_74; // 0x800
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_154; // 0x808
	::FlowCanvas::Nodes::GetListIsEmpty_1<::System::Int32>* Field_1_79; // 0x810
	::NodeCanvas::Framework::BBParameter_1<::System::Single>* Field_1_201; // 0x818
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_45; // 0x820
	::FlowCanvas::BinderConnection_1<::MoleMole::EntityHandle>* Field_1_14; // 0x828
	::FlowCanvas::BinderConnection_1<::MoleMole::FairyTextUpdateType>* Field_1_15; // 0x830
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_20; // 0x838
	::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeVisible> Field_1_178; // 0x840
	::MoleMole::FlowCanvas::Optional_1<::MoleMole::Vector2Int> Field_1_175; // 0x848
	::MoleMole::FlowCanvas::Optional_1<::Enum_3_7CF131C413C919AF> Field_1_176; // 0x854
	::MoleMole::FlowCanvas::Optional_1<::ProtoScript::NodeState> Field_1_177; // 0x85C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_3574512695A597AB_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_1_A2458167D7752575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_A2458167D7752575_OFFSET))(this);
	}

	::System::Void Method_1_2A63F6B581CB1CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_2A63F6B581CB1CA9_OFFSET))(this);
	}

	::System::Void Method_1_E596C3AA2D8708A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_E596C3AA2D8708A5_OFFSET))(this);
	}

	::System::Void Method_1_4FFFF6F96B26E95A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_4FFFF6F96B26E95A_OFFSET))(this);
	}

	::System::Void Method_1_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_1_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_35A1A641353400E6_OFFSET))(this);
	}

	::System::Void Method_1_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_A1F9BFB7EBB25DAC_OFFSET))(this);
	}

	::System::Void Method_1_6E5FCBBC887ED8B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_6E5FCBBC887ED8B7_OFFSET))(this);
	}

	::System::Void Method_1_2A63F6B581CB1CA9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_2A63F6B581CB1CA9_1_OFFSET))(this);
	}

	::System::Void Method_1_C3CD621FE895B79A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_C3CD621FE895B79A_OFFSET))(this);
	}

	::System::Void Method_1_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_1_E596C3AA2D8708A5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_E596C3AA2D8708A5_1_OFFSET))(this);
	}

	::System::Void Method_1_775B6D644F07B554_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_775B6D644F07B554_1_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_78037B64B814568E_OFFSET))(this);
	}

	::System::Void Method_1_4256453CFEAAC957()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_4256453CFEAAC957_OFFSET))(this);
	}

	::System::Void Method_1_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_METHOD_1_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
