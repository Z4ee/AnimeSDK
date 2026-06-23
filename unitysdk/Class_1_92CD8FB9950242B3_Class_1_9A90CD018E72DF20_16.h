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

namespace FlowCanvas { template <typename T> class BinderConnection_1; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_16_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x11A64300)
#define CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_16__CTOR_OFFSET UNITYSDK_OFFSET(0x11A642F0)

inline static constexpr unsigned int Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_16_TypeDefinitionIndex = 91453;

class Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_16 : public ::System::Object
{
public:
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_191; // 0x10
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_333; // 0x18
	::FlowCanvas::ValueOutput_1<::Share::GridDir>* Field_1_407; // 0x20
	::FlowCanvas::ValueOutput_1<::UnityEngine::Collision2D*>* Field_1_268; // 0x28
	::FlowCanvas::ValueOutput_1<::ProtoScript::ChessUIControlType>* Field_1_399; // 0x30
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_74; // 0x38
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_208; // 0x40
	::FlowCanvas::ValueOutput_1<::UnityEngine::KeyCode>* Field_1_410; // 0x48
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_184; // 0x50
	::FlowCanvas::ValueOutput_1<::MoleMole::BubbleType>* Field_1_281; // 0x58
	::FlowCanvas::ValueOutput_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_394; // 0x60
	::FlowCanvas::BinderConnection_1<::ProtoScript::HollowSystemUIState>* Field_1_89; // 0x68
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_154; // 0x70
	::FlowCanvas::ValueOutput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_296; // 0x78
	::FlowCanvas::ValueInput_1<::System::Single>* Field_1_98; // 0x80
	::FlowCanvas::ValueOutput_1<::UnityEngine::RaycastHit2D>* Field_1_270; // 0x88
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_71; // 0x90
	::FlowCanvas::ValueInput_1<::UnityEngine::Keyframe>* Field_1_103; // 0x98
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::EntityType>* Field_1_321; // 0xA0
	::FlowCanvas::ValueOutput_1<::ProtoScript::HollowSystemType>* Field_1_402; // 0xA8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_362; // 0xB0
	::FlowCanvas::ValueOutput_1<::UnityEngine::WrapMode>* Field_1_413; // 0xB8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_344; // 0xC0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::ScreenEffectType>* Field_1_46; // 0xC8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_218; // 0xD0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_215; // 0xD8
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_134; // 0xE0
	::FlowCanvas::ValueInput_1<::UnityEngine::Collision2D*>* Field_1_110; // 0xE8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_217; // 0xF0
	::FlowCanvas::ValueInput_1<::MoleMole::ChessEntityType>* Field_1_125; // 0xF8
	::FlowCanvas::BinderConnection_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_35; // 0x100
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_182; // 0x108
	::FlowCanvas::ValueInput_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_143; // 0x110
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_224; // 0x118
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_328; // 0x120
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::InlevelCameraState>* Field_1_40; // 0x128
	::FlowCanvas::ValueInput_1<::ProtoScript::HollowSystemType>* Field_1_242; // 0x130
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_294; // 0x138
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_47; // 0x140
	::FlowCanvas::BinderConnection_1<::ProtoScript::HollowSystemType>* Field_1_88; // 0x148
	::FlowCanvas::ValueOutput_1<::UnityEngine::Keyframe>* Field_1_261; // 0x150
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_192; // 0x158
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_60; // 0x160
	::FlowCanvas::ValueInput_1<::MoleMole::EvtDestructionSwitchType>* Field_1_128; // 0x168
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_383; // 0x170
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_194; // 0x178
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_293; // 0x180
	::FlowCanvas::ValueInput_1<::MoleMole::Level::RatingType>* Field_1_233; // 0x188
	::FlowCanvas::ValueInput_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_119; // 0x190
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MonsterStrengthType>* Field_1_167; // 0x198
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_312; // 0x1A0
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_32; // 0x1A8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_51; // 0x1B0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::EntityType>* Field_1_162; // 0x1B8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_158; // 0x1C0
	::FlowCanvas::ValueInput_1<::ProtoScript::NodeState>* Field_1_244; // 0x1C8
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_153; // 0x1D0
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_231; // 0x1D8
	::FlowCanvas::ValueOutput_1<::MoleMole::ChessEntityType>* Field_1_283; // 0x1E0
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector3>* Field_1_100; // 0x1E8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Ray>* Field_1_271; // 0x1F0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_168; // 0x1F8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_351; // 0x200
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_190; // 0x208
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::WeatherType>* Field_1_332; // 0x210
	::FlowCanvas::ValueOutput_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_277; // 0x218
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_335; // 0x220
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_203; // 0x228
	::FlowCanvas::BinderConnection_1<::UnityEngine::Vector4>* Field_1_0; // 0x230
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::InlevelCameraState>* Field_1_322; // 0x238
	::FlowCanvas::ValueOutput_1<::Foundation::Unreal::FTransform3D>* Field_1_274; // 0x240
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_206; // 0x248
	::FlowCanvas::ValueOutput_1<::UnityEngine::Quaternion>* Field_1_260; // 0x250
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_181; // 0x258
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_171; // 0x260
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_201; // 0x268
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowPieceBlendMode>* Field_1_295; // 0x270
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_178; // 0x278
	::FlowCanvas::BinderConnection_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_81; // 0x280
	::FlowCanvas::ValueInput_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_144; // 0x288
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_45; // 0x290
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGameDamageData>* Field_1_132; // 0x298
	::FlowCanvas::ValueOutput_1<::System::Int32>* Field_1_256; // 0x2A0
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_292; // 0x2A8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_378; // 0x2B0
	::FlowCanvas::BinderConnection_1<::MoleMole::SpawnPointMaskRegion>* Field_1_23; // 0x2B8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_377; // 0x2C0
	::FlowCanvas::BinderConnection_1<::ProtoScript::EndHollowMiniGameType>* Field_1_87; // 0x2C8
	::FlowCanvas::ValueInput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_121; // 0x2D0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_177; // 0x2D8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_365; // 0x2E0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_58; // 0x2E8
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_227; // 0x2F0
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGameDamageData>* Field_1_291; // 0x2F8
	::FlowCanvas::ValueInput_1<::UnityEngine::Ray>* Field_1_113; // 0x300
	::FlowCanvas::BinderConnection_1<::UnityEngine::KeyCode>* Field_1_94; // 0x308
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_308; // 0x310
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector3>* Field_1_258; // 0x318
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_187; // 0x320
	::FlowCanvas::ValueOutput_1<::UnityEngine::Color>* Field_1_263; // 0x328
	::FlowCanvas::BinderConnection_1<::UnityEngine::Space>* Field_1_12; // 0x330
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_204; // 0x338
	::FlowCanvas::ValueOutput_1<::MoleMole::GameplayTag>* Field_1_289; // 0x340
	::FlowCanvas::ValueInput_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_137; // 0x348
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_376; // 0x350
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_34; // 0x358
	::FlowCanvas::ValueInput_1<::MoleMole::Config::BaseProperty>* Field_1_160; // 0x360
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_229; // 0x368
	::FlowCanvas::ValueOutput_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_285; // 0x370
	::FlowCanvas::ValueOutput_1<::MoleMole::AnimStateCheckType>* Field_1_276; // 0x378
	::FlowCanvas::ValueInput_1<::MoleMole::FairyTextUpdateType>* Field_1_129; // 0x380
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::CampType>* Field_1_320; // 0x388
	::FlowCanvas::ValueInput_1<::MoleMole::ScoreUIAnimationType>* Field_1_140; // 0x390
	::FlowCanvas::ValueOutput_1<::MoleMole::MultiTaskNodeHandle>* Field_1_298; // 0x398
	::FlowCanvas::ValueOutput_1<::PipelineCamera::FinalCameraData>* Field_1_396; // 0x3A0
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::ScreenEffectType>* Field_1_329; // 0x3A8
	::FlowCanvas::ValueInput_1<::UnityEngine::KeyCode>* Field_1_250; // 0x3B0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_368; // 0x3B8
	::FlowCanvas::ValueOutput_1<::UnityEngine::RigidbodyConstraints>* Field_1_412; // 0x3C0
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_387; // 0x3C8
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_150; // 0x3D0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_363; // 0x3D8
	::FlowCanvas::ValueInput_1<::System::Char>* Field_1_248; // 0x3E0
	::FlowCanvas::ValueOutput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_280; // 0x3E8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::ModifierStacking>* Field_1_165; // 0x3F0
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_151; // 0x3F8
	::FlowCanvas::ValueInput_1<::ProtoScript::HollowSystemUIState>* Field_1_243; // 0x400
	::FlowCanvas::ValueOutput_1<::ProtoScript::NodeState>* Field_1_404; // 0x408
	::FlowCanvas::ValueInput_1<::UnityEngine::WrapMode>* Field_1_253; // 0x410
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_382; // 0x418
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_75; // 0x420
	::FlowCanvas::ValueOutput_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_304; // 0x428
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_30; // 0x430
	::FlowCanvas::ValueInput_1<::MoleMole::AbyssS2_EventType>* Field_1_117; // 0x438
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::ModifierStacking>* Field_1_324; // 0x440
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_36; // 0x448
	::FlowCanvas::ValueInput_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_145; // 0x450
	::FlowCanvas::ValueInput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_122; // 0x458
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_44; // 0x460
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_26; // 0x468
	::FlowCanvas::ValueOutput_1<::ProtoScript::ChessUIIconType>* Field_1_400; // 0x470
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_386; // 0x478
	::FlowCanvas::ValueOutput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_279; // 0x480
	::FlowCanvas::BinderConnection_1<::UnityEngine::Color>* Field_1_3; // 0x488
	::FlowCanvas::BinderConnection_1<::MoleMole::AnimStateCheckType>* Field_1_14; // 0x490
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_59; // 0x498
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_220; // 0x4A0
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_317; // 0x4A8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_193; // 0x4B0
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_313; // 0x4B8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_369; // 0x4C0
	::FlowCanvas::ValueInput_1<::Foundation::Unreal::FTransform3D>* Field_1_116; // 0x4C8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_65; // 0x4D0
	::FlowCanvas::ValueOutput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_278; // 0x4D8
	::FlowCanvas::ValueInput_1<::MoleMole::Config::MonsterFunctionType>* Field_1_166; // 0x4E0
	::FlowCanvas::BinderConnection_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_13; // 0x4E8
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_152; // 0x4F0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::InlevelCameraState>* Field_1_163; // 0x4F8
	::FlowCanvas::ValueInput_1<::System::UInt32>* Field_1_249; // 0x500
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_390; // 0x508
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_359; // 0x510
	::FlowCanvas::BinderConnection_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_17; // 0x518
	::FlowCanvas::ValueInput_1<::UnityEngine::ContactPoint2D>* Field_1_108; // 0x520
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_189; // 0x528
	::FlowCanvas::BinderConnection_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_21; // 0x530
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_148; // 0x538
	::FlowCanvas::ValueInput_1<::ProtoScript::AimRectColor>* Field_1_238; // 0x540
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_188; // 0x548
	::FlowCanvas::ValueInput_1<::ProtoScript::ChessUIIconType>* Field_1_240; // 0x550
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_50; // 0x558
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_391; // 0x560
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::AbilityTargetting>* Field_1_318; // 0x568
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_384; // 0x570
	::FlowCanvas::ValueOutput_1<::System::Char>* Field_1_408; // 0x578
	::FlowCanvas::ValueOutput_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_297; // 0x580
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_221; // 0x588
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_338; // 0x590
	::FlowCanvas::ValueOutput_1<::UnityEngine::LayerMask>* Field_1_411; // 0x598
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector2>* Field_1_257; // 0x5A0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_175; // 0x5A8
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::BaseProperty>* Field_1_38; // 0x5B0
	::FlowCanvas::BinderConnection_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_24; // 0x5B8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_179; // 0x5C0
	::FlowCanvas::ValueInput_1<::Enum_3_7CF131C413C919AF>* Field_1_237; // 0x5C8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_364; // 0x5D0
	::FlowCanvas::ValueInput_1<::UnityEngine::Rect>* Field_1_106; // 0x5D8
	::FlowCanvas::BinderConnection_1<::UnityEngine::RaycastHit>* Field_1_9; // 0x5E0
	::FlowCanvas::ValueOutput_1<::UnityEngine::ContactPoint>* Field_1_265; // 0x5E8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_346; // 0x5F0
	::FlowCanvas::ValueOutput_1<::UnityEngine::Space>* Field_1_272; // 0x5F8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_66; // 0x600
	::FlowCanvas::BinderConnection_1<::System::Char>* Field_1_93; // 0x608
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_380; // 0x610
	::FlowCanvas::ValueOutput_1<::UnityEngine::Rect>* Field_1_264; // 0x618
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_336; // 0x620
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_373; // 0x628
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_389; // 0x630
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_375; // 0x638
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_174; // 0x640
	::FlowCanvas::ValueOutput_1<::UnityEngine::RaycastHit>* Field_1_269; // 0x648
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_31; // 0x650
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_186; // 0x658
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_349; // 0x660
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_223; // 0x668
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_337; // 0x670
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_149; // 0x678
	::FlowCanvas::ValueInput_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_124; // 0x680
	::FlowCanvas::BinderConnection_1<::UnityEngine::Ray>* Field_1_11; // 0x688
	::FlowCanvas::ValueInput_1<::ProtoScript::ChessUIControlType>* Field_1_239; // 0x690
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_79; // 0x698
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_330; // 0x6A0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_53; // 0x6A8
	::FlowCanvas::ValueOutput_1<::ProtoScript::EndHollowMiniGameType>* Field_1_401; // 0x6B0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Rect>* Field_1_4; // 0x6B8
	::FlowCanvas::ValueOutput_1<::MoleMole::EntityHandle>* Field_1_286; // 0x6C0
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_78; // 0x6C8
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_311; // 0x6D0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::AbilityTargetting>* Field_1_159; // 0x6D8
	::FlowCanvas::BinderConnection_1<::UnityEngine::ContactPoint>* Field_1_5; // 0x6E0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_366; // 0x6E8
	::FlowCanvas::ValueInput_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_156; // 0x6F0
	::FlowCanvas::BinderConnection_1<::ProtoScript::AimRectColor>* Field_1_84; // 0x6F8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_352; // 0x700
	::FlowCanvas::ValueOutput_1<::MoleMole::StatusEffectType>* Field_1_301; // 0x708
	::FlowCanvas::ValueInput_1<::MoleMole::Config::ScreenEffectType>* Field_1_170; // 0x710
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_27; // 0x718
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_374; // 0x720
	::FlowCanvas::ValueOutput_1<::MoleMole::ScoreUIAnimationType>* Field_1_299; // 0x728
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_199; // 0x730
	::FlowCanvas::ValueInput_1<::ProtoScript::PostEffectType>* Field_1_246; // 0x738
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_282; // 0x740
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::InputType>* Field_1_323; // 0x748
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_345; // 0x750
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::TimePeriodType>* Field_1_331; // 0x758
	::FlowCanvas::BinderConnection_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_25; // 0x760
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_353; // 0x768
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_68; // 0x770
	::FlowCanvas::ValueInput_1<::MoleMole::Level::BangbooPlayType>* Field_1_232; // 0x778
	::FlowCanvas::ValueOutput_1<::System::Single>* Field_1_255; // 0x780
	::FlowCanvas::ValueInput_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_120; // 0x788
	::FlowCanvas::ValueOutput_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_316; // 0x790
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGameCliParamType>* Field_1_131; // 0x798
	::FlowCanvas::ValueInput_1<::MoleMole::StatusEffectType>* Field_1_142; // 0x7A0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_76; // 0x7A8
	::FlowCanvas::ValueInput_1<::UnityEngine::RigidbodyConstraints>* Field_1_252; // 0x7B0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_62; // 0x7B8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_340; // 0x7C0
	::FlowCanvas::BinderConnection_1<::ProtoScript::PostEffectType>* Field_1_92; // 0x7C8
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_147; // 0x7D0
	::FlowCanvas::ValueOutput_1<::UnityEngine::ContactPoint2D>* Field_1_266; // 0x7D8
	::FlowCanvas::ValueInput_1<::MoleMole::HollowPieceBlendMode>* Field_1_136; // 0x7E0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_200; // 0x7E8
	::FlowCanvas::ValueOutput_1<::ProtoScript::HollowSystemUIState>* Field_1_403; // 0x7F0
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::ModifierStacking>* Field_1_42; // 0x7F8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_334; // 0x800
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_354; // 0x808
	::FlowCanvas::ValueInput_1<::UnityEngine::Color>* Field_1_105; // 0x810
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_357; // 0x818
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_61; // 0x820
	::FlowCanvas::ValueInput_1<::MoleMole::SpawnPointMaskRegion>* Field_1_141; // 0x828
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_356; // 0x830
	::FlowCanvas::ValueInput_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_115; // 0x838
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_67; // 0x840
	::FlowCanvas::BinderConnection_1<::UnityEngine::RigidbodyConstraints>* Field_1_96; // 0x848
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_225; // 0x850
	::FlowCanvas::ValueOutput_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_302; // 0x858
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MonsterStrengthType>* Field_1_326; // 0x860
	::FlowCanvas::ValueOutput_1<::ProtoScript::NodeVisible>* Field_1_405; // 0x868
	::FlowCanvas::ValueInput_1<::MoleMole::Vector2Int>* Field_1_146; // 0x870
	::FlowCanvas::ValueOutput_1<::Enum_3_7CF131C413C919AF>* Field_1_397; // 0x878
	::FlowCanvas::BinderConnection_1<::MoleMole::Level::BangbooPlayType>* Field_1_80; // 0x880
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_64; // 0x888
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_212; // 0x890
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_343; // 0x898
	::FlowCanvas::BinderConnection_1<::ProtoScript::ChessUIIconType>* Field_1_86; // 0x8A0
	::FlowCanvas::ValueInput_1<::ParadoxNotion::OperationMethod>* Field_1_235; // 0x8A8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_379; // 0x8B0
	::FlowCanvas::BinderConnection_1<::UnityEngine::WrapMode>* Field_1_97; // 0x8B8
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_314; // 0x8C0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_195; // 0x8C8
	::FlowCanvas::ValueOutput_1<::System::Boolean>* Field_1_254; // 0x8D0
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_55; // 0x8D8
	::FlowCanvas::ValueOutput_1<::MoleMole::Level::RatingType>* Field_1_393; // 0x8E0
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_16; // 0x8E8
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_230; // 0x8F0
	::FlowCanvas::ValueInput_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_138; // 0x8F8
	::FlowCanvas::ValueInput_1<::MoleMole::AnimStateCheckType>* Field_1_118; // 0x900
	::FlowCanvas::ValueInput_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_127; // 0x908
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_361; // 0x910
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_367; // 0x918
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_56; // 0x920
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_209; // 0x928
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_310; // 0x930
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_185; // 0x938
	::FlowCanvas::ValueOutput_1<::MoleMole::EvtDestructionSwitchType>* Field_1_287; // 0x940
	::FlowCanvas::ValueInput_1<::MoleMole::DoubleEliteCardInfo>* Field_1_126; // 0x948
	::FlowCanvas::ValueOutput_1<::MoleMole::Level::BangbooPlayType>* Field_1_392; // 0x950
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_176; // 0x958
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_341; // 0x960
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_210; // 0x968
	::FlowCanvas::ValueOutput_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_315; // 0x970
	::FlowCanvas::ValueInput_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_169; // 0x978
	::FlowCanvas::ValueInput_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_234; // 0x980
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_306; // 0x988
	::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_388; // 0x990
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::BaseProperty>* Field_1_319; // 0x998
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_49; // 0x9A0
	::FlowCanvas::ValueOutput_1<::MoleMole::Vector2Int>* Field_1_305; // 0x9A8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_73; // 0x9B0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Keyframe>* Field_1_1; // 0x9B8
	::FlowCanvas::ValueOutput_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_273; // 0x9C0
	::FlowCanvas::ValueInput_1<::Share::GridDir>* Field_1_247; // 0x9C8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_342; // 0x9D0
	::FlowCanvas::ValueOutput_1<::MoleMole::DoubleEliteCardInfo>* Field_1_284; // 0x9D8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Bounds>* Field_1_262; // 0x9E0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Bounds>* Field_1_2; // 0x9E8
	::FlowCanvas::BinderConnection_1<::Enum_3_7CF131C413C919AF>* Field_1_83; // 0x9F0
	::FlowCanvas::BinderConnection_1<::UnityEngine::Collision2D*>* Field_1_8; // 0x9F8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_72; // 0xA00
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::MonsterFunctionType>* Field_1_43; // 0xA08
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_370; // 0xA10
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_183; // 0xA18
	::FlowCanvas::BinderConnection_1<::UnityEngine::Collision*>* Field_1_7; // 0xA20
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_213; // 0xA28
	::FlowCanvas::ValueInput_1<::UnityEngine::RaycastHit>* Field_1_111; // 0xA30
	::FlowCanvas::BinderConnection_1<::ParadoxNotion::OperationMethod>* Field_1_82; // 0xA38
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_355; // 0xA40
	::FlowCanvas::BinderConnection_1<::UnityEngine::RaycastHit2D>* Field_1_10; // 0xA48
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MonsterFunctionType>* Field_1_325; // 0xA50
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_385; // 0xA58
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_226; // 0xA60
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_205; // 0xA68
	::FlowCanvas::ValueOutput_1<::System::UInt32>* Field_1_409; // 0xA70
	::FlowCanvas::ValueInput_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_155; // 0xA78
	::FlowCanvas::ValueInput_1<::UnityEngine::RaycastHit2D>* Field_1_112; // 0xA80
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_54; // 0xA88
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_28; // 0xA90
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::AbilityTargetting>* Field_1_37; // 0xA98
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_52; // 0xAA0
	::FlowCanvas::ValueInput_1<::ProtoScript::EndHollowMiniGameType>* Field_1_241; // 0xAA8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Vector4>* Field_1_259; // 0xAB0
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_133; // 0xAB8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_372; // 0xAC0
	::FlowCanvas::ValueInput_1<::MoleMole::Config::InputType>* Field_1_164; // 0xAC8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_57; // 0xAD0
	::FlowCanvas::ValueInput_1<::UnityEngine::Quaternion>* Field_1_102; // 0xAD8
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::InputType>* Field_1_41; // 0xAE0
	::FlowCanvas::BinderConnection_1<::ProtoScript::NodeVisible>* Field_1_91; // 0xAE8
	::FlowCanvas::ValueOutput_1<::UnityEngine::Collision*>* Field_1_267; // 0xAF0
	::FlowCanvas::ValueInput_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_135; // 0xAF8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_219; // 0xB00
	::FlowCanvas::ValueInput_1<::UnityEngine::Bounds>* Field_1_104; // 0xB08
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_69; // 0xB10
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_48; // 0xB18
	::FlowCanvas::ValueOutput_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_327; // 0xB20
	::FlowCanvas::BinderConnection_1<::MoleMole::EvtDestructionSwitchType>* Field_1_18; // 0xB28
	::FlowCanvas::ValueInput_1<::PipelineCamera::FinalCameraData>* Field_1_236; // 0xB30
	::FlowCanvas::ValueOutput_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_303; // 0xB38
	::FlowCanvas::ValueInput_1<::ProtoScript::NodeVisible>* Field_1_245; // 0xB40
	::FlowCanvas::BinderConnection_1<::MoleMole::Config::EntityType>* Field_1_39; // 0xB48
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_180; // 0xB50
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_350; // 0xB58
	::FlowCanvas::ValueInput_1<::MoleMole::GameplayTag>* Field_1_130; // 0xB60
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_63; // 0xB68
	::FlowCanvas::ValueOutput_1<::MoleMole::FairyTextUpdateType>* Field_1_288; // 0xB70
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_214; // 0xB78
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_339; // 0xB80
	::FlowCanvas::BinderConnection_1<::MoleMole::HackerGameCliParamType>* Field_1_19; // 0xB88
	::FlowCanvas::ValueInput_1<::MoleMole::Config::TimePeriodType>* Field_1_172; // 0xB90
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_360; // 0xB98
	::FlowCanvas::BinderConnection_1<::UnityEngine::ContactPoint2D>* Field_1_6; // 0xBA0
	::FlowCanvas::ValueOutput_1<::MoleMole::AbyssS2_EventType>* Field_1_275; // 0xBA8
	::FlowCanvas::BinderConnection_1<::MoleMole::HollowPieceBlendMode>* Field_1_20; // 0xBB0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_198; // 0xBB8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_70; // 0xBC0
	::FlowCanvas::ValueInput_1<::UnityEngine::Space>* Field_1_114; // 0xBC8
	::FlowCanvas::ValueInput_1<::UnityEngine::ContactPoint>* Field_1_107; // 0xBD0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_211; // 0xBD8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_202; // 0xBE0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_222; // 0xBE8
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_348; // 0xBF0
	::FlowCanvas::ValueInput_1<::MoleMole::MultiTaskNodeHandle>* Field_1_139; // 0xBF8
	::FlowCanvas::ValueOutput_1<::ParadoxNotion::OperationMethod>* Field_1_395; // 0xC00
	::FlowCanvas::ValueInput_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_157; // 0xC08
	::FlowCanvas::ValueInput_1<::UnityEngine::LayerMask>* Field_1_251; // 0xC10
	::FlowCanvas::ValueInput_1<::MoleMole::Config::WeatherType>* Field_1_173; // 0xC18
	::FlowCanvas::ValueInput_1<::MoleMole::Config::CampType>* Field_1_161; // 0xC20
	::FlowCanvas::ValueOutput_1<::MoleMole::HackerGameCliParamType>* Field_1_290; // 0xC28
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_347; // 0xC30
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_371; // 0xC38
	::FlowCanvas::ValueOutput_1<::ProtoScript::AimRectColor>* Field_1_398; // 0xC40
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_216; // 0xC48
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_29; // 0xC50
	::FlowCanvas::ValueOutput_1<::ProtoScript::PostEffectType>* Field_1_406; // 0xC58
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector2>* Field_1_99; // 0xC60
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_309; // 0xC68
	::FlowCanvas::ValueInput_1<::UnityEngine::Vector4>* Field_1_101; // 0xC70
	::FlowCanvas::ValueInput_1<::UnityEngine::Collision*>* Field_1_109; // 0xC78
	::FlowCanvas::BinderConnection_1<::UnityEngine::LayerMask>* Field_1_95; // 0xC80
	::FlowCanvas::BinderConnection_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_33; // 0xC88
	::FlowCanvas::BinderConnection_1<::MoleMole::BubbleType>* Field_1_15; // 0xC90
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_207; // 0xC98
	::FlowCanvas::BinderConnection_1<::MoleMole::ScoreUIAnimationType>* Field_1_22; // 0xCA0
	::FlowCanvas::ValueInput_1<::MoleMole::BubbleType>* Field_1_123; // 0xCA8
	::FlowCanvas::ValueOutput_1<::MoleMole::SpawnPointMaskRegion>* Field_1_300; // 0xCB0
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_196; // 0xCB8
	::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_197; // 0xCC0
	::FlowCanvas::ValueOutput_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_307; // 0xCC8
	::FlowCanvas::BinderConnection_1<::ProtoScript::NodeState>* Field_1_90; // 0xCD0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_358; // 0xCD8
	::FlowCanvas::ValueInput_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_228; // 0xCE0
	::FlowCanvas::ValueOutput_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_381; // 0xCE8
	::FlowCanvas::BinderConnection_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_77; // 0xCF0
	::FlowCanvas::BinderConnection_1<::ProtoScript::ChessUIControlType>* Field_1_85; // 0xCF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_16__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_16_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
