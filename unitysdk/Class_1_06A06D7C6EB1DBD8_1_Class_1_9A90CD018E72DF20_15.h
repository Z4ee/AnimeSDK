#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CF131C413C919AF.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedFieldNodeWrapper_AccessMode.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/MoleMole/AbyssS2_EventType.h"
#include "unitysdk/MoleMole/AnimStateCheckType.h"
#include "unitysdk/MoleMole/BabelTowerTemplateOverrideData.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_LiftMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveDirection.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveMode.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_MoveType.h"
#include "unitysdk/MoleMole/Battle/CurveMoveComponent_Config_SpeedMode.h"
#include "unitysdk/MoleMole/Battle/GamePlayLogicKind.h"
#include "unitysdk/MoleMole/Battle/LevelQuestConditionOperation.h"
#include "unitysdk/MoleMole/Battle/LevelQuestOperation.h"
#include "unitysdk/MoleMole/Battle/MonsterAlertInitParams.h"
#include "unitysdk/MoleMole/BubbleType.h"
#include "unitysdk/MoleMole/Cameras/SideScrollingReturnActCameraPolarType.h"
#include "unitysdk/MoleMole/ChessEntityType.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/Config/AbilitySpecialParamType.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/MoleMole/Config/InputType.h"
#include "unitysdk/MoleMole/Config/ModifierStacking.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatItem.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BeatType.h"
#include "unitysdk/MoleMole/ConfigRhythmMoveBeatMap_BeatMap_BlockType.h"
#include "unitysdk/MoleMole/DoubleEliteCardInfo.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/EvtDestructionSwitchType.h"
#include "unitysdk/MoleMole/FairyTextUpdateType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardChangePieceInfo_ServerInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardPlayPostEffect_Config.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_FilterParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_IndexSearchInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_SearchParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_CanvasRTParams.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessShowUIView_MiniGameUIType.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCameraStretch_ParaInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcDamageType.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcStringValueType.h"
#include "unitysdk/MoleMole/FlowCanvas/HackerGameNpcValueType.h"
#include "unitysdk/MoleMole/FlowCanvas/HollowEntityMoveEvent_Param.h"
#include "unitysdk/MoleMole/FlowCanvas/LDDestroyEntity_DestroyEntityType.h"
#include "unitysdk/MoleMole/FlowCanvas/MonsterPositionDuty.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AIParamType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorPointForwardAxis.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AnchorWithStyle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/AreaIDTag.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChallengeQuestType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardRhythmMoveInputHandler_JudgeResult.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardUpdateStateMachineParams_StateMachineParamsWrapper.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CountDownUIOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EDoorOperation.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EFCLogLevel.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/FocusUISpecialIconParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/HollowSystemStateType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InLevelMissionTipSourceType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/InteractionEndSuddenEventMsg.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIData.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDDTargetAreaUIDataAdapter.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetRhombusOffsetPosition_RhombusFType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDGetRhombusOffsetPosition_RhombusMType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelEndNode_LevelEndPerformType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDLevelZeroGetRoomIndexNode_RoomFormat.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDListenAvatarNode_ListenAvatarTargetType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDReadDailyCardData_MonsterInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSceneMovePauseNode_PauseType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_InLevelStateEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSetInLevelStateGroup_StateGroupEnum.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDSound_TargetType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LDTurnBasedGetEnemyMonsterList_Element.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_ReadMonsterFromCardData_CardMonsterInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParam.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterCreateDataAnimatorParamType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterIDType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NapCameraSequenceHandle.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/NumberCompareType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/PerformType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetArrowUIKind.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/TargetUIOperation.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/MoleMole/HackerGameCliParamType.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/HackerGamePlayerAttachEffectData.h"
#include "unitysdk/MoleMole/HackerGamePlayerEffectTypeChangedData.h"
#include "unitysdk/MoleMole/HackerGamePlayerOnDamagedData.h"
#include "unitysdk/MoleMole/HollowChessboard/HackerGameCollisionData.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowConstant_RenderPriority.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowEntityMoveComponent_MoveCmd_Dir.h"
#include "unitysdk/MoleMole/HollowEntityConfig_CampType.h"
#include "unitysdk/MoleMole/HollowPieceBlendMode.h"
#include "unitysdk/MoleMole/InLevelCustomPerformerRunnerEnvironment.h"
#include "unitysdk/MoleMole/InLevelTimerWidgetOperation.h"
#include "unitysdk/MoleMole/Level/BangbooPlayType.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/MoleMole/MultiTaskNodeHandle.h"
#include "unitysdk/MoleMole/Project/Config/MonsterGroupTemplateExt_MonsterTypeEnum.h"
#include "unitysdk/MoleMole/ScoreUIAnimationType.h"
#include "unitysdk/MoleMole/SpawnPointMaskRegion.h"
#include "unitysdk/MoleMole/StatusEffectType.h"
#include "unitysdk/MoleMole/TaskCompletionSourceNodeHandle.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryFilter.h"
#include "unitysdk/MoleMole/TurnBattleUnitQueryKey.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/ProtoScript/AimRectColor.h"
#include "unitysdk/ProtoScript/ChessUIControlType.h"
#include "unitysdk/ProtoScript/ChessUIIconType.h"
#include "unitysdk/ProtoScript/EndHollowMiniGameType.h"
#include "unitysdk/ProtoScript/HollowSystemType.h"
#include "unitysdk/ProtoScript/HollowSystemUIState.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"
#include "unitysdk/ProtoScript/PostEffectType.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/Keyframe.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDDGenericDataSource_1; }
namespace MoleMole::FlowCanvas::Nodes { template <typename T> class LDReverseList_1; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework { template <typename T> class ExposedParameter_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define CLASS_1_06A06D7C6EB1DBD8_1_CLASS_1_9A90CD018E72DF20_15__CTOR_OFFSET UNITYSDK_OFFSET(0x12420650)

inline static constexpr unsigned int Class_1_06A06D7C6EB1DBD8_1_Class_1_9A90CD018E72DF20_15_TypeDefinitionIndex = 95405;

class Class_1_06A06D7C6EB1DBD8_1_Class_1_9A90CD018E72DF20_15 : public ::System::Object
{
public:
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_548; // 0x10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_263; // 0x18
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_409; // 0x20
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_392; // 0x28
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_110; // 0x30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_221; // 0x38
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_96; // 0x40
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_99; // 0x48
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_290; // 0x50
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::LayerMask>* Field_1_608; // 0x58
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_274; // 0x60
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_109; // 0x68
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_25; // 0x70
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::HollowSystemType>* Field_1_311; // 0x78
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::AnimStateCheckType>* Field_1_181; // 0x80
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::NodeVisible>* Field_1_606; // 0x88
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_86; // 0x90
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_593; // 0x98
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::CampType>* Field_1_379; // 0xA0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_41; // 0xA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_390; // 0xB0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_573; // 0xB8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MonsterFunctionType>* Field_1_68; // 0xC0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::KeyCode>* Field_1_609; // 0xC8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_375; // 0xD0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_214; // 0xD8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_95; // 0xE0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::PipelineCamera::FinalCameraData>* Field_1_301; // 0xE8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_518; // 0xF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_94; // 0xF8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Enum_3_7CF131C413C919AF>* Field_1_140; // 0x100
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_222; // 0x108
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::InputType>* Field_1_70; // 0x110
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RaycastHit>* Field_1_19; // 0x118
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::MultiTaskNodeHandle>* Field_1_207; // 0x120
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_118; // 0x128
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::ChessUIControlType>* Field_1_442; // 0x130
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_355; // 0x138
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Ray>* Field_1_17; // 0x140
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_132; // 0x148
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_186; // 0x150
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::ContactPoint>* Field_1_466; // 0x158
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_486; // 0x160
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::EntityHandle>* Field_1_35; // 0x168
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_287; // 0x170
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_494; // 0x178
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::BaseProperty>* Field_1_516; // 0x180
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_130; // 0x188
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_196; // 0x190
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_427; // 0x198
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_105; // 0x1A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_275; // 0x1A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_223; // 0x1B0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_434; // 0x1B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Space>* Field_1_16; // 0x1C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_248; // 0x1C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Level::BangbooPlayType>* Field_1_137; // 0x1D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::MultiTaskNodeHandle>* Field_1_47; // 0x1D8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_477; // 0x1E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGameDamageData>* Field_1_38; // 0x1E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_197; // 0x1F0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::EntityType>* Field_1_64; // 0x1F8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ChessEntityType>* Field_1_29; // 0x200
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::BubbleType>* Field_1_341; // 0x208
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::HollowSystemUIState>* Field_1_150; // 0x210
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Space>* Field_1_177; // 0x218
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_74; // 0x220
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_411; // 0x228
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Collision2D*>* Field_1_12; // 0x230
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_405; // 0x238
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_360; // 0x240
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RaycastHit>* Field_1_470; // 0x248
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGameDamageData>* Field_1_198; // 0x250
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_553; // 0x258
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_283; // 0x260
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::EvtDestructionSwitchType>* Field_1_344; // 0x268
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_30; // 0x270
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_122; // 0x278
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_81; // 0x280
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_243; // 0x288
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::InputType>* Field_1_520; // 0x290
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_213; // 0x298
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_569; // 0x2A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_549; // 0x2A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Boolean>* Field_1_163; // 0x2B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_269; // 0x2B8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector4>* Field_1_166; // 0x2C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Boolean>* Field_1_1; // 0x2C8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_590; // 0x2D0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_260; // 0x2D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_187; // 0x2E0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::EvtDestructionSwitchType>* Field_1_484; // 0x2E8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_73; // 0x2F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::InlevelCameraState>* Field_1_231; // 0x2F8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::BubbleType>* Field_1_31; // 0x300
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_104; // 0x308
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_295; // 0x310
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_398; // 0x318
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::ModifierStacking>* Field_1_527; // 0x320
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::EvtDestructionSwitchType>* Field_1_34; // 0x328
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Bounds>* Field_1_461; // 0x330
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_498; // 0x338
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_478; // 0x340
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_63; // 0x348
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_532; // 0x350
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::GameplayTag>* Field_1_32; // 0x358
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_126; // 0x360
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Collision*>* Field_1_174; // 0x368
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_588; // 0x370
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_284; // 0x378
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::PostEffectType>* Field_1_451; // 0x380
	::NodeCanvas::Framework::ExposedParameter_1<::Share::GridDir>* Field_1_604; // 0x388
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_58; // 0x390
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_298; // 0x398
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_247; // 0x3A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_524; // 0x3A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Vector2Int>* Field_1_208; // 0x3B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_89; // 0x3B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_113; // 0x3C0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_555; // 0x3C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FairyTextUpdateType>* Field_1_33; // 0x3D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::AbyssS2_EventType>* Field_1_472; // 0x3D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::UInt32>* Field_1_312; // 0x3E0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_242; // 0x3E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_217; // 0x3F0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::AnimStateCheckType>* Field_1_338; // 0x3F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_413; // 0x400
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::AbilityTargetting>* Field_1_517; // 0x408
	::NodeCanvas::Framework::BBParameter_1<::System::Char>* Field_1_449; // 0x410
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::WrapMode>* Field_1_156; // 0x418
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_138; // 0x420
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_531; // 0x428
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_256; // 0x430
	::NodeCanvas::Framework::BBParameter_1<::Share::GridDir>* Field_1_450; // 0x438
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_281; // 0x440
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_512; // 0x448
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_90; // 0x450
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::MultiTaskNodeHandle>* Field_1_358; // 0x458
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_551; // 0x460
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_435; // 0x468
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Char>* Field_1_313; // 0x470
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_337; // 0x478
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_220; // 0x480
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_106; // 0x488
	::NodeCanvas::Framework::ExposedParameter_1<::System::UInt32>* Field_1_610; // 0x490
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::KeyCode>* Field_1_159; // 0x498
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_542; // 0x4A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::TimePeriodType>* Field_1_78; // 0x4A8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Rect>* Field_1_326; // 0x4B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::HollowSystemUIState>* Field_1_310; // 0x4B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_76; // 0x4C0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_563; // 0x4C8
	::NodeCanvas::Framework::ExposedParameter_1<::Enum_3_7CF131C413C919AF>* Field_1_598; // 0x4D0
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::NodeState>* Field_1_607; // 0x4D8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_84; // 0x4E0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Collision2D*>* Field_1_330; // 0x4E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_210; // 0x4F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RaycastHit2D>* Field_1_179; // 0x4F8
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::ChessUIIconType>* Field_1_603; // 0x500
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_367; // 0x508
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_567; // 0x510
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_117; // 0x518
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_93; // 0x520
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_541; // 0x528
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::ModifierStacking>* Field_1_383; // 0x530
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_550; // 0x538
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_250; // 0x540
	::NodeCanvas::Framework::ExposedParameter_1<::System::Char>* Field_1_611; // 0x548
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_439; // 0x550
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_114; // 0x558
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_388; // 0x560
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_556; // 0x568
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_431; // 0x570
	::NodeCanvas::Framework::ExposedParameter_1<::System::Int32>* Field_1_459; // 0x578
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::ChessUIIconType>* Field_1_305; // 0x580
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::TimePeriodType>* Field_1_528; // 0x588
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_501; // 0x590
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ChessEntityType>* Field_1_480; // 0x598
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::BaseProperty>* Field_1_226; // 0x5A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_508; // 0x5A8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Level::RatingType>* Field_1_594; // 0x5B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Bounds>* Field_1_10; // 0x5B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::AbilityTargetting>* Field_1_373; // 0x5C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_40; // 0x5C8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_342; // 0x5D0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_393; // 0x5D8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_119; // 0x5E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_28; // 0x5E8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MonsterFunctionType>* Field_1_382; // 0x5F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_511; // 0x5F8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::AbilityTargetting>* Field_1_67; // 0x600
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_406; // 0x608
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_540; // 0x610
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::AbyssS2_EventType>* Field_1_182; // 0x618
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_259; // 0x620
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Collision*>* Field_1_464; // 0x628
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_580; // 0x630
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_37; // 0x638
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::ContactPoint>* Field_1_325; // 0x640
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Foundation::Unreal::FTransform3D>* Field_1_22; // 0x648
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_255; // 0x650
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_236; // 0x658
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_514; // 0x660
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Color>* Field_1_9; // 0x668
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_536; // 0x670
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::NodeState>* Field_1_445; // 0x678
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_261; // 0x680
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowPieceBlendMode>* Field_1_202; // 0x688
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_364; // 0x690
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_251; // 0x698
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Int32>* Field_1_161; // 0x6A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_343; // 0x6A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::InputType>* Field_1_230; // 0x6B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_267; // 0x6B8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::AbilityTargetting>* Field_1_227; // 0x6C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_239; // 0x6C8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Quaternion>* Field_1_463; // 0x6D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_133; // 0x6D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::ChessUIControlType>* Field_1_306; // 0x6E0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_340; // 0x6E8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Quaternion>* Field_1_322; // 0x6F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_587; // 0x6F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_389; // 0x700
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Level::RatingType>* Field_1_136; // 0x708
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_566; // 0x710
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_59; // 0x718
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MonsterStrengthType>* Field_1_525; // 0x720
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_262; // 0x728
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_218; // 0x730
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector2>* Field_1_458; // 0x738
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Collision2D*>* Field_1_471; // 0x740
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_254; // 0x748
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_62; // 0x750
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_240; // 0x758
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_510; // 0x760
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_191; // 0x768
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_581; // 0x770
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::MultiTaskNodeHandle>* Field_1_497; // 0x778
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::ScreenEffectType>* Field_1_530; // 0x780
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_414; // 0x788
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_559; // 0x790
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FairyTextUpdateType>* Field_1_491; // 0x798
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector3>* Field_1_167; // 0x7A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::ModifierStacking>* Field_1_69; // 0x7A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::ContactPoint>* Field_1_15; // 0x7B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::NodeVisible>* Field_1_148; // 0x7B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_384; // 0x7C0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_529; // 0x7C8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Space>* Field_1_475; // 0x7D0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector4>* Field_1_456; // 0x7D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_345; // 0x7E0
	::NodeCanvas::Framework::ExposedParameter_1<::Foundation::Unreal::FTransform3D>* Field_1_473; // 0x7E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Foundation::Unreal::FTransform3D>* Field_1_183; // 0x7F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RigidbodyConstraints>* Field_1_317; // 0x7F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::PostEffectType>* Field_1_315; // 0x800
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_422; // 0x808
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::PostEffectType>* Field_1_155; // 0x810
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_504; // 0x818
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_264; // 0x820
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::ChessUIIconType>* Field_1_145; // 0x828
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::ContactPoint2D>* Field_1_465; // 0x830
	::NodeCanvas::Framework::BBParameter_1<::Foundation::Unreal::FTransform3D>* Field_1_332; // 0x838
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_430; // 0x840
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowPieceBlendMode>* Field_1_42; // 0x848
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_27; // 0x850
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_515; // 0x858
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::EntityHandle>* Field_1_195; // 0x860
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::ContactPoint2D>* Field_1_14; // 0x868
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::NodeVisible>* Field_1_444; // 0x870
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::ModifierStacking>* Field_1_229; // 0x878
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_134; // 0x880
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_412; // 0x888
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_56; // 0x890
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::NodeVisible>* Field_1_308; // 0x898
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::EntityType>* Field_1_522; // 0x8A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_570; // 0x8A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Keyframe>* Field_1_164; // 0x8B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::InlevelCameraState>* Field_1_71; // 0x8B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_417; // 0x8C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Char>* Field_1_153; // 0x8C8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGameDamageData>* Field_1_349; // 0x8D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ParadoxNotion::OperationMethod>* Field_1_142; // 0x8D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_303; // 0x8E0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Collision*>* Field_1_331; // 0x8E8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_370; // 0x8F0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_135; // 0x8F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_292; // 0x900
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::StatusEffectType>* Field_1_44; // 0x908
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_265; // 0x910
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_53; // 0x918
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Rect>* Field_1_169; // 0x920
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_359; // 0x928
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_257; // 0x930
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_576; // 0x938
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_285; // 0x940
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_395; // 0x948
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ChessEntityType>* Field_1_190; // 0x950
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_534; // 0x958
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_577; // 0x960
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector2>* Field_1_160; // 0x968
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_116; // 0x970
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::HollowSystemUIState>* Field_1_600; // 0x978
	::NodeCanvas::Framework::ExposedParameter_1<::ParadoxNotion::OperationMethod>* Field_1_592; // 0x980
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_241; // 0x988
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_111; // 0x990
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MonsterFunctionType>* Field_1_526; // 0x998
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Quaternion>* Field_1_4; // 0x9A0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector3>* Field_1_457; // 0x9A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::AimRectColor>* Field_1_307; // 0x9B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_249; // 0x9B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_368; // 0x9C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_252; // 0x9C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::HollowSystemType>* Field_1_151; // 0x9D0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ParadoxNotion::OperationMethod>* Field_1_302; // 0x9D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_424; // 0x9E0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Keyframe>* Field_1_462; // 0x9E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_507; // 0x9F0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_399; // 0x9F8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_560; // 0xA00
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::NodeState>* Field_1_309; // 0xA08
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::ContactPoint2D>* Field_1_324; // 0xA10
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_543; // 0xA18
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_544; // 0xA20
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_407; // 0xA28
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::AimRectColor>* Field_1_147; // 0xA30
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_495; // 0xA38
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_513; // 0xA40
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_505; // 0xA48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_131; // 0xA50
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Bounds>* Field_1_320; // 0xA58
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Rect>* Field_1_467; // 0xA60
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_589; // 0xA68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_246; // 0xA70
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_272; // 0xA78
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::HollowSystemType>* Field_1_447; // 0xA80
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_87; // 0xA88
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Rect>* Field_1_8; // 0xA90
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_212; // 0xA98
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_500; // 0xAA0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::BaseProperty>* Field_1_66; // 0xAA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_420; // 0xAB0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MonsterStrengthType>* Field_1_381; // 0xAB8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_97; // 0xAC0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_539; // 0xAC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_79; // 0xAD0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_143; // 0xAD8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Level::BangbooPlayType>* Field_1_297; // 0xAE0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RigidbodyConstraints>* Field_1_615; // 0xAE8
	::NodeCanvas::Framework::ExposedParameter_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_474; // 0xAF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_107; // 0xAF8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_123; // 0xB00
	::NodeCanvas::Framework::ExposedParameter_1<::System::Boolean>* Field_1_453; // 0xB08
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector4>* Field_1_323; // 0xB10
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::HollowSystemType>* Field_1_601; // 0xB18
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_219; // 0xB20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector3>* Field_1_6; // 0xB28
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::AnimStateCheckType>* Field_1_479; // 0xB30
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_574; // 0xB38
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector4>* Field_1_5; // 0xB40
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_209; // 0xB48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Level::BangbooPlayType>* Field_1_595; // 0xB50
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::ScreenEffectType>* Field_1_72; // 0xB58
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MonsterStrengthType>* Field_1_75; // 0xB60
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_128; // 0xB68
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_43; // 0xB70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_583; // 0xB78
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Space>* Field_1_334; // 0xB80
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_200; // 0xB88
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::ChessUIIconType>* Field_1_441; // 0xB90
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_582; // 0xB98
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_558; // 0xBA0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_387; // 0xBA8
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::AimRectColor>* Field_1_597; // 0xBB0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Color>* Field_1_460; // 0xBB8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ScoreUIAnimationType>* Field_1_46; // 0xBC0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_234; // 0xBC8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Single>* Field_1_162; // 0xBD0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_115; // 0xBD8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_85; // 0xBE0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_245; // 0xBE8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_571; // 0xBF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_26; // 0xBF8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_584; // 0xC00
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_402; // 0xC08
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_537; // 0xC10
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::AnimStateCheckType>* Field_1_20; // 0xC18
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_276; // 0xC20
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_286; // 0xC28
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_578; // 0xC30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::BubbleType>* Field_1_184; // 0xC38
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::GameplayTag>* Field_1_490; // 0xC40
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_271; // 0xC48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_575; // 0xC50
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Ray>* Field_1_178; // 0xC58
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_423; // 0xC60
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_233; // 0xC68
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_499; // 0xC70
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_397; // 0xC78
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::StatusEffectType>* Field_1_502; // 0xC80
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_564; // 0xC88
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Share::GridDir>* Field_1_314; // 0xC90
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_102; // 0xC98
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_258; // 0xCA0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MonsterStrengthType>* Field_1_235; // 0xCA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_426; // 0xCB0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ScoreUIAnimationType>* Field_1_206; // 0xCB8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_554; // 0xCC0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_425; // 0xCC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_98; // 0xCD0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_572; // 0xCD8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_366; // 0xCE0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RigidbodyConstraints>* Field_1_455; // 0xCE8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_352; // 0xCF0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_201; // 0xCF8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_493; // 0xD00
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_60; // 0xD08
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_280; // 0xD10
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_579; // 0xD18
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::SpawnPointMaskRegion>* Field_1_503; // 0xD20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_82; // 0xD28
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_266; // 0xD30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::ContactPoint>* Field_1_168; // 0xD38
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_408; // 0xD40
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Color>* Field_1_327; // 0xD48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_54; // 0xD50
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_50; // 0xD58
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::EvtDestructionSwitchType>* Field_1_194; // 0xD60
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGameCliParamType>* Field_1_199; // 0xD68
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_545; // 0xD70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_562; // 0xD78
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_288; // 0xD80
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Level::BangbooPlayType>* Field_1_432; // 0xD88
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_400; // 0xD90
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RigidbodyConstraints>* Field_1_157; // 0xD98
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_253; // 0xDA0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_129; // 0xDA8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RaycastHit2D>* Field_1_328; // 0xDB0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_371; // 0xDB8
	::NodeCanvas::Framework::BBParameter_1<::PipelineCamera::FinalCameraData>* Field_1_437; // 0xDC0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Ray>* Field_1_468; // 0xDC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::PipelineCamera::FinalCameraData>* Field_1_141; // 0xDD0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::EndHollowMiniGameType>* Field_1_304; // 0xDD8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RaycastHit2D>* Field_1_469; // 0xDE0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_120; // 0xDE8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MonsterFunctionType>* Field_1_228; // 0xDF0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_268; // 0xDF8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::UInt32>* Field_1_152; // 0xE00
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::InlevelCameraState>* Field_1_521; // 0xE08
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::BaseProperty>* Field_1_372; // 0xE10
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_348; // 0xE18
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_557; // 0xE20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::SpawnPointMaskRegion>* Field_1_45; // 0xE28
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Single>* Field_1_0; // 0xE30
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::AbyssS2_EventType>* Field_1_21; // 0xE38
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_552; // 0xE40
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_273; // 0xE48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::CampType>* Field_1_523; // 0xE50
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_36; // 0xE58
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::ScreenEffectType>* Field_1_232; // 0xE60
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_49; // 0xE68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::EntityType>* Field_1_224; // 0xE70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_476; // 0xE78
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::CampType>* Field_1_65; // 0xE80
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::WeatherType>* Field_1_535; // 0xE88
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_519; // 0xE90
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Share::GridDir>* Field_1_154; // 0xE98
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::DoubleEliteCardInfo>* Field_1_487; // 0xEA0
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::AimRectColor>* Field_1_443; // 0xEA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::SpawnPointMaskRegion>* Field_1_356; // 0xEB0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::InlevelCameraState>* Field_1_377; // 0xEB8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::AbyssS2_EventType>* Field_1_339; // 0xEC0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_80; // 0xEC8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::LayerMask>* Field_1_318; // 0xED0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_396; // 0xED8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGameCliParamType>* Field_1_39; // 0xEE0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_127; // 0xEE8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_52; // 0xEF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Vector2Int>* Field_1_48; // 0xEF8
	::NodeCanvas::Framework::BBParameter_1<::Enum_3_7CF131C413C919AF>* Field_1_436; // 0xF00
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_586; // 0xF08
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_547; // 0xF10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::StatusEffectType>* Field_1_204; // 0xF18
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RaycastHit>* Field_1_329; // 0xF20
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_216; // 0xF28
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Quaternion>* Field_1_165; // 0xF30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_176; // 0xF38
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_354; // 0xF40
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_277; // 0xF48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_585; // 0xF50
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_100; // 0xF58
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowPieceBlendMode>* Field_1_353; // 0xF60
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_374; // 0xF68
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::EndHollowMiniGameType>* Field_1_602; // 0xF70
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_108; // 0xF78
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_180; // 0xF80
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_361; // 0xF88
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGameCliParamType>* Field_1_350; // 0xF90
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_24; // 0xF98
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_270; // 0xFA0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_481; // 0xFA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_419; // 0xFB0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_124; // 0xFB8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::WrapMode>* Field_1_614; // 0xFC0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_88; // 0xFC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_61; // 0xFD0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FairyTextUpdateType>* Field_1_351; // 0xFD8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector2>* Field_1_7; // 0xFE0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_188; // 0xFE8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::ContactPoint2D>* Field_1_175; // 0xFF0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Level::RatingType>* Field_1_296; // 0xFF8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_278; // 0x1000
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_385; // 0x1008
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_362; // 0x1010
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_565; // 0x1018
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_293; // 0x1020
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_125; // 0x1028
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_121; // 0x1030
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::ChessUIControlType>* Field_1_146; // 0x1038
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_433; // 0x1040
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Keyframe>* Field_1_321; // 0x1048
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::HollowSystemUIState>* Field_1_446; // 0x1050
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::DoubleEliteCardInfo>* Field_1_189; // 0x1058
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::ChessUIControlType>* Field_1_596; // 0x1060
	::NodeCanvas::Framework::ExposedParameter_1<::System::Single>* Field_1_452; // 0x1068
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FairyTextUpdateType>* Field_1_193; // 0x1070
	::NodeCanvas::Framework::ExposedParameter_1<::PipelineCamera::FinalCameraData>* Field_1_599; // 0x1078
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::TimePeriodType>* Field_1_238; // 0x1080
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::WrapMode>* Field_1_454; // 0x1088
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::WeatherType>* Field_1_237; // 0x1090
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::DoubleEliteCardInfo>* Field_1_346; // 0x1098
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_289; // 0x10A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_533; // 0x10A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_103; // 0x10B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_91; // 0x10B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_369; // 0x10C0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_410; // 0x10C8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::BubbleType>* Field_1_482; // 0x10D0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::InputType>* Field_1_376; // 0x10D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_429; // 0x10E0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_404; // 0x10E8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_55; // 0x10F0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_391; // 0x10F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_244; // 0x1100
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ScoreUIAnimationType>* Field_1_496; // 0x1108
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::PostEffectType>* Field_1_605; // 0x1110
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_415; // 0x1118
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_92; // 0x1120
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::GameplayTag>* Field_1_192; // 0x1128
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::EndHollowMiniGameType>* Field_1_144; // 0x1130
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_282; // 0x1138
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_299; // 0x1140
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_418; // 0x1148
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_211; // 0x1150
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::CampType>* Field_1_225; // 0x1158
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_421; // 0x1160
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_403; // 0x1168
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::WrapMode>* Field_1_316; // 0x1170
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_112; // 0x1178
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ChessEntityType>* Field_1_347; // 0x1180
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::WeatherType>* Field_1_77; // 0x1188
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_363; // 0x1190
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_203; // 0x1198
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_428; // 0x11A0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* Field_1_448; // 0x11A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::KeyCode>* Field_1_319; // 0x11B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_291; // 0x11B8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Collision2D*>* Field_1_173; // 0x11C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Keyframe>* Field_1_11; // 0x11C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RaycastHit2D>* Field_1_18; // 0x11D0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_336; // 0x11D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Color>* Field_1_170; // 0x11E0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_394; // 0x11E8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Collision*>* Field_1_13; // 0x11F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowPieceBlendMode>* Field_1_492; // 0x11F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_294; // 0x1200
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_83; // 0x1208
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::LayerMask>* Field_1_158; // 0x1210
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_380; // 0x1218
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RaycastHit>* Field_1_172; // 0x1220
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGameCliParamType>* Field_1_489; // 0x1228
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_215; // 0x1230
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_57; // 0x1238
	::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_333; // 0x1240
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Enum_3_7CF131C413C919AF>* Field_1_300; // 0x1248
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_51; // 0x1250
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_101; // 0x1258
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::ScreenEffectType>* Field_1_386; // 0x1260
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_23; // 0x1268
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGameDamageData>* Field_1_488; // 0x1270
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_365; // 0x1278
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::EntityType>* Field_1_378; // 0x1280
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_279; // 0x1288
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_538; // 0x1290
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_139; // 0x1298
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::EntityHandle>* Field_1_485; // 0x12A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::SpawnPointMaskRegion>* Field_1_205; // 0x12A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::NodeState>* Field_1_149; // 0x12B0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_561; // 0x12B8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_185; // 0x12C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Bounds>* Field_1_171; // 0x12C8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Ray>* Field_1_335; // 0x12D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_546; // 0x12D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ScoreUIAnimationType>* Field_1_357; // 0x12E0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_483; // 0x12E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Vector2Int>* Field_1_506; // 0x12F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_591; // 0x12F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_416; // 0x1300
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_568; // 0x1308
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_509; // 0x1310
	::NodeCanvas::Framework::BBParameter_1<::ParadoxNotion::OperationMethod>* Field_1_438; // 0x1318
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_401; // 0x1320
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::EndHollowMiniGameType>* Field_1_440; // 0x1328

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06A06D7C6EB1DBD8_1_CLASS_1_9A90CD018E72DF20_15__CTOR_OFFSET))(this);
	}
};
