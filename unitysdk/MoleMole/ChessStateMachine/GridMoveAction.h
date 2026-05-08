#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6.h"
#include "unitysdk/MoleMole/ChessStateMachine/GridMoveAction_RuntimeData.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineGeometryEntityAction_1.h"
#include "unitysdk/MoleMole/HollowChessboard/GeometryHeightType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class Class_1_055C5EAE0A9ABD4D;
class Class_1_08B34D65A9FCAAE5;
class Class_1_34B3048095D388ED;
class Class_1_9518B5776748B41E;
class Class_1_EDF7E2913A3DD535;
class Class_3_5A46B9360F369125;
class Class_4_DA19DD65175B97CF;
class Class_5_8A5B236F53009830;
class Class_5_A6F8D19602712D95;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x11011170)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ANIMATEDCHESSBOARDSWITCH_OFFSET UNITYSDK_OFFSET(0x1100F880)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_BUILDLOCALMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x110104F0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CHANGEGEOMETRYRENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1100F560)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CREATEANDADDRENDERENTRY_OFFSET UNITYSDK_OFFSET(0x11010B70)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_DORISEORSINKBYCONFIG_OFFSET UNITYSDK_OFFSET(0x11010C60)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x11011060)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x11010F70)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_OFFSET UNITYSDK_OFFSET(0x1100FE10)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x11011220)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x110110E0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERDATA_OFFSET UNITYSDK_OFFSET(0x110105A0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERTYPE_OFFSET UNITYSDK_OFFSET(0x1100F610)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x1100F740)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1100F2B0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_STOP_OFFSET UNITYSDK_OFFSET(0x110110A0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x11011230)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x11011250)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x110112E0)
#define MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_STOP_OFFSET UNITYSDK_OFFSET(0x11011370)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int GridMoveAction_TypeDefinitionIndex = 68220;

	class GridMoveAction : public ::MoleMole::ChessStateMachine::StateMachineGeometryEntityAction_1<::MoleMole::ChessStateMachine::GridMoveAction_RuntimeData>
	{
	public:
		::MoleMole::PieceModelAnimType animType; // 0x30
		::System::Boolean ForceCloseMultipleDisplay; // 0x34
		::MoleMole::HollowChessboard::GeometryHeightType HeightType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::Class_3_5A46B9360F369125* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_5A46B9360F369125*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUN_OFFSET))(this, context);
		}

		static ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 ChangeGeometryRenderType(::Class_5_8A5B236F53009830* data, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6& targetRenderType)
		{
			return ((::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6(*)(::Class_5_8A5B236F53009830*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CHANGEGEOMETRYRENDERTYPE_OFFSET))(data, targetRenderType);
		}

		::System::Void ReconstructRenderType(::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 targetRenderType, ::Class_5_8A5B236F53009830* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_5_8A5B236F53009830*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERTYPE_OFFSET))(this, targetRenderType, data);
		}

		::System::Void AnimatedChessboardSwitch(::Class_5_8A5B236F53009830* data, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 targetRenderType, ::Class_1_055C5EAE0A9ABD4D*& bigTvSwitchRunningData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_5_8A5B236F53009830*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6, ::Class_1_055C5EAE0A9ABD4D*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ANIMATEDCHESSBOARDSWITCH_OFFSET))(this, data, targetRenderType, bigTvSwitchRunningData);
		}

		static ::System::Void ReconstructRenderData(::Class_5_8A5B236F53009830* data, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6 targetRenderType)
		{
			return ((::System::Void(*)(::Class_5_8A5B236F53009830*, ::Class_5_8A5B236F53009830_Enum_3_0B9D3712457587B6))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RECONSTRUCTRENDERDATA_OFFSET))(data, targetRenderType);
		}

		static ::System::Void CreateAndAddRenderEntry(::Class_1_EDF7E2913A3DD535* renderWorld, ::Class_5_8A5B236F53009830* data, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* cellIndexList, ::Class_1_9518B5776748B41E* effectRole, ::Class_1_08B34D65A9FCAAE5* effectRuntimeData, ::MoleMole::HollowChessboard::HollowChessboardUID sectionId)
		{
			return ((::System::Void(*)(::Class_1_EDF7E2913A3DD535*, ::Class_5_8A5B236F53009830*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::Class_1_9518B5776748B41E*, ::Class_1_08B34D65A9FCAAE5*, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_CREATEANDADDRENDERENTRY_OFFSET))(renderWorld, data, cellIndexList, effectRole, effectRuntimeData, sectionId);
		}

		static ::System::Void RunInner(::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType animType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::Class_1_34B3048095D388ED* overrideInfo, ::System::Single speed)
		{
			return ((::System::Void(*)(::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Action*, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_RUNINNER_OFFSET))(chessPieceProxy, animType, geometryHeightType, onEnd, forceCloseMultipleDisplay, overrideInfo, speed);
		}

		static ::System::Void DoRiseOrSinkByConfig(::MoleMole::PieceModelAnimType animType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::Class_5_A6F8D19602712D95* chessPiece3dModel, ::System::Boolean preserveVE, ::Class_1_34B3048095D388ED* overrideInfo, ::System::Single speed)
		{
			return ((::System::Void(*)(::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::System::Action*, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::Class_5_A6F8D19602712D95*, ::System::Boolean, ::Class_1_34B3048095D388ED*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_DORISEORSINKBYCONFIG_OFFSET))(animType, geometryHeightType, onEnd, forceCloseMultipleDisplay, config, chessPiece3dModel, preserveVE, overrideInfo, speed);
		}

		static ::System::Boolean GetChangeStructConfig(::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config)
		{
			return ((::System::Boolean(*)(::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_OFFSET))(chessPieceProxy, changeType, geometryHeightType, config);
		}

		static ::System::Boolean GetChangeStructConfig_1(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config, ::Class_4_DA19DD65175B97CF* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::HollowChessboard::GeometryHeightType geometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup* configGroup)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&, ::Class_4_DA19DD65175B97CF*, ::MoleMole::PieceModelAnimType, ::MoleMole::HollowChessboard::GeometryHeightType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GETCHANGESTRUCTCONFIG_1_OFFSET))(config, chessPieceProxy, changeType, geometryHeightType, configGroup);
		}

		static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* BuildLocalMoveEffect(::MoleMole::PieceModelAnimType animType, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::System::Action* onEnd)
		{
			return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_BUILDLOCALMOVEEFFECT_OFFSET))(animType, forceCloseMultipleDisplay, config, onEnd);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_STOP_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ONSTOP_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_ACTIONOVER_OFFSET))(this);
		}

		::System::Void __base_ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_FORCESTOP_OFFSET))(this);
		}

		::System::Void __base_Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_GRIDMOVEACTION___BASE_STOP_OFFSET))(this);
		}
	};
}
