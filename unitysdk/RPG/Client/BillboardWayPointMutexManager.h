#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BillboardWayPointMutexManager_EntityMutexStatus; }
namespace RPG::Client { class BillboardWayPointMutexManager_MutexConfig; }
namespace RPG::Client { class UIBillboard; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD8EAF0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_BOARDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1BD8F7C0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_GLOBALSHOW_OFFSET UNITYSDK_OFFSET(0x1BD8F7D0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1BD8F7F0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SETGLOBALBOARDSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x1BD8ECA0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SET_GLOBALSHOW_OFFSET UNITYSDK_OFFSET(0x1BD8F7E0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1BD8F800)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1BD8EBC0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ADJUSTBILLBOARDINDEX_OFFSET UNITYSDK_OFFSET(0x1BD8F4C0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CANBILLBOARDSHOW_OFFSET UNITYSDK_OFFSET(0x1BD8ED20)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CANWAYPOINTSHOW_OFFSET UNITYSDK_OFFSET(0x1BD8EDB0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__COMPAREBILLBOARDSBYCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x1BD8F6F0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CREATEMUTEXCONFIG_OFFSET UNITYSDK_OFFSET(0x1BD8F450)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD8E910)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1BD8F2D0)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__GETENTITYMUTEXSTATUS_OFFSET UNITYSDK_OFFSET(0x1BD8EE50)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__NOTIFYMUTEXSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BD8F140)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ONBILLBOARDVISIBLECHANGE_OFFSET UNITYSDK_OFFSET(0x1BD8F270)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ONMUTEXSTATUSCHANGE_OFFSET UNITYSDK_OFFSET(0x1BD8F050)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__SORTBILLBOARDS_OFFSET UNITYSDK_OFFSET(0x1BD8F620)
#define RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__TICKBILLBOARD_OFFSET UNITYSDK_OFFSET(0x1BD8EC40)

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexManager_TypeDefinitionIndex = 60598;

	class BillboardWayPointMutexManager : public ::System::Object
	{
	public:
		// static const ::System::Int32 _MUTEX_STATUS_NUM = 0x2; // 0x0
		::System::Comparison_1<::RPG::Client::UIBillboard*>* _SortBillboardsByCameraDistance; // 0x10
		::RPG::Client::BillboardWayPointMutexManager_MutexConfig* _MutexConfig; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus*>* _MutexStatus; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::UIBillboard*>* ActiveBillboards; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::UIBillboard*>* _SortedBillboards; // 0x30
		::System::Boolean _GlobalShow_k__BackingField; // 0x38
		::System::Boolean _Visible_k__BackingField; // 0x39
		::RPG::Client::BillboardShowType _BoardShowType; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_TICK_OFFSET))(this);
		}

		::System::Void SetGlobalBoardShowType(::RPG::Client::BillboardShowType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BillboardShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SETGLOBALBOARDSHOWTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _CanBillboardShow(::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CANBILLBOARDSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _CanWayPointShow(::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CANWAYPOINTSHOW_OFFSET))(this, a1);
		}

		::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus* _GetEntityMutexStatus(::RPG::Client::Billboard::BillboardIdentifier* a1)
		{
			return ((::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus*(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__GETENTITYMUTEXSTATUS_OFFSET))(this, a1);
		}

		::System::Void _OnMutexStatusChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ONMUTEXSTATUSCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnBillboardVisibleChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ONBILLBOARDVISIBLECHANGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetEntityByRuntimeID(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void _NotifyMutexStatusChange(::RPG::Client::Billboard::BillboardIdentifier* a1, ::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::RPG::Client::BillboardWayPointMutexManager_EntityMutexStatus*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__NOTIFYMUTEXSTATUSCHANGE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::BillboardWayPointMutexManager_MutexConfig* _CreateMutexConfig(::RPG::Client::Billboard::BillboardIdentifier* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::BillboardWayPointMutexManager_MutexConfig*(*)(::PVOID, ::RPG::Client::Billboard::BillboardIdentifier*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__CREATEMUTEXCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void _TickBillboard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__TICKBILLBOARD_OFFSET))(this);
		}

		::System::Void _AdjustBillboardIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__ADJUSTBILLBOARDINDEX_OFFSET))(this);
		}

		static ::System::Int32 _CompareBillboardsByCameraDistance(::RPG::Client::UIBillboard* a1, ::RPG::Client::UIBillboard* a2)
		{
			return ((::System::Int32(*)(::RPG::Client::UIBillboard*, ::RPG::Client::UIBillboard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__COMPAREBILLBOARDSBYCAMERADISTANCE_OFFSET))(a1, a2);
		}

		::System::Void _SortBillboards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER__SORTBILLBOARDS_OFFSET))(this);
		}

		::RPG::Client::BillboardShowType get_BoardShowType()
		{
			return ((::RPG::Client::BillboardShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_BOARDSHOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_GlobalShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_GLOBALSHOW_OFFSET))(this);
		}

		::System::Void set_GlobalShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SET_GLOBALSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_Visible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_GET_VISIBLE_OFFSET))(this);
		}

		::System::Void set_Visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDWAYPOINTMUTEXMANAGER_SET_VISIBLE_OFFSET))(this, a1);
		}
	};
}
