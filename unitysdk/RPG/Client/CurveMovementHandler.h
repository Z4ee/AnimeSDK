#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurveEdgePoint.h"
#include "unitysdk/RPG/Client/CurveEdgePointSetting.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/RPG/Client/ECurveMovementBlockReason.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class MonoCurveMovablePlayerTriggerRegion; }
namespace RPG::Client { class MonoCurveMovableTriggerRegion; }
namespace RPG::Client { class MonoCurveMovementManager; }
namespace RPG::Client { class MonoCurveMovementObject; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC88C80)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xCC885C0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_FROMPOINT_OFFSET UNITYSDK_OFFSET(0xCC88670)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xCC88580)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xCC88640)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xCC885D0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xCC88630)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISTRANSITION_OFFSET UNITYSDK_OFFSET(0xCC88380)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_LOCSTATUS_OFFSET UNITYSDK_OFFSET(0xCC886A0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0xCC88560)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xCC885A0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xCC88690)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0xCC88660)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xCC88650)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_TOPOINT_OFFSET UNITYSDK_OFFSET(0xCC88680)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0xCC87DC0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_1749C9009A08FDA0_OFFSET UNITYSDK_OFFSET(0xCC84350)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_5411CE720923C7BC_OFFSET UNITYSDK_OFFSET(0xCC84BF0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_54619462A38E2DE3_OFFSET UNITYSDK_OFFSET(0xCC86890)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_5E1F1C56DAD337FB_OFFSET UNITYSDK_OFFSET(0xCC89050)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xCC84290)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7D467EBFE5C652CF_OFFSET UNITYSDK_OFFSET(0xCC85660)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7EE62FB361B3512D_OFFSET UNITYSDK_OFFSET(0xCC86280)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_86ABD12CE7D706DB_OFFSET UNITYSDK_OFFSET(0xCC871B0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_8BD28CA07EC47CDB_OFFSET UNITYSDK_OFFSET(0xCC88EE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xCC87D20)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_946BB4FEA1D1E31E_OFFSET UNITYSDK_OFFSET(0xCC84B50)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCC85A90)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_99B422901E548512_OFFSET UNITYSDK_OFFSET(0xCC85BC0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_AB1A8DFD378DB0BE_OFFSET UNITYSDK_OFFSET(0xCC85EE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_C3DEB36A8C3E2BA5_OFFSET UNITYSDK_OFFSET(0xCC85B10)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_C733F4B13025CACB_OFFSET UNITYSDK_OFFSET(0xCC88190)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_CCBE8E3D38E773EF_OFFSET UNITYSDK_OFFSET(0xCC85910)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_DC4ED6DB5B93D711_OFFSET UNITYSDK_OFFSET(0xCC84610)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_DE3F7DF9E0B52E1C_OFFSET UNITYSDK_OFFSET(0xCC883D0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_F675341C48ED6437_OFFSET UNITYSDK_OFFSET(0xCC85FE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0xCC88590)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0xCC88570)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xCC885B0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCC88840)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveMovementHandler_TypeDefinitionIndex = 68511;

	class CurveMovementHandler : public ::System::Object
	{
	public:
		::RPG::Client::MonoCurveMovementManager* _Manager_k__BackingField; // 0x10
		::RPG::Client::MonoCurveUndirectedGraph* _Graph_k__BackingField; // 0x18
		::RPG::Client::MonoCurveMovementObject* _MovableObject_k__BackingField; // 0x20
		::System::Single _testMoveDistance; // 0x28
		::System::Single _percent; // 0x2C
		::RPG::Client::CurveEdgePoint _fromPoint; // 0x30
		::RPG::Client::CurveEdgePoint _toPoint; // 0x40
		::System::Boolean _isMoving; // 0x50
		::System::Boolean _isStarted; // 0x51
		::System::Boolean _isArrived; // 0x52
		::System::Single _speed; // 0x54
		::System::Single _totalMoveDistance; // 0x58
		::RPG::Client::ECurveMoveDirection _direction; // 0x5C
		::System::Action_1<::RPG::Client::CurveMovementHandler*>* _onEnd; // 0x60
		::System::Action_1<::RPG::Client::CurveMovementHandler*>* _onStop; // 0x68
		::RPG::GameCore::GameEntity* _entity; // 0x70
		::RPG::Client::MonoCurveMovementManager* _movementManager; // 0x78
		::RPG::Client::MonoCurveMovableTriggerRegion* _curveMovableTriggerRegion; // 0x80
		::System::Boolean _isPlayerTriggerAllowMove; // 0x88
		::RPG::Client::MonoCurveMovablePlayerTriggerRegion* _curveMovableAllowTriggerRegion; // 0x90
		::RPG::Client::MonoCurveMovablePlayerTriggerRegion* _curveMovableDisallowTriggerRegion; // 0x98
		::RPG::Client::ECurveMovementBlockReason _blockReason; // 0xA0
		::System::Boolean _isIdle; // 0xA4

		::System::Void _ctor(::RPG::Client::MonoCurveMovementManager* a1, ::RPG::Client::MonoCurveUndirectedGraph* a2, ::RPG::Client::MonoCurveMovementObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*, ::RPG::Client::MonoCurveUndirectedGraph*, ::RPG::Client::MonoCurveMovementObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_7AEA4B2B25797605()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
		}

		::System::Boolean Method_1_1749C9009A08FDA0(::System::String* a1, ::RPG::Client::ECurveEdgePoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_1749C9009A08FDA0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_DC4ED6DB5B93D711(::RPG::Client::MonoCurveMovementManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_DC4ED6DB5B93D711_OFFSET))(this, a1);
		}

		::System::Void Method_1_7D467EBFE5C652CF(::RPG::Client::CurveEdgePointSetting a1, ::RPG::Client::CurveEdgePointSetting a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgePointSetting, ::RPG::Client::CurveEdgePointSetting, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7D467EBFE5C652CF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_CCBE8E3D38E773EF(::RPG::Client::ECurveMoveDirection a1, ::System::Action_1<::RPG::Client::CurveMovementHandler*>* a2, ::System::Action_1<::RPG::Client::CurveMovementHandler*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveMoveDirection, ::System::Action_1<::RPG::Client::CurveMovementHandler*>*, ::System::Action_1<::RPG::Client::CurveMovementHandler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_CCBE8E3D38E773EF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_1_99B422901E548512(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_99B422901E548512_OFFSET))(this, a1);
		}

		::System::Void Method_1_7EE62FB361B3512D(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_7EE62FB361B3512D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_AB1A8DFD378DB0BE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_AB1A8DFD378DB0BE_OFFSET))(this);
		}

		::System::Single Method_1_C3DEB36A8C3E2BA5(::RPG::Client::ECurveMoveDirection a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_C3DEB36A8C3E2BA5_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_54619462A38E2DE3(::System::Single a1, ::System::Single& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_54619462A38E2DE3_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CurveEdgePoint Method_1_86ABD12CE7D706DB(::RPG::Client::ECurveMoveDirection a1)
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_86ABD12CE7D706DB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5411CE720923C7BC(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_5411CE720923C7BC_OFFSET))(this, a1);
		}

		::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
		}

		::System::Void Method_1_F675341C48ED6437()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_F675341C48ED6437_OFFSET))(this);
		}

		::System::Void Method_1_946BB4FEA1D1E31E(::RPG::Client::CurveUndirectedEdge* a1, ::RPG::Client::ECurveEdgePoint a2, ::RPG::Client::CurveUndirectedEdge* a3, ::RPG::Client::ECurveEdgePoint a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::CurveUndirectedEdge*, ::RPG::Client::ECurveEdgePoint, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_946BB4FEA1D1E31E_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_1_0FD0EC313FAAB75A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
		}

		::System::Boolean Method_1_C733F4B13025CACB(::RPG::Client::CurveEdgePointSetting& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveEdgePointSetting&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_C733F4B13025CACB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_DE3F7DF9E0B52E1C(::RPG::Client::CurveEdgePoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_DE3F7DF9E0B52E1C_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveMovementManager* get_Manager()
		{
			return ((::RPG::Client::MonoCurveMovementManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_Manager(::RPG::Client::MonoCurveMovementManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveUndirectedGraph* get_Graph()
		{
			return ((::RPG::Client::MonoCurveUndirectedGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_GRAPH_OFFSET))(this);
		}

		::System::Void set_Graph(::RPG::Client::MonoCurveUndirectedGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveUndirectedGraph*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_GRAPH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveMovementObject* get_MovableObject()
		{
			return ((::RPG::Client::MonoCurveMovementObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVABLEOBJECT_OFFSET))(this);
		}

		::System::Void set_MovableObject(::RPG::Client::MonoCurveMovementObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MOVABLEOBJECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_EntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ENTITYREF_OFFSET))(this);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISMOVING_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISARRIVED_OFFSET))(this);
		}

		::System::Boolean get_IsTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISTRANSITION_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_PERCENT_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint get_FromPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_FROMPOINT_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint get_ToPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_TOPOINT_OFFSET))(this);
		}

		::RPG::Client::ECurveMoveDirection get_MoveDirection()
		{
			return ((::RPG::Client::ECurveMoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVEDIRECTION_OFFSET))(this);
		}

		::System::Int32 get_LocStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_LOCSTATUS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_8BD28CA07EC47CDB(::RPG::GameCore::ECurveObjectLogicState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ECurveObjectLogicState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_8BD28CA07EC47CDB_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_5E1F1C56DAD337FB(::RPG::GameCore::ECurveObjectLogicState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ECurveObjectLogicState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_METHOD_1_5E1F1C56DAD337FB_OFFSET))(this, a1);
		}
	};
}
