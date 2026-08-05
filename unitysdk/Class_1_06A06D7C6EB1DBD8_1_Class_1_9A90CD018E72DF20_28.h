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

namespace NodeCanvas::Tasks::Conditions { template <typename T> class TryGetValue_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define CLASS_1_06A06D7C6EB1DBD8_1_CLASS_1_9A90CD018E72DF20_28__CTOR_OFFSET UNITYSDK_OFFSET(0x12420690)

inline static constexpr unsigned int Class_1_06A06D7C6EB1DBD8_1_Class_1_9A90CD018E72DF20_28_TypeDefinitionIndex = 95418;

class Class_1_06A06D7C6EB1DBD8_1_Class_1_9A90CD018E72DF20_28 : public ::System::Object
{
public:
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_122; // 0x10
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::ModifierStacking>* Field_1_75; // 0x18
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_60; // 0x20
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_141; // 0x28
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::EntityType>* Field_1_70; // 0x30
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Color>* Field_1_8; // 0x38
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_105; // 0x40
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_129; // 0x48
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_24; // 0x50
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_56; // 0x58
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_118; // 0x60
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::PipelineCamera::FinalCameraData>* Field_1_147; // 0x68
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_121; // 0x70
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_91; // 0x78
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_82; // 0x80
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MonsterStrengthType>* Field_1_73; // 0x88
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::Enum_3_7CF131C413C919AF>* Field_1_146; // 0x90
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_43; // 0x98
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::MultiTaskNodeHandle>* Field_1_45; // 0xA0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_124; // 0xA8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_79; // 0xB0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_115; // 0xB8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_93; // 0xC0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_29; // 0xC8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_138; // 0xD0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_66; // 0xD8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_53; // 0xE0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::Foundation::Unreal::FTransform3D>* Field_1_21; // 0xE8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_128; // 0xF0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_106; // 0xF8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_102; // 0x100
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Bounds>* Field_1_9; // 0x108
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_26; // 0x110
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::EntityHandle>* Field_1_33; // 0x118
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::DoubleEliteCardInfo>* Field_1_35; // 0x120
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::LayerMask>* Field_1_156; // 0x128
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::AnimStateCheckType>* Field_1_27; // 0x130
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::StatusEffectType>* Field_1_50; // 0x138
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_99; // 0x140
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::BaseProperty>* Field_1_64; // 0x148
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_47; // 0x150
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::Share::GridDir>* Field_1_152; // 0x158
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_104; // 0x160
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Level::BangbooPlayType>* Field_1_143; // 0x168
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_136; // 0x170
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_100; // 0x178
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Space>* Field_1_23; // 0x180
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::ContactPoint>* Field_1_14; // 0x188
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowPieceBlendMode>* Field_1_40; // 0x190
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Int32>* Field_1_7; // 0x198
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_117; // 0x1A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_87; // 0x1A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ParadoxNotion::OperationMethod>* Field_1_140; // 0x1B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::InputType>* Field_1_68; // 0x1B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::WrapMode>* Field_1_162; // 0x1C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_112; // 0x1C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::UInt32>* Field_1_158; // 0x1D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_97; // 0x1D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_107; // 0x1E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Level::RatingType>* Field_1_142; // 0x1E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_25; // 0x1F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::CampType>* Field_1_71; // 0x1F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_123; // 0x200
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_119; // 0x208
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::TimePeriodType>* Field_1_76; // 0x210
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_88; // 0x218
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::NodeState>* Field_1_155; // 0x220
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_131; // 0x228
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_135; // 0x230
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_113; // 0x238
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_48; // 0x240
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::EvtDestructionSwitchType>* Field_1_32; // 0x248
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_62; // 0x250
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_46; // 0x258
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_127; // 0x260
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::AbyssS2_EventType>* Field_1_20; // 0x268
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_130; // 0x270
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_81; // 0x278
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_96; // 0x280
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Single>* Field_1_0; // 0x288
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::HollowSystemUIState>* Field_1_148; // 0x290
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_42; // 0x298
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_34; // 0x2A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MonsterFunctionType>* Field_1_74; // 0x2A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_109; // 0x2B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector4>* Field_1_4; // 0x2B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_89; // 0x2C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ScoreUIAnimationType>* Field_1_44; // 0x2C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::SpawnPointMaskRegion>* Field_1_51; // 0x2D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_101; // 0x2D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Quaternion>* Field_1_11; // 0x2E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_134; // 0x2E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_108; // 0x2F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::ContactPoint2D>* Field_1_13; // 0x2F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_125; // 0x300
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ChessEntityType>* Field_1_28; // 0x308
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_52; // 0x310
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_63; // 0x318
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGameDamageData>* Field_1_36; // 0x320
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_49; // 0x328
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Vector2Int>* Field_1_54; // 0x330
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::BubbleType>* Field_1_30; // 0x338
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_80; // 0x340
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_111; // 0x348
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::ScreenEffectType>* Field_1_78; // 0x350
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::WeatherType>* Field_1_83; // 0x358
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_120; // 0x360
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_57; // 0x368
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::KeyCode>* Field_1_157; // 0x370
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_95; // 0x378
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_31; // 0x380
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RaycastHit>* Field_1_18; // 0x388
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_114; // 0x390
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_58; // 0x398
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::NodeVisible>* Field_1_154; // 0x3A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector3>* Field_1_5; // 0x3A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_110; // 0x3B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::EndHollowMiniGameType>* Field_1_150; // 0x3B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Collision*>* Field_1_12; // 0x3C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_84; // 0x3C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_94; // 0x3D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_67; // 0x3D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_72; // 0x3E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_139; // 0x3E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_133; // 0x3F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_126; // 0x3F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RigidbodyConstraints>* Field_1_163; // 0x400
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_90; // 0x408
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Char>* Field_1_159; // 0x410
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::HollowSystemType>* Field_1_149; // 0x418
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::InlevelCameraState>* Field_1_69; // 0x420
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_103; // 0x428
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_132; // 0x430
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Rect>* Field_1_15; // 0x438
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_77; // 0x440
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::ChessUIIconType>* Field_1_151; // 0x448
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::PostEffectType>* Field_1_153; // 0x450
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_86; // 0x458
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_116; // 0x460
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_98; // 0x468
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Collision2D*>* Field_1_19; // 0x470
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Config::AbilityTargetting>* Field_1_65; // 0x478
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGameCliParamType>* Field_1_37; // 0x480
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_41; // 0x488
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::RaycastHit2D>* Field_1_17; // 0x490
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_85; // 0x498
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_92; // 0x4A0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::ChessUIControlType>* Field_1_144; // 0x4A8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Vector2>* Field_1_6; // 0x4B0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_22; // 0x4B8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Keyframe>* Field_1_10; // 0x4C0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_137; // 0x4C8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::GameplayTag>* Field_1_38; // 0x4D0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_59; // 0x4D8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::System::Boolean>* Field_1_1; // 0x4E0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_55; // 0x4E8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::UnityEngine::Ray>* Field_1_16; // 0x4F0
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::FairyTextUpdateType>* Field_1_39; // 0x4F8
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_61; // 0x500
	::NodeCanvas::Tasks::Conditions::TryGetValue_1<::ProtoScript::AimRectColor>* Field_1_145; // 0x508

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06A06D7C6EB1DBD8_1_CLASS_1_9A90CD018E72DF20_28__CTOR_OFFSET))(this);
	}
};
