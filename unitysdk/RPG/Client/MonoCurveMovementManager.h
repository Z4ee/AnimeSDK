#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/RPG/Client/ECurveMovementBlockReason.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MonoCurveAudioManager; }
namespace RPG::Client { class MonoCurveMovementManager_StateSaver; }
namespace RPG::Client { class MonoCurveMovementObject; }
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace RPG::GameCore { class ToastPile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD73F6D0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD740FE0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_DRIVEMOVEMENTHANDLERBYOBJECT_OFFSET UNITYSDK_OFFSET(0xD73DDF0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_FINDMOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xD73D830)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_GETMOVEMENTHANDLERS_OFFSET UNITYSDK_OFFSET(0xD73D4B0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_INITMANAGER_OFFSET UNITYSDK_OFFSET(0xD73D280)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ISALLMOVEMENTHANDLERCOMPLETED_OFFSET UNITYSDK_OFFSET(0xD73D690)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ISANYMOVEMENTHANDLERMOVING_OFFSET UNITYSDK_OFFSET(0xD73D4F0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_METHOD_5_9941963216461BE2_OFFSET UNITYSDK_OFFSET(0xD741490)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_METHOD_5_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xD73D460)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD7412E0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEEND_OFFSET UNITYSDK_OFFSET(0xD73EA40)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERDETECTCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD73E720)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERENTERIDLESTATE_OFFSET UNITYSDK_OFFSET(0xD73E9C0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERFINISHMOVING_OFFSET UNITYSDK_OFFSET(0xD73E510)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERSTARTMOVING_OFFSET UNITYSDK_OFFSET(0xD73E470)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERUNABLETOMOVING_OFFSET UNITYSDK_OFFSET(0xD73E5D0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGCARINFO_OFFSET UNITYSDK_OFFSET(0xD73EA90)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGMINEINFO_OFFSET UNITYSDK_OFFSET(0xD73F000)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGTRACKINFO_OFFSET UNITYSDK_OFFSET(0xD73F350)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_START_OFFSET UNITYSDK_OFFSET(0xD73FC40)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD7409F0)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD741980)
#define RPG_CLIENT_MONOCURVEMOVEMENTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD7418B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_TypeDefinitionIndex = 68512;

	class MonoCurveMovementManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MonoCurveMovementManager_StateSaver*>** StaticGet_GPGBJMOOEDL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::MonoCurveMovementManager_StateSaver*>**)Il2CppClass::FromTypeDefinitionIndex(MonoCurveMovementManager_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		::System::Boolean saveStates; // 0x18
		::RPG::GameCore::ToastPile* unableToMoveToast; // 0x20
		::RPG::GameCore::ToastPile* unableToMoveByOtherToast; // 0x28
		::RPG::GameCore::ToastPile* unableToMoveByConnectionToast; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MonoCurveMovementObject*>* moveObjects; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::CurveMovementHandler*>* LNJCKLGGOKM; // 0x40
		::RPG::Client::MonoCurveUndirectedGraph* BPPHNOJIFAC; // 0x48
		::RPG::Client::MonoCurveTriggerManager* CKCHDFCOMMJ; // 0x50
		::RPG::Client::MonoCurveAudioManager* CEJLGLLCLFL; // 0x58
		::System::Boolean IsFinish; // 0x60
		::RPG::Client::MapPropDef* MapDef; // 0x68
		::System::String* CJDIFCBFIAB; // 0x70
		::System::Int32 HNDOHHLELDI; // 0x78
		::System::Int32 OMKBEDNJDFG; // 0x7C
		::System::Int32 EAOJJLDEKNP; // 0x80
		::System::Int32 HGPPCOLNAGI; // 0x84
		::System::Int32 OPCJIJDNJNM; // 0x88
		::System::String* _action_mine_id; // 0x90
		::System::Boolean OLOLCIBBIKP; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void InitManager(::RPG::Client::MapPropDef* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_INITMANAGER_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::CurveMovementHandler*>* GetMovementHandlers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::CurveMovementHandler*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_GETMOVEMENTHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsAnyMovementHandlerMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ISANYMOVEMENTHANDLERMOVING_OFFSET))(this);
		}

		::System::Boolean IsAllMovementHandlerCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ISALLMOVEMENTHANDLERCOMPLETED_OFFSET))(this);
		}

		::RPG::Client::CurveMovementHandler* FindMovableObject(::System::String* a1, ::RPG::Client::ECurveEdgePoint a2)
		{
			return ((::RPG::Client::CurveMovementHandler*(*)(::PVOID, ::System::String*, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_FINDMOVABLEOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void DriveMovementHandlerByObject(::RPG::Client::MonoCurveMovementObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_DRIVEMOVEMENTHANDLERBYOBJECT_OFFSET))(this, a1);
		}

		::System::Void OnMovementHandlerStartMoving(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERSTARTMOVING_OFFSET))(this, a1);
		}

		::System::Void OnMovementHandlerFinishMoving(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERFINISHMOVING_OFFSET))(this, a1);
		}

		::System::Void OnMovementHandlerUnableToMoving(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::ECurveMovementBlockReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::ECurveMovementBlockReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERUNABLETOMOVING_OFFSET))(this, a1, a2);
		}

		::System::Void OnMovementHandlerDetectCollider(::RPG::Client::CurveMovementHandler* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERDETECTCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnMovementHandlerEnterIdleState(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEMENTHANDLERENTERIDLESTATE_OFFSET))(this, a1);
		}

		::System::Void OnMoveEnd(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONMOVEEND_OFFSET))(this, a1);
		}

		::System::Void ReportLogCarInfo(::RPG::Client::CurveMovementHandler* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGCARINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ReportLogMineInfo(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGMINEINFO_OFFSET))(this, a1);
		}

		::System::Void ReportLogTrackInfo(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_REPORTLOGTRACKINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::MonoCurveMovementManager_StateSaver* Method_5_9941963216461BE2()
		{
			return ((::RPG::Client::MonoCurveMovementManager_StateSaver*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_METHOD_5_9941963216461BE2_OFFSET))(this);
		}

		::System::UInt32 Method_5_AA2D3E889C8A52CA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEMOVEMENTMANAGER_METHOD_5_AA2D3E889C8A52CA_OFFSET))(this);
		}
	};
}
