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

namespace FlowCanvas::Nodes { template <typename T> class SetVariable_1; }
namespace FlowCanvas::Nodes { template <typename T> class ShuffleList_1; }
namespace FlowCanvas::Nodes { template <typename T> class StaticCodeEvent_1; }
namespace FlowCanvas::Nodes { template <typename T> class SwitchValue_1; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }

#define CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1033BFE0)

inline static constexpr unsigned int Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_10_TypeDefinitionIndex = 85931;

class Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_10 : public ::System::Object
{
public:
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::MonsterFunctionType>* Field_1_212; // 0x10
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::ChessUIIconType>* Field_1_287; // 0x18
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Quaternion>* Field_1_147; // 0x20
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_241; // 0x28
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_326; // 0x30
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::DoubleEliteCardInfo>* Field_1_491; // 0x38
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_516; // 0x40
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::AnimStateCheckType>* Field_1_323; // 0x48
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_510; // 0x50
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_518; // 0x58
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::StatusEffectType>* Field_1_348; // 0x60
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::RaycastHit>* Field_1_156; // 0x68
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::HollowSystemUIState>* Field_1_131; // 0x70
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_360; // 0x78
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_511; // 0x80
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::NodeVisible>* Field_1_452; // 0x88
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_357; // 0x90
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_408; // 0x98
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_593; // 0xA0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_486; // 0xA8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_263; // 0xB0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_407; // 0xB8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::ScreenEffectType>* Field_1_216; // 0xC0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::BaseProperty>* Field_1_526; // 0xC8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_573; // 0xD0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_203; // 0xD8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_247; // 0xE0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_552; // 0xE8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_412; // 0xF0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Level::RatingType>* Field_1_280; // 0xF8
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::NodeVisible>* Field_1_292; // 0x100
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::ContactPoint2D>* Field_1_313; // 0x108
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_340; // 0x110
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_274; // 0x118
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HackerGameCliParamType>* Field_1_177; // 0x120
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_341; // 0x128
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_391; // 0x130
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::AbilityTargetting>* Field_1_525; // 0x138
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::GameplayTag>* Field_1_496; // 0x140
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_234; // 0x148
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::ChessUIIconType>* Field_1_607; // 0x150
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Quaternion>* Field_1_467; // 0x158
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Vector4>* Field_1_306; // 0x160
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HackerGameDamageData>* Field_1_338; // 0x168
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::AbyssS2_EventType>* Field_1_482; // 0x170
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_382; // 0x178
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_191; // 0x180
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_411; // 0x188
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HackerGameCliParamType>* Field_1_497; // 0x190
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Rect>* Field_1_311; // 0x198
	::FlowCanvas::Nodes::SwitchValue_1<::System::UInt32>* Field_1_616; // 0x1A0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_222; // 0x1A8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_277; // 0x1B0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::ContactPoint>* Field_1_6; // 0x1B8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::HollowSystemUIState>* Field_1_450; // 0x1C0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_597; // 0x1C8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_105; // 0x1D0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_601; // 0x1D8
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::RaycastHit2D>* Field_1_11; // 0x1E0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_92; // 0x1E8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_504; // 0x1F0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::RigidbodyConstraints>* Field_1_459; // 0x1F8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::BaseProperty>* Field_1_57; // 0x200
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_215; // 0x208
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Ray>* Field_1_12; // 0x210
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::MonsterStrengthType>* Field_1_64; // 0x218
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_591; // 0x220
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_567; // 0x228
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::BaseProperty>* Field_1_366; // 0x230
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::EvtDestructionSwitchType>* Field_1_27; // 0x238
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_489; // 0x240
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_179; // 0x248
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_166; // 0x250
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::MonsterFunctionType>* Field_1_63; // 0x258
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HackerGameDamageData>* Field_1_498; // 0x260
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_82; // 0x268
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_521; // 0x270
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_592; // 0x278
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_70; // 0x280
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_87; // 0x288
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FairyTextUpdateType>* Field_1_175; // 0x290
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Ray>* Field_1_318; // 0x298
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::MultiTaskNodeHandle>* Field_1_37; // 0x2A0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::InputType>* Field_1_370; // 0x2A8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_167; // 0x2B0
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Rect>* Field_1_151; // 0x2B8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Vector2Int>* Field_1_352; // 0x2C0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::Foundation::Unreal::FTransform3D>* Field_1_321; // 0x2C8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_545; // 0x2D0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::ChessUIControlType>* Field_1_446; // 0x2D8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_344; // 0x2E0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::ModifierStacking>* Field_1_531; // 0x2E8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ChessEntityType>* Field_1_24; // 0x2F0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_570; // 0x2F8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_578; // 0x300
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_594; // 0x308
	::FlowCanvas::Nodes::ShuffleList_1<::PipelineCamera::FinalCameraData>* Field_1_283; // 0x310
	::FlowCanvas::Nodes::ShuffleList_1<::System::Char>* Field_1_295; // 0x318
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_587; // 0x320
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Vector2>* Field_1_304; // 0x328
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_383; // 0x330
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::InputType>* Field_1_210; // 0x338
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Vector3>* Field_1_145; // 0x340
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_74; // 0x348
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_272; // 0x350
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_415; // 0x358
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_220; // 0x360
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::ModifierStacking>* Field_1_62; // 0x368
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::PostEffectType>* Field_1_293; // 0x370
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_93; // 0x378
	::FlowCanvas::Nodes::SwitchValue_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_480; // 0x380
	::FlowCanvas::Nodes::SwitchValue_1<::System::Char>* Field_1_615; // 0x388
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_541; // 0x390
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::StatusEffectType>* Field_1_188; // 0x398
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_377; // 0x3A0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_503; // 0x3A8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ChessEntityType>* Field_1_490; // 0x3B0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::AimRectColor>* Field_1_445; // 0x3B8
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::HollowSystemType>* Field_1_130; // 0x3C0
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::ChessUIControlType>* Field_1_286; // 0x3C8
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::RaycastHit>* Field_1_10; // 0x3D0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::AnimStateCheckType>* Field_1_17; // 0x3D8
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::RigidbodyConstraints>* Field_1_299; // 0x3E0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_199; // 0x3E8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_31; // 0x3F0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_395; // 0x3F8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_556; // 0x400
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::InlevelCameraState>* Field_1_60; // 0x408
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_355; // 0x410
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::InputType>* Field_1_530; // 0x418
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_112; // 0x420
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::NodeVisible>* Field_1_612; // 0x428
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_332; // 0x430
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_224; // 0x438
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_397; // 0x440
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_414; // 0x448
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_68; // 0x450
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::RigidbodyConstraints>* Field_1_139; // 0x458
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_438; // 0x460
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_270; // 0x468
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_194; // 0x470
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_575; // 0x478
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Vector2>* Field_1_464; // 0x480
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::BubbleType>* Field_1_168; // 0x488
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_419; // 0x490
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Quaternion>* Field_1_307; // 0x498
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_563; // 0x4A0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_569; // 0x4A8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_237; // 0x4B0
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::KeyCode>* Field_1_617; // 0x4B8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_248; // 0x4C0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_202; // 0x4C8
	::FlowCanvas::Nodes::SetVariable_1<::Foundation::Unreal::FTransform3D>* Field_1_15; // 0x4D0
	::FlowCanvas::Nodes::ShuffleList_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_160; // 0x4D8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_80; // 0x4E0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::System::Char>* Field_1_455; // 0x4E8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_548; // 0x4F0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_198; // 0x4F8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Collision*>* Field_1_314; // 0x500
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_119; // 0x508
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::EntityType>* Field_1_368; // 0x510
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_517; // 0x518
	::FlowCanvas::Nodes::ShuffleList_1<::System::Int32>* Field_1_143; // 0x520
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Space>* Field_1_13; // 0x528
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_554; // 0x530
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_385; // 0x538
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_108; // 0x540
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::AbilityTargetting>* Field_1_56; // 0x548
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::EntityHandle>* Field_1_493; // 0x550
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ScoreUIAnimationType>* Field_1_346; // 0x558
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::MonsterFunctionType>* Field_1_372; // 0x560
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_423; // 0x568
	::FlowCanvas::Nodes::SwitchValue_1<::Share::GridDir>* Field_1_614; // 0x570
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::StatusEffectType>* Field_1_508; // 0x578
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_574; // 0x580
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_242; // 0x588
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_259; // 0x590
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Collision2D*>* Field_1_9; // 0x598
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::ModifierStacking>* Field_1_211; // 0x5A0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_266; // 0x5A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_84; // 0x5B0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Color>* Field_1_4; // 0x5B8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ChessEntityType>* Field_1_170; // 0x5C0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::ContactPoint>* Field_1_312; // 0x5C8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::WeatherType>* Field_1_219; // 0x5D0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::MultiTaskNodeHandle>* Field_1_345; // 0x5D8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::ModifierStacking>* Field_1_371; // 0x5E0
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::PostEffectType>* Field_1_613; // 0x5E8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::InlevelCameraState>* Field_1_369; // 0x5F0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_264; // 0x5F8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::PostEffectType>* Field_1_453; // 0x600
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::EntityType>* Field_1_208; // 0x608
	::FlowCanvas::Nodes::StaticCodeEvent_1<::System::Boolean>* Field_1_301; // 0x610
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_381; // 0x618
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_535; // 0x620
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_401; // 0x628
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_576; // 0x630
	::FlowCanvas::Nodes::ShuffleList_1<::Share::GridDir>* Field_1_294; // 0x638
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_44; // 0x640
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_55; // 0x648
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::EndHollowMiniGameType>* Field_1_448; // 0x650
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_66; // 0x658
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HackerGameCliParamType>* Field_1_337; // 0x660
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_586; // 0x668
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_349; // 0x670
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_433; // 0x678
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::ScreenEffectType>* Field_1_376; // 0x680
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::WrapMode>* Field_1_300; // 0x688
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_547; // 0x690
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::HollowSystemType>* Field_1_609; // 0x698
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_201; // 0x6A0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_200; // 0x6A8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::ScreenEffectType>* Field_1_536; // 0x6B0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_405; // 0x6B8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowPieceBlendMode>* Field_1_34; // 0x6C0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Collision*>* Field_1_8; // 0x6C8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_500; // 0x6D0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::CampType>* Field_1_527; // 0x6D8
	::FlowCanvas::Nodes::SwitchValue_1<::System::Single>* Field_1_462; // 0x6E0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_416; // 0x6E8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_75; // 0x6F0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_65; // 0x6F8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_54; // 0x700
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_387; // 0x708
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Level::BangbooPlayType>* Field_1_599; // 0x710
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::WeatherType>* Field_1_379; // 0x718
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_425; // 0x720
	::FlowCanvas::Nodes::SwitchValue_1<::ParadoxNotion::OperationMethod>* Field_1_602; // 0x728
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Keyframe>* Field_1_148; // 0x730
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HackerGameDamageData>* Field_1_30; // 0x738
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_243; // 0x740
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::RaycastHit2D>* Field_1_317; // 0x748
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_231; // 0x750
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_484; // 0x758
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_562; // 0x760
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_204; // 0x768
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_268; // 0x770
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::AimRectColor>* Field_1_126; // 0x778
	::FlowCanvas::Nodes::ShuffleList_1<::Foundation::Unreal::FTransform3D>* Field_1_161; // 0x780
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_260; // 0x788
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_441; // 0x790
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Bounds>* Field_1_309; // 0x798
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::RaycastHit2D>* Field_1_157; // 0x7A0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::StatusEffectType>* Field_1_40; // 0x7A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_45; // 0x7B0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_81; // 0x7B8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::EntityType>* Field_1_528; // 0x7C0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_523; // 0x7C8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_429; // 0x7D0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_246; // 0x7D8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_422; // 0x7E0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_585; // 0x7E8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::TimePeriodType>* Field_1_538; // 0x7F0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_51; // 0x7F8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Vector3>* Field_1_305; // 0x800
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_223; // 0x808
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::BubbleType>* Field_1_488; // 0x810
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_76; // 0x818
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::AbyssS2_EventType>* Field_1_322; // 0x820
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_519; // 0x828
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_228; // 0x830
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::ContactPoint2D>* Field_1_153; // 0x838
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_47; // 0x840
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_588; // 0x848
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_582; // 0x850
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_111; // 0x858
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_581; // 0x860
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_229; // 0x868
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::MultiTaskNodeHandle>* Field_1_185; // 0x870
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_249; // 0x878
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_32; // 0x880
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::AbilityTargetting>* Field_1_365; // 0x888
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_95; // 0x890
	::FlowCanvas::Nodes::StaticCodeEvent_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_320; // 0x898
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_402; // 0x8A0
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::NodeVisible>* Field_1_133; // 0x8A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_101; // 0x8B0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowPieceBlendMode>* Field_1_342; // 0x8B8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::MonsterStrengthType>* Field_1_373; // 0x8C0
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Vector4>* Field_1_466; // 0x8C8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ScoreUIAnimationType>* Field_1_186; // 0x8D0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_424; // 0x8D8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_236; // 0x8E0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_180; // 0x8E8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_396; // 0x8F0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_250; // 0x8F8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_230; // 0x900
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ScoreUIAnimationType>* Field_1_38; // 0x908
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_226; // 0x910
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_413; // 0x918
	::FlowCanvas::Nodes::ShuffleList_1<::Enum_3_7CF131C413C919AF>* Field_1_284; // 0x920
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_36; // 0x928
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_598; // 0x930
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_239; // 0x938
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_579; // 0x940
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::NodeState>* Field_1_132; // 0x948
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_400; // 0x950
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::AbyssS2_EventType>* Field_1_162; // 0x958
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_20; // 0x960
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Color>* Field_1_150; // 0x968
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::BubbleType>* Field_1_328; // 0x970
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_46; // 0x978
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_35; // 0x980
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::MultiTaskNodeHandle>* Field_1_505; // 0x988
	::FlowCanvas::Nodes::SetVariable_1<::System::Char>* Field_1_136; // 0x990
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_362; // 0x998
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_388; // 0x9A0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_100; // 0x9A8
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Keyframe>* Field_1_2; // 0x9B0
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Ray>* Field_1_158; // 0x9B8
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Collision2D*>* Field_1_475; // 0x9C0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Bounds>* Field_1_3; // 0x9C8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_117; // 0x9D0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::SpawnPointMaskRegion>* Field_1_507; // 0x9D8
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::ContactPoint>* Field_1_472; // 0x9E0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ChessEntityType>* Field_1_330; // 0x9E8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Keyframe>* Field_1_308; // 0x9F0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::System::UInt32>* Field_1_456; // 0x9F8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_596; // 0xA00
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_410; // 0xA08
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_104; // 0xA10
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Collision2D*>* Field_1_155; // 0xA18
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_404; // 0xA20
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_88; // 0xA28
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_255; // 0xA30
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_390; // 0xA38
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Rect>* Field_1_471; // 0xA40
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_233; // 0xA48
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_69; // 0xA50
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::SpawnPointMaskRegion>* Field_1_347; // 0xA58
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::ChessUIControlType>* Field_1_606; // 0xA60
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Bounds>* Field_1_469; // 0xA68
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_375; // 0xA70
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_196; // 0xA78
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::ChessUIIconType>* Field_1_447; // 0xA80
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_122; // 0xA88
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Vector3>* Field_1_465; // 0xA90
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_394; // 0xA98
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_431; // 0xAA0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Level::RatingType>* Field_1_600; // 0xAA8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_589; // 0xAB0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Vector2Int>* Field_1_43; // 0xAB8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_172; // 0xAC0
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::EndHollowMiniGameType>* Field_1_288; // 0xAC8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::Enum_3_7CF131C413C919AF>* Field_1_444; // 0xAD0
	::FlowCanvas::Nodes::SetVariable_1<::PipelineCamera::FinalCameraData>* Field_1_124; // 0xAD8
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::AimRectColor>* Field_1_285; // 0xAE0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_238; // 0xAE8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_103; // 0xAF0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_557; // 0xAF8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_72; // 0xB00
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_386; // 0xB08
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_86; // 0xB10
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::WrapMode>* Field_1_140; // 0xB18
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::EvtDestructionSwitchType>* Field_1_334; // 0xB20
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::MonsterStrengthType>* Field_1_533; // 0xB28
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_380; // 0xB30
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_41; // 0xB38
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_354; // 0xB40
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::DoubleEliteCardInfo>* Field_1_331; // 0xB48
	::FlowCanvas::Nodes::SetVariable_1<::Enum_3_7CF131C413C919AF>* Field_1_125; // 0xB50
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_514; // 0xB58
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::EntityType>* Field_1_59; // 0xB60
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_118; // 0xB68
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Level::BangbooPlayType>* Field_1_439; // 0xB70
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_418; // 0xB78
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::DoubleEliteCardInfo>* Field_1_171; // 0xB80
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_197; // 0xB88
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Keyframe>* Field_1_468; // 0xB90
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Vector2>* Field_1_144; // 0xB98
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_79; // 0xBA0
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Ray>* Field_1_478; // 0xBA8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_94; // 0xBB0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::EvtDestructionSwitchType>* Field_1_494; // 0xBB8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_560; // 0xBC0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Level::BangbooPlayType>* Field_1_279; // 0xBC8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::TimePeriodType>* Field_1_218; // 0xBD0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_437; // 0xBD8
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::HollowSystemType>* Field_1_289; // 0xBE0
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::ChessUIControlType>* Field_1_127; // 0xBE8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_278; // 0xBF0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_426; // 0xBF8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_50; // 0xC00
	::FlowCanvas::Nodes::SetVariable_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_14; // 0xC08
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_329; // 0xC10
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_109; // 0xC18
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_227; // 0xC20
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::EntityHandle>* Field_1_173; // 0xC28
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_524; // 0xC30
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_421; // 0xC38
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_195; // 0xC40
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::CampType>* Field_1_207; // 0xC48
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_350; // 0xC50
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_48; // 0xC58
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_116; // 0xC60
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_540; // 0xC68
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_428; // 0xC70
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_543; // 0xC78
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Level::BangbooPlayType>* Field_1_121; // 0xC80
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_251; // 0xC88
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Vector4>* Field_1_0; // 0xC90
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Space>* Field_1_159; // 0xC98
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::NodeState>* Field_1_291; // 0xCA0
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Space>* Field_1_479; // 0xCA8
	::FlowCanvas::Nodes::SwitchValue_1<::System::Int32>* Field_1_463; // 0xCB0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_499; // 0xCB8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::InlevelCameraState>* Field_1_529; // 0xCC0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::CampType>* Field_1_367; // 0xCC8
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::HollowSystemUIState>* Field_1_610; // 0xCD0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_537; // 0xCD8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_90; // 0xCE0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_85; // 0xCE8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_98; // 0xCF0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_49; // 0xCF8
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::EndHollowMiniGameType>* Field_1_129; // 0xD00
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_430; // 0xD08
	::FlowCanvas::Nodes::ShuffleList_1<::ProtoScript::HollowSystemUIState>* Field_1_290; // 0xD10
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_184; // 0xD18
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_53; // 0xD20
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_509; // 0xD28
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::NodeState>* Field_1_451; // 0xD30
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_420; // 0xD38
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_271; // 0xD40
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_181; // 0xD48
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_359; // 0xD50
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_551; // 0xD58
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Vector4>* Field_1_146; // 0xD60
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::EntityHandle>* Field_1_333; // 0xD68
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_339; // 0xD70
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_399; // 0xD78
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Color>* Field_1_470; // 0xD80
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_392; // 0xD88
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowPieceBlendMode>* Field_1_182; // 0xD90
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_265; // 0xD98
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_434; // 0xDA0
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::PostEffectType>* Field_1_134; // 0xDA8
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::LayerMask>* Field_1_298; // 0xDB0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::KeyCode>* Field_1_457; // 0xDB8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::LayerMask>* Field_1_458; // 0xDC0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_361; // 0xDC8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_18; // 0xDD0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_102; // 0xDD8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_106; // 0xDE0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::RaycastHit>* Field_1_316; // 0xDE8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_435; // 0xDF0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_580; // 0xDF8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::Share::GridDir>* Field_1_454; // 0xE00
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_240; // 0xE08
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::LayerMask>* Field_1_618; // 0xE10
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::BaseProperty>* Field_1_206; // 0xE18
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_73; // 0xE20
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_83; // 0xE28
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_544; // 0xE30
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::MonsterStrengthType>* Field_1_213; // 0xE38
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ParadoxNotion::OperationMethod>* Field_1_442; // 0xE40
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_254; // 0xE48
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_110; // 0xE50
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_568; // 0xE58
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::GameplayTag>* Field_1_336; // 0xE60
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Level::RatingType>* Field_1_440; // 0xE68
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_358; // 0xE70
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_261; // 0xE78
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_577; // 0xE80
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::AbilityTargetting>* Field_1_205; // 0xE88
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_564; // 0xE90
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_281; // 0xE98
	::FlowCanvas::Nodes::SetVariable_1<::ProtoScript::ChessUIIconType>* Field_1_128; // 0xEA0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FairyTextUpdateType>* Field_1_28; // 0xEA8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_21; // 0xEB0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_363; // 0xEB8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_52; // 0xEC0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::EvtDestructionSwitchType>* Field_1_174; // 0xEC8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::GameplayTag>* Field_1_176; // 0xED0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_571; // 0xED8
	::FlowCanvas::Nodes::ShuffleList_1<::System::Boolean>* Field_1_141; // 0xEE0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::ContactPoint2D>* Field_1_7; // 0xEE8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_374; // 0xEF0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_327; // 0xEF8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::MonsterFunctionType>* Field_1_532; // 0xF00
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_189; // 0xF08
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::RigidbodyConstraints>* Field_1_619; // 0xF10
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Bounds>* Field_1_149; // 0xF18
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_487; // 0xF20
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_353; // 0xF28
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_245; // 0xF30
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_165; // 0xF38
	::FlowCanvas::Nodes::StaticCodeEvent_1<::System::Single>* Field_1_302; // 0xF40
	::FlowCanvas::Nodes::SwitchValue_1<::PipelineCamera::FinalCameraData>* Field_1_603; // 0xF48
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_113; // 0xF50
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::AnimStateCheckType>* Field_1_483; // 0xF58
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HackerGameCliParamType>* Field_1_29; // 0xF60
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_193; // 0xF68
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_244; // 0xF70
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_269; // 0xF78
	::FlowCanvas::Nodes::SwitchValue_1<::Foundation::Unreal::FTransform3D>* Field_1_481; // 0xF80
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Collision2D*>* Field_1_315; // 0xF88
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_515; // 0xF90
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::LayerMask>* Field_1_138; // 0xF98
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_343; // 0xFA0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_26; // 0xFA8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_71; // 0xFB0
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::Collision*>* Field_1_154; // 0xFB8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_417; // 0xFC0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_225; // 0xFC8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_351; // 0xFD0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_555; // 0xFD8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_364; // 0xFE0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_565; // 0xFE8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_595; // 0xFF0
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::KeyCode>* Field_1_137; // 0xFF8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_432; // 0x1000
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_273; // 0x1008
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_513; // 0x1010
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_542; // 0x1018
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::ContactPoint2D>* Field_1_473; // 0x1020
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Space>* Field_1_319; // 0x1028
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_89; // 0x1030
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_590; // 0x1038
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::AnimStateCheckType>* Field_1_163; // 0x1040
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_534; // 0x1048
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_221; // 0x1050
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FairyTextUpdateType>* Field_1_495; // 0x1058
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_256; // 0x1060
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::RaycastHit2D>* Field_1_477; // 0x1068
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_232; // 0x1070
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_572; // 0x1078
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::AbyssS2_EventType>* Field_1_16; // 0x1080
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_520; // 0x1088
	::FlowCanvas::Nodes::SetVariable_1<::ParadoxNotion::OperationMethod>* Field_1_123; // 0x1090
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_403; // 0x1098
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::CampType>* Field_1_58; // 0x10A0
	::FlowCanvas::Nodes::SetVariable_1<::Share::GridDir>* Field_1_135; // 0x10A8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_235; // 0x10B0
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::ContactPoint>* Field_1_152; // 0x10B8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ScoreUIAnimationType>* Field_1_506; // 0x10C0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::WrapMode>* Field_1_460; // 0x10C8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::InlevelCameraState>* Field_1_209; // 0x10D0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_183; // 0x10D8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_584; // 0x10E0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_549; // 0x10E8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HackerGameDamageData>* Field_1_178; // 0x10F0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_267; // 0x10F8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_427; // 0x1100
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_23; // 0x1108
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_553; // 0x1110
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_164; // 0x1118
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Config::TimePeriodType>* Field_1_378; // 0x1120
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_275; // 0x1128
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_96; // 0x1130
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Quaternion>* Field_1_1; // 0x1138
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_262; // 0x1140
	::FlowCanvas::Nodes::ShuffleList_1<::ParadoxNotion::OperationMethod>* Field_1_282; // 0x1148
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_559; // 0x1150
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_561; // 0x1158
	::FlowCanvas::Nodes::ShuffleList_1<::System::UInt32>* Field_1_296; // 0x1160
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_356; // 0x1168
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FairyTextUpdateType>* Field_1_335; // 0x1170
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_99; // 0x1178
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_276; // 0x1180
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::WrapMode>* Field_1_620; // 0x1188
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_19; // 0x1190
	::FlowCanvas::Nodes::StaticCodeEvent_1<::ProtoScript::HollowSystemType>* Field_1_449; // 0x1198
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_583; // 0x11A0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_217; // 0x11A8
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_409; // 0x11B0
	::FlowCanvas::Nodes::ShuffleList_1<::UnityEngine::KeyCode>* Field_1_297; // 0x11B8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::SpawnPointMaskRegion>* Field_1_39; // 0x11C0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_257; // 0x11C8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::SpawnPointMaskRegion>* Field_1_187; // 0x11D0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_114; // 0x11D8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::DoubleEliteCardInfo>* Field_1_25; // 0x11E0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_398; // 0x11E8
	::FlowCanvas::Nodes::ShuffleList_1<::System::Single>* Field_1_142; // 0x11F0
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_253; // 0x11F8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_107; // 0x1200
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::AimRectColor>* Field_1_605; // 0x1208
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_214; // 0x1210
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_384; // 0x1218
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_492; // 0x1220
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_325; // 0x1228
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HollowPieceBlendMode>* Field_1_502; // 0x1230
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_33; // 0x1238
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_485; // 0x1240
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_120; // 0x1248
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::ScreenEffectType>* Field_1_67; // 0x1250
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_115; // 0x1258
	::FlowCanvas::Nodes::StaticCodeEvent_1<::UnityEngine::Color>* Field_1_310; // 0x1260
	::FlowCanvas::Nodes::StaticCodeEvent_1<::PipelineCamera::FinalCameraData>* Field_1_443; // 0x1268
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_169; // 0x1270
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_501; // 0x1278
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_550; // 0x1280
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_406; // 0x1288
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_546; // 0x1290
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_389; // 0x1298
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_78; // 0x12A0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_522; // 0x12A8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::Config::InputType>* Field_1_61; // 0x12B0
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_436; // 0x12B8
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::Collision*>* Field_1_474; // 0x12C0
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_558; // 0x12C8
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::Vector2Int>* Field_1_192; // 0x12D0
	::FlowCanvas::Nodes::SwitchValue_1<::Enum_3_7CF131C413C919AF>* Field_1_604; // 0x12D8
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_42; // 0x12E0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_91; // 0x12E8
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Vector2Int>* Field_1_512; // 0x12F0
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::BubbleType>* Field_1_22; // 0x12F8
	::FlowCanvas::Nodes::SetVariable_1<::UnityEngine::Rect>* Field_1_5; // 0x1300
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_97; // 0x1308
	::FlowCanvas::Nodes::StaticCodeEvent_1<::System::Int32>* Field_1_303; // 0x1310
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::NodeState>* Field_1_611; // 0x1318
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_190; // 0x1320
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_393; // 0x1328
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::Config::WeatherType>* Field_1_539; // 0x1330
	::FlowCanvas::Nodes::SwitchValue_1<::System::Boolean>* Field_1_461; // 0x1338
	::FlowCanvas::Nodes::SetVariable_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_77; // 0x1340
	::FlowCanvas::Nodes::StaticCodeEvent_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_324; // 0x1348
	::FlowCanvas::Nodes::SwitchValue_1<::UnityEngine::RaycastHit>* Field_1_476; // 0x1350
	::FlowCanvas::Nodes::SwitchValue_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_566; // 0x1358
	::FlowCanvas::Nodes::SwitchValue_1<::ProtoScript::EndHollowMiniGameType>* Field_1_608; // 0x1360
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_252; // 0x1368
	::FlowCanvas::Nodes::ShuffleList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_258; // 0x1370

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_10__CTOR_OFFSET))(this);
	}
};
