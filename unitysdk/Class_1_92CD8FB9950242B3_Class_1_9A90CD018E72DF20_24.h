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

#define CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_24__CTOR_OFFSET UNITYSDK_OFFSET(0x1033BFA0)

inline static constexpr unsigned int Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_24_TypeDefinitionIndex = 85945;

class Class_1_92CD8FB9950242B3_Class_1_9A90CD018E72DF20_24 : public ::System::Object
{
public:
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector3>* Field_1_3; // 0x10
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Rect>* Field_1_462; // 0x18
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_431; // 0x20
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_248; // 0x28
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_401; // 0x30
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_92; // 0x38
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_82; // 0x40
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_407; // 0x48
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Int32>* Field_1_160; // 0x50
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_425; // 0x58
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_399; // 0x60
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_412; // 0x68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MonsterStrengthType>* Field_1_230; // 0x70
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_129; // 0x78
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Collision2D*>* Field_1_172; // 0x80
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::DoubleEliteCardInfo>* Field_1_343; // 0x88
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Char>* Field_1_152; // 0x90
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Level::BangbooPlayType>* Field_1_433; // 0x98
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_575; // 0xA0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_132; // 0xA8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGameDamageData>* Field_1_35; // 0xB0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_131; // 0xB8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Collision*>* Field_1_12; // 0xC0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_532; // 0xC8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_392; // 0xD0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::EntityHandle>* Field_1_484; // 0xD8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_48; // 0xE0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_500; // 0xE8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_59; // 0xF0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_576; // 0xF8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::AbilityTargetting>* Field_1_222; // 0x100
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::InputType>* Field_1_67; // 0x108
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_90; // 0x110
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_286; // 0x118
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_25; // 0x120
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_430; // 0x128
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_367; // 0x130
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ChessEntityType>* Field_1_342; // 0x138
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_525; // 0x140
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowPieceBlendMode>* Field_1_493; // 0x148
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::UInt32>* Field_1_313; // 0x150
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_587; // 0x158
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowPieceBlendMode>* Field_1_352; // 0x160
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Level::BangbooPlayType>* Field_1_296; // 0x168
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::AbyssS2_EventType>* Field_1_20; // 0x170
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_395; // 0x178
	::NodeCanvas::Framework::ExposedParameter_1<::ParadoxNotion::OperationMethod>* Field_1_593; // 0x180
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_358; // 0x188
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_127; // 0x190
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_394; // 0x198
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FairyTextUpdateType>* Field_1_486; // 0x1A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_285; // 0x1A8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector4>* Field_1_163; // 0x1B0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::ContactPoint2D>* Field_1_325; // 0x1B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::BubbleType>* Field_1_340; // 0x1C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_95; // 0x1C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ChessEntityType>* Field_1_28; // 0x1D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_81; // 0x1D8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::EntityHandle>* Field_1_30; // 0x1E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_100; // 0x1E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_509; // 0x1F0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Space>* Field_1_17; // 0x1F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_281; // 0x200
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_550; // 0x208
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_507; // 0x210
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_426; // 0x218
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_398; // 0x220
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_368; // 0x228
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_266; // 0x230
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_259; // 0x238
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Level::RatingType>* Field_1_591; // 0x240
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Level::BangbooPlayType>* Field_1_590; // 0x248
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_515; // 0x250
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_480; // 0x258
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_246; // 0x260
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_294; // 0x268
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RigidbodyConstraints>* Field_1_316; // 0x270
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_568; // 0x278
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_429; // 0x280
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_253; // 0x288
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGameDamageData>* Field_1_489; // 0x290
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_552; // 0x298
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_580; // 0x2A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_217; // 0x2A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::StatusEffectType>* Field_1_45; // 0x2B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Level::RatingType>* Field_1_297; // 0x2B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_104; // 0x2C0
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::AimRectColor>* Field_1_438; // 0x2C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_98; // 0x2D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::TimePeriodType>* Field_1_529; // 0x2D8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_477; // 0x2E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_18; // 0x2E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_579; // 0x2F0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_128; // 0x2F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_365; // 0x300
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::AbyssS2_EventType>* Field_1_473; // 0x308
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::EndHollowMiniGameType>* Field_1_441; // 0x310
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_99; // 0x318
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_506; // 0x320
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_125; // 0x328
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MonsterStrengthType>* Field_1_524; // 0x330
	::NodeCanvas::Framework::ExposedParameter_1<::PipelineCamera::FinalCameraData>* Field_1_594; // 0x338
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Color>* Field_1_167; // 0x340
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Color>* Field_1_461; // 0x348
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_420; // 0x350
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_247; // 0x358
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::BaseProperty>* Field_1_517; // 0x360
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::KeyCode>* Field_1_314; // 0x368
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::ModifierStacking>* Field_1_378; // 0x370
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_27; // 0x378
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_239; // 0x380
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_46; // 0x388
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::AnimStateCheckType>* Field_1_180; // 0x390
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGameCliParamType>* Field_1_194; // 0x398
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_241; // 0x3A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_232; // 0x3A8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_541; // 0x3B0
	::NodeCanvas::Framework::BBParameter_1<::Enum_3_7CF131C413C919AF>* Field_1_437; // 0x3B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::WeatherType>* Field_1_76; // 0x3C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector3>* Field_1_162; // 0x3C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_116; // 0x3D0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_282; // 0x3D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_292; // 0x3E0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::TimePeriodType>* Field_1_235; // 0x3E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_183; // 0x3F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::WeatherType>* Field_1_530; // 0x3F8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_47; // 0x400
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::ChessUIControlType>* Field_1_303; // 0x408
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_260; // 0x410
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_513; // 0x418
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_419; // 0x420
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_107; // 0x428
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_544; // 0x430
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGameDamageData>* Field_1_348; // 0x438
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Quaternion>* Field_1_5; // 0x440
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::AimRectColor>* Field_1_142; // 0x448
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_103; // 0x450
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RaycastHit2D>* Field_1_174; // 0x458
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_36; // 0x460
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_56; // 0x468
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::PipelineCamera::FinalCameraData>* Field_1_300; // 0x470
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::EntityType>* Field_1_375; // 0x478
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::NodeState>* Field_1_308; // 0x480
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_262; // 0x488
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Collision*>* Field_1_171; // 0x490
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_214; // 0x498
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_424; // 0x4A0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_561; // 0x4A8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_336; // 0x4B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_38; // 0x4B8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::MultiTaskNodeHandle>* Field_1_202; // 0x4C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RigidbodyConstraints>* Field_1_156; // 0x4C8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::ContactPoint>* Field_1_324; // 0x4D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_37; // 0x4D8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::InlevelCameraState>* Field_1_520; // 0x4E0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_265; // 0x4E8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_381; // 0x4F0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_51; // 0x4F8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RaycastHit2D>* Field_1_468; // 0x500
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_79; // 0x508
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_134; // 0x510
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_94; // 0x518
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::LayerMask>* Field_1_315; // 0x520
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FairyTextUpdateType>* Field_1_192; // 0x528
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::ScreenEffectType>* Field_1_383; // 0x530
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_557; // 0x538
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_96; // 0x540
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_385; // 0x548
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Collision*>* Field_1_465; // 0x550
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Vector2Int>* Field_1_503; // 0x558
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FairyTextUpdateType>* Field_1_346; // 0x560
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_538; // 0x568
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo>* Field_1_87; // 0x570
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Level::RatingType>* Field_1_137; // 0x578
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TaskCompletionSourceNodeHandle>* Field_1_206; // 0x580
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_543; // 0x588
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Quaternion>* Field_1_319; // 0x590
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::EntityType>* Field_1_225; // 0x598
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Level::BangbooPlayType>* Field_1_136; // 0x5A0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Bounds>* Field_1_460; // 0x5A8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_565; // 0x5B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_InLevelStateEnum>* Field_1_267; // 0x5B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Vector2Int>* Field_1_49; // 0x5C0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Quaternion>* Field_1_458; // 0x5C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_55; // 0x5D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_581; // 0x5D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_416; // 0x5E0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_251; // 0x5E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ParadoxNotion::OperationMethod>* Field_1_299; // 0x5F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_275; // 0x5F8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGameCliParamType>* Field_1_488; // 0x600
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_475; // 0x608
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::NodeState>* Field_1_148; // 0x610
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_181; // 0x618
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_277; // 0x620
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_578; // 0x628
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::CampType>* Field_1_224; // 0x630
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_539; // 0x638
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::HollowSystemUIState>* Field_1_307; // 0x640
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_512; // 0x648
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::EvtDestructionSwitchType>* Field_1_485; // 0x650
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_298; // 0x658
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_272; // 0x660
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::ScreenEffectType>* Field_1_527; // 0x668
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_23; // 0x670
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Rect>* Field_1_9; // 0x678
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::InlevelCameraState>* Field_1_376; // 0x680
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::EndHollowMiniGameType>* Field_1_305; // 0x688
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Share::GridDir>* Field_1_311; // 0x690
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_341; // 0x698
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::ModifierStacking>* Field_1_228; // 0x6A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Single>* Field_1_1; // 0x6A8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_111; // 0x6B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::InlevelCameraState>* Field_1_66; // 0x6B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_400; // 0x6C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_74; // 0x6C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Share::GridDir>* Field_1_151; // 0x6D0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_405; // 0x6D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::GameplayTag>* Field_1_193; // 0x6E0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_254; // 0x6E8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_109; // 0x6F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_264; // 0x6F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::ChessUIIconType>* Field_1_304; // 0x700
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_112; // 0x708
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Rect>* Field_1_323; // 0x710
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Keyframe>* Field_1_320; // 0x718
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_414; // 0x720
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_537; // 0x728
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::RaycastHit>* Field_1_173; // 0x730
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_102; // 0x738
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelEndNode_LevelEndPerformType>* Field_1_566; // 0x740
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_551; // 0x748
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::EntityHandle>* Field_1_190; // 0x750
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_57; // 0x758
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::AbyssS2_EventType>* Field_1_334; // 0x760
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RaycastHit2D>* Field_1_329; // 0x768
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_542; // 0x770
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::PostEffectType>* Field_1_150; // 0x778
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChessboardUpdateStateMachineParams_StateMachineParamsWrapper>* Field_1_287; // 0x780
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Foundation::Unreal::FTransform3D>* Field_1_19; // 0x788
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::SpawnPointMaskRegion>* Field_1_357; // 0x790
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_123; // 0x798
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_559; // 0x7A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_404; // 0x7A8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::EvtDestructionSwitchType>* Field_1_345; // 0x7B0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_386; // 0x7B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_84; // 0x7C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Char>* Field_1_312; // 0x7C8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector4>* Field_1_318; // 0x7D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_560; // 0x7D8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_573; // 0x7E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_29; // 0x7E8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowPieceBlendMode>* Field_1_199; // 0x7F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::DoubleEliteCardInfo>* Field_1_188; // 0x7F8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType>* Field_1_553; // 0x800
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_219; // 0x808
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MonsterStrengthType>* Field_1_70; // 0x810
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_113; // 0x818
	::NodeCanvas::Framework::ExposedParameter_1<::System::Int32>* Field_1_454; // 0x820
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::InputType>* Field_1_377; // 0x828
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_220; // 0x830
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Ray>* Field_1_175; // 0x838
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::EntityType>* Field_1_65; // 0x840
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::LayerMask>* Field_1_155; // 0x848
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_514; // 0x850
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::ChessUIControlType>* Field_1_143; // 0x858
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RaycastHit>* Field_1_467; // 0x860
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Collision2D*>* Field_1_327; // 0x868
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_85; // 0x870
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::HollowSystemUIState>* Field_1_443; // 0x878
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_413; // 0x880
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_118; // 0x888
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RaycastHit2D>* Field_1_15; // 0x890
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_72; // 0x898
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::WeatherType>* Field_1_236; // 0x8A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_61; // 0x8A8
	::NodeCanvas::Framework::ExposedParameter_1<::Foundation::Unreal::FTransform3D>* Field_1_472; // 0x8B0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Bounds>* Field_1_7; // 0x8B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::HollowSystemType>* Field_1_146; // 0x8C0
	::NodeCanvas::Framework::BBParameter_1<::Foundation::Unreal::FTransform3D>* Field_1_333; // 0x8C8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::EvtDestructionSwitchType>* Field_1_31; // 0x8D0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_567; // 0x8D8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_197; // 0x8E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::Enum_3_7CF131C413C919AF>* Field_1_141; // 0x8E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_562; // 0x8F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_242; // 0x8F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_211; // 0x900
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_361; // 0x908
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_54; // 0x910
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_577; // 0x918
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_337; // 0x920
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ScoreUIAnimationType>* Field_1_203; // 0x928
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_60; // 0x930
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_40; // 0x938
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_216; // 0x940
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EDoorOperation>* Field_1_554; // 0x948
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_349; // 0x950
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_406; // 0x958
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Ray>* Field_1_16; // 0x960
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_243; // 0x968
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Collision2D*>* Field_1_13; // 0x970
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_288; // 0x978
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::NodeVisible>* Field_1_149; // 0x980
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ChessEntityType>* Field_1_187; // 0x988
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_255; // 0x990
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_276; // 0x998
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::BaseProperty>* Field_1_373; // 0x9A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_396; // 0x9A8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_360; // 0x9B0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_427; // 0x9B8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector4>* Field_1_457; // 0x9C0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_101; // 0x9C8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RigidbodyConstraints>* Field_1_450; // 0x9D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::WrapMode>* Field_1_157; // 0x9D8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Color>* Field_1_322; // 0x9E0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::EntityType>* Field_1_519; // 0x9E8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::CampType>* Field_1_374; // 0x9F0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::PostEffectType>* Field_1_310; // 0x9F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_273; // 0xA00
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_110; // 0xA08
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_120; // 0xA10
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector2>* Field_1_455; // 0xA18
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_86; // 0xA20
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_585; // 0xA28
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_501; // 0xA30
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_53; // 0xA38
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_382; // 0xA40
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Bounds>* Field_1_321; // 0xA48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_534; // 0xA50
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_410; // 0xA58
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MonsterFunctionType>* Field_1_229; // 0xA60
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::AimRectColor>* Field_1_302; // 0xA68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Vector2Int>* Field_1_209; // 0xA70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_508; // 0xA78
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::CampType>* Field_1_518; // 0xA80
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* Field_1_263; // 0xA88
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterIDType>* Field_1_570; // 0xA90
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_177; // 0xA98
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_50; // 0xAA0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowEntityConfig_CampType>* Field_1_186; // 0xAA8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_397; // 0xAB0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_257; // 0xAB8
	::NodeCanvas::Framework::ExposedParameter_1<::Enum_3_7CF131C413C919AF>* Field_1_595; // 0xAC0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_91; // 0xAC8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_421; // 0xAD0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_126; // 0xAD8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Cameras::SideScrollingReturnActCameraPolarType>* Field_1_369; // 0xAE0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_572; // 0xAE8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_574; // 0xAF0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MonsterFunctionType>* Field_1_379; // 0xAF8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::HollowSystemType>* Field_1_306; // 0xB00
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowPieceBlendMode>* Field_1_39; // 0xB08
	::NodeCanvas::Framework::BBParameter_1<::Share::GridDir>* Field_1_447; // 0xB10
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ParadoxNotion::OperationMethod>* Field_1_139; // 0xB18
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::EndHollowMiniGameType>* Field_1_145; // 0xB20
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::LDDestroyEntity_DestroyEntityType>* Field_1_533; // 0xB28
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::TimePeriodType>* Field_1_75; // 0xB30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::AbyssS2_EventType>* Field_1_179; // 0xB38
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_476; // 0xB40
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_366; // 0xB48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_133; // 0xB50
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_201; // 0xB58
	::NodeCanvas::Framework::ExposedParameter_1<::System::Boolean>* Field_1_452; // 0xB60
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::LayerMask>* Field_1_609; // 0xB68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_196; // 0xB70
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_231; // 0xB78
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_208; // 0xB80
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::TargetArrowUIKind>* Field_1_582; // 0xB88
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Single>* Field_1_159; // 0xB90
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MonsterFunctionType>* Field_1_69; // 0xB98
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGameCliParamType>* Field_1_347; // 0xBA0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowCell>* Field_1_293; // 0xBA8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::MonsterFunctionType>* Field_1_523; // 0xBB0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Vector3>* Field_1_456; // 0xBB8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_402; // 0xBC0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::UInt32>* Field_1_153; // 0xBC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::ContactPoint>* Field_1_10; // 0xBD0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_389; // 0xBD8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_589; // 0xBE0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::InputType>* Field_1_227; // 0xBE8
	::NodeCanvas::Framework::BBParameter_1<::PipelineCamera::FinalCameraData>* Field_1_436; // 0xBF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::BubbleType>* Field_1_26; // 0xBF8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveMode>* Field_1_510; // 0xC00
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_78; // 0xC08
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Rect>* Field_1_168; // 0xC10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::SpawnPointMaskRegion>* Field_1_204; // 0xC18
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusFType>* Field_1_283; // 0xC20
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_270; // 0xC28
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* Field_1_449; // 0xC30
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_592; // 0xC38
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::TurnBattleUnitQueryFilter>* Field_1_207; // 0xC40
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::LevelQuestConditionOperation>* Field_1_505; // 0xC48
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_564; // 0xC50
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatItem>* Field_1_182; // 0xC58
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_291; // 0xC60
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ScoreUIAnimationType>* Field_1_43; // 0xC68
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::StatusEffectType>* Field_1_205; // 0xC70
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_339; // 0xC78
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::AnimStateCheckType>* Field_1_21; // 0xC80
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerAttachEffectData>* Field_1_490; // 0xC88
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_351; // 0xC90
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_417; // 0xC98
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::ScreenEffectType>* Field_1_73; // 0xCA0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_362; // 0xCA8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_556; // 0xCB0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDListenAvatarNode_ListenAvatarTargetType>* Field_1_411; // 0xCB8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Ray>* Field_1_330; // 0xCC0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_546; // 0xCC8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::AnimStateCheckType>* Field_1_335; // 0xCD0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Collision*>* Field_1_326; // 0xCD8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::GameplayTag>* Field_1_487; // 0xCE0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_80; // 0xCE8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::DoubleEliteCardInfo>* Field_1_482; // 0xCF0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIData>* Field_1_409; // 0xCF8
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Space>* Field_1_331; // 0xD00
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_388; // 0xD08
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LD_ReadMonsterFromCardData_CardMonsterInfo>* Field_1_256; // 0xD10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_261; // 0xD18
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardChangePieceInfo_ServerInfo>* Field_1_250; // 0xD20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector4>* Field_1_4; // 0xD28
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::System::Boolean>* Field_1_158; // 0xD30
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::CountDownUIOperation>* Field_1_258; // 0xD38
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::PipelineCamera::FinalCameraData>* Field_1_140; // 0xD40
	::NodeCanvas::Framework::ExposedParameter_1<::System::UInt32>* Field_1_607; // 0xD48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::ContactPoint2D>* Field_1_11; // 0xD50
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_117; // 0xD58
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::MultiTaskNodeHandle>* Field_1_355; // 0xD60
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_200; // 0xD68
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_354; // 0xD70
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::AbilityTargetting>* Field_1_372; // 0xD78
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_540; // 0xD80
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::MultiTaskNodeHandle>* Field_1_42; // 0xD88
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::PostEffectType>* Field_1_446; // 0xD90
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveType>* Field_1_511; // 0xD98
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_189; // 0xDA0
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::RaycastHit>* Field_1_328; // 0xDA8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_249; // 0xDB0
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::NodeState>* Field_1_444; // 0xDB8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_531; // 0xDC0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_535; // 0xDC8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_184; // 0xDD0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Collision2D*>* Field_1_466; // 0xDD8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_115; // 0xDE0
	::NodeCanvas::Framework::ExposedParameter_1<::System::Char>* Field_1_606; // 0xDE8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_289; // 0xDF0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::PerformType>* Field_1_122; // 0xDF8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_52; // 0xE00
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_198; // 0xE08
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::MusicBattleMarkerNodeType>* Field_1_71; // 0xE10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_213; // 0xE18
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::StatusEffectType>* Field_1_499; // 0xE20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Keyframe>* Field_1_6; // 0xE28
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HackerGameDamageData>* Field_1_195; // 0xE30
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::InputType>* Field_1_521; // 0xE38
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDDTargetAreaUIDataAdapter>* Field_1_271; // 0xE40
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::ChessUIControlType>* Field_1_597; // 0xE48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_93; // 0xE50
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Quaternion>* Field_1_164; // 0xE58
	::NodeCanvas::Framework::ExposedParameter_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_471; // 0xE60
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_221; // 0xE68
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BlockType>* Field_1_478; // 0xE70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ScoreUIAnimationType>* Field_1_497; // 0xE78
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ScoreUIAnimationType>* Field_1_356; // 0xE80
	::NodeCanvas::Framework::BBParameter_1<::UnityEngine::WrapMode>* Field_1_451; // 0xE88
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::HollowSystemType>* Field_1_600; // 0xE90
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ChessStateMachine::StateMachineParamsWrapper>* Field_1_370; // 0xE98
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_295; // 0xEA0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::AbilityTargetting>* Field_1_62; // 0xEA8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::GameplayTag>* Field_1_33; // 0xEB0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_268; // 0xEB8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::ContactPoint>* Field_1_463; // 0xEC0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Keyframe>* Field_1_459; // 0xEC8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::InlevelCameraState>* Field_1_226; // 0xED0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::PropertyModifyFunction>* Field_1_526; // 0xED8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Keyframe>* Field_1_165; // 0xEE0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_88; // 0xEE8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_210; // 0xEF0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_502; // 0xEF8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HackerGameCliParamType>* Field_1_34; // 0xF00
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_269; // 0xF08
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_218; // 0xF10
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::AnchorPointForwardAxis>* Field_1_252; // 0xF18
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::ChallengeQuestType>* Field_1_97; // 0xF20
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::ChessUIIconType>* Field_1_144; // 0xF28
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_FilterParams>* Field_1_240; // 0xF30
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_121; // 0xF38
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::MonsterStrengthType>* Field_1_380; // 0xF40
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::KeyCode>* Field_1_154; // 0xF48
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_138; // 0xF50
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_290; // 0xF58
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::NodeVisible>* Field_1_445; // 0xF60
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_24; // 0xF68
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Vector2>* Field_1_2; // 0xF70
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>* Field_1_549; // 0xF78
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::ChessboardRhythmMoveInputHandler_JudgeResult>* Field_1_563; // 0xF80
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_483; // 0xF88
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::NumberCompareType>* Field_1_280; // 0xF90
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_353; // 0xF98
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDSound_TargetType>* Field_1_583; // 0xFA0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::FocusUISpecialIconParam>* Field_1_558; // 0xFA8
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::ChessUIControlType>* Field_1_439; // 0xFB0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_274; // 0xFB8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams>* Field_1_89; // 0xFC0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_350; // 0xFC8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::System::Boolean>* Field_1_0; // 0xFD0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_41; // 0xFD8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_278; // 0xFE0
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::PostEffectType>* Field_1_604; // 0xFE8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_408; // 0xFF0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Bounds>* Field_1_166; // 0xFF8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HackerGameNpcDamageType>* Field_1_387; // 0x1000
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::EvtDestructionSwitchType>* Field_1_191; // 0x1008
	::NodeCanvas::Framework::BBParameter_1<::ParadoxNotion::OperationMethod>* Field_1_435; // 0x1010
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_245; // 0x1018
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AreaIDTag>* Field_1_548; // 0x1020
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::HackerGameNpcValueType>* Field_1_83; // 0x1028
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::ConfigRhythmMoveBeatMap_BeatMap_BeatType>* Field_1_338; // 0x1030
	::NodeCanvas::Framework::ExposedParameter_1<::System::Single>* Field_1_453; // 0x1038
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_234; // 0x1040
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::HollowEntityMoveEvent_Param>* Field_1_393; // 0x1048
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_279; // 0x1050
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::ChessUIIconType>* Field_1_440; // 0x1058
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Enum_3_7CF131C413C919AF>* Field_1_301; // 0x1060
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::MultiTaskNodeHandle>* Field_1_496; // 0x1068
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::BaseProperty>* Field_1_223; // 0x1070
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::NodeState>* Field_1_602; // 0x1078
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_384; // 0x1080
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::RaycastHit>* Field_1_14; // 0x1088
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::MonsterPositionDuty>* Field_1_391; // 0x1090
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::BaseProperty>* Field_1_63; // 0x1098
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::ChessShowUIView_MiniGameUIType>* Field_1_390; // 0x10A0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::CampType>* Field_1_64; // 0x10A8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::AbilityTargetting>* Field_1_516; // 0x10B0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd>* Field_1_588; // 0x10B8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParam>* Field_1_114; // 0x10C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::Foundation::Unreal::FTransform3D>* Field_1_178; // 0x10C8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::KeyCode>* Field_1_608; // 0x10D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Config::ModifierStacking>* Field_1_68; // 0x10D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDLevelZeroGetRoomIndexNode_RoomFormat>* Field_1_422; // 0x10E0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::InLevelTimerWidgetOperation>* Field_1_495; // 0x10E8
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FairyTextUpdateType>* Field_1_32; // 0x10F0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::WrapMode>* Field_1_611; // 0x10F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::LevelStateDefine_ELevelStateName>* Field_1_344; // 0x1100
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config>* Field_1_238; // 0x1108
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::AimRectColor>* Field_1_596; // 0x1110
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowEntityMoveComponent_MoveCmd_Dir>* Field_1_428; // 0x1118
	::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::Nodes::ReflectedFieldNodeWrapper_AccessMode>* Field_1_332; // 0x1120
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::HollowSystemUIState>* Field_1_601; // 0x1128
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_584; // 0x1130
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::TargetValueModifyFunc>* Field_1_528; // 0x1138
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AnchorWithStyle>* Field_1_547; // 0x1140
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::Battle::CurveMoveComponent_Config_SpeedMode>* Field_1_58; // 0x1148
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::EndHollowMiniGameType>* Field_1_599; // 0x1150
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo>* Field_1_244; // 0x1158
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::AIParamType>* Field_1_545; // 0x1160
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::RigidbodyConstraints>* Field_1_610; // 0x1168
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::CurveMoveComponent_Config_MoveDirection>* Field_1_215; // 0x1170
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_237; // 0x1178
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* Field_1_415; // 0x1180
	::NodeCanvas::Framework::BBParameter_1<::System::Char>* Field_1_448; // 0x1188
	::NodeCanvas::Framework::BBParameter_1<::ProtoScript::HollowSystemType>* Field_1_442; // 0x1190
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::TargetUIOperation>* Field_1_130; // 0x1198
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSceneMovePauseNode_PauseType>* Field_1_418; // 0x11A0
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::MonsterAlertInitParams>* Field_1_364; // 0x11A8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HollowChessboard::HackerGameCollisionData>* Field_1_586; // 0x11B0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::AnimStateCheckType>* Field_1_474; // 0x11B8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerOnDamagedData>* Field_1_492; // 0x11C0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::EFCLogLevel>* Field_1_555; // 0x11C8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::ContactPoint>* Field_1_169; // 0x11D0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_124; // 0x11D8
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::NodeVisible>* Field_1_603; // 0x11E0
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::ProtoScript::HollowSystemUIState>* Field_1_147; // 0x11E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::SpawnPointMaskRegion>* Field_1_498; // 0x11F0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Config::ModifierStacking>* Field_1_522; // 0x11F8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDTurnBasedGetEnemyMonsterList_Element>* Field_1_403; // 0x1200
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::InLevelCustomPerformerRunnerEnvironment>* Field_1_494; // 0x1208
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::ProtoScript::NodeVisible>* Field_1_309; // 0x1210
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::HackerGamePlayerEffectTypeChangedData>* Field_1_491; // 0x1218
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::LDReadDailyCardData_MonsterInfo>* Field_1_571; // 0x1220
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::InLevelMissionTipSourceType>* Field_1_106; // 0x1228
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::HackerGameNpcStringValueType>* Field_1_536; // 0x1230
	::NodeCanvas::Framework::ExposedParameter_1<::ProtoScript::ChessUIIconType>* Field_1_598; // 0x1238
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::SpawnPointMaskRegion>* Field_1_44; // 0x1240
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Battle::LevelQuestOperation>* Field_1_212; // 0x1248
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Battle::CurveMoveComponent_Config_LiftMode>* Field_1_363; // 0x1250
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::Config::ScreenEffectType>* Field_1_233; // 0x1258
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::HollowSystemStateType>* Field_1_105; // 0x1260
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::UnityEngine::Color>* Field_1_8; // 0x1268
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::FlowCanvas::Nodes::LDGetRhombusOffsetPosition_RhombusMType>* Field_1_284; // 0x1270
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::BabelTowerTemplateOverrideData>* Field_1_22; // 0x1278
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Config::AbilitySpecialParamType>* Field_1_371; // 0x1280
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::ContactPoint2D>* Field_1_464; // 0x1288
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_135; // 0x1290
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::NapCameraSequenceHandle>* Field_1_119; // 0x1298
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::ChessShowUIView_CanvasRTParams>* Field_1_77; // 0x12A0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::WrapMode>* Field_1_317; // 0x12A8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::Project::Config::MonsterGroupTemplateExt_MonsterTypeEnum>* Field_1_434; // 0x12B0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Vector2>* Field_1_161; // 0x12B8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::TurnBattleUnitQueryKey>* Field_1_359; // 0x12C0
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::ContactPoint2D>* Field_1_170; // 0x12C8
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Space>* Field_1_470; // 0x12D0
	::NodeCanvas::Framework::ExposedParameter_1<::Share::GridDir>* Field_1_605; // 0x12D8
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::HollowChessboard::HollowConstant_RenderPriority>* Field_1_432; // 0x12E0
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::Battle::GamePlayLogicKind>* Field_1_504; // 0x12E8
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::ChessEntityType>* Field_1_481; // 0x12F0
	::NodeCanvas::Framework::ExposedParameter_1<::UnityEngine::Ray>* Field_1_469; // 0x12F8
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::MoleMole::BubbleType>* Field_1_185; // 0x1300
	::NodeCanvas::Framework::BBParameter_1<::MoleMole::FlowCanvas::Nodes::LDSetInLevelStateGroup_StateGroupEnum>* Field_1_423; // 0x1308
	::MoleMole::FlowCanvas::Nodes::LDReverseList_1<::UnityEngine::Space>* Field_1_176; // 0x1310
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::BubbleType>* Field_1_479; // 0x1318
	::MoleMole::FlowCanvas::Nodes::LDDGenericDataSource_1<::MoleMole::FlowCanvas::Nodes::InteractionEndSuddenEventMsg>* Field_1_108; // 0x1320
	::NodeCanvas::Framework::ExposedParameter_1<::MoleMole::FlowCanvas::Nodes::MonsterCreateDataAnimatorParamType>* Field_1_569; // 0x1328

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92CD8FB9950242B3_CLASS_1_9A90CD018E72DF20_24__CTOR_OFFSET))(this);
	}
};
