#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_53D66773613B7EFD.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithIntData.h"

namespace RPG::Client { class NetPacket; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class NotifyManager_DelayPacket; }
namespace RPG::Client { class NotifyManager_NotifyHandlerInfo; }
namespace RPG::Client { class NotifyManager_RspHandlerInfo; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E7DA0)
#define RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E6770)
#define RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E7A80)
#define RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET UNITYSDK_OFFSET(0xC2E73C0)
#define RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xC2E5940)
#define RPG_CLIENT_NOTIFYMANAGER_ENDDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xC2E5000)
#define RPG_CLIENT_NOTIFYMANAGER_ENDPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xC2E5310)
#define RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC2E54F0)
#define RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xC2E5510)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET UNITYSDK_OFFSET(0xC2DC2D0)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET UNITYSDK_OFFSET(0xC2E64C0)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET UNITYSDK_OFFSET(0xC2E74B0)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xC2D7B50)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E6D90)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E7080)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E6F00)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E7240)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E8190)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2E59D0)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E6AB0)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET UNITYSDK_OFFSET(0xC2E7FF0)
#define RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xC2E5500)
#define RPG_CLIENT_NOTIFYMANAGER_STARTDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xC2E4D50)
#define RPG_CLIENT_NOTIFYMANAGER_STARTPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xC2E52D0)
#define RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xC2E5350)
#define RPG_CLIENT_NOTIFYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xC2E8260)
#define RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET UNITYSDK_OFFSET(0xC2E6CB0)
#define RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET UNITYSDK_OFFSET(0xC2E6280)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYDELAYPACKETS_OFFSET UNITYSDK_OFFSET(0xC2E5110)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET UNITYSDK_OFFSET(0xC2E7710)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET UNITYSDK_OFFSET(0xC2E7560)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2E6320)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2E7970)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2E5A30)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xC2E5EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_TypeDefinitionIndex = 55406;

	class NotifyManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Enum_3_53D66773613B7EFD>** StaticGet_DelayProtoBlackList()
		{
			return (::Il2CppArray<::Enum_3_53D66773613B7EFD>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13640);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>** StaticGet__LuaNotifyListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13648);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__PendingToRemoves()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13650);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13658);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>** StaticGet__LuaPacketListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13660);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13668);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>** StaticGet__PendingNotifyHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13670);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ShouldBlockErrorRspMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13678);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13680);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13688);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>** StaticGet__DelayPackets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13690);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>** StaticGet__NotifyHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x13698);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>** StaticGet__AlwaysRspHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136A0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet__LuaPacketListenRequireRspObject()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136A8);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>** StaticGet__PendingRspHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136B0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__RetcodeNotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136B8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyCSharpMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136C0);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>** StaticGet__RspHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136C8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ProcessPendingRspHandlersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136D0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DelayIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x136D8);
		}
		static ::Unity::Profiling::ProfilerMarkerWithIntData* StaticGet_NotifyPacketMarker()
		{
			return (::Unity::Profiling::ProfilerMarkerWithIntData*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A80);
		}
		static ::System::Boolean* StaticGet__IsPendingMapDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A90);
		}
		static ::System::Boolean* StaticGet__IsLoadingDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A91);
		}
		static ::System::Boolean* StaticGet_UseDelayPacketOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A92);
		}
		static ::System::Boolean* StaticGet__IsDestroyed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A93);
		}
		static ::System::Int32* StaticGet__LockNotifyHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A94);
		}
		static ::System::Int32* StaticGet__LockPacketHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x7A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void StartDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_STARTDELAYPACKET_OFFSET))();
		}

		static ::System::Void EndDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ENDDELAYPACKET_OFFSET))();
		}

		static ::System::Void StartPendingMapDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_STARTPENDINGMAPDELAYPACKET_OFFSET))();
		}

		static ::System::Void EndPendingMapDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ENDPENDINGMAPDELAYPACKET_OFFSET))();
		}

		static ::System::Void _NotifyDelayPackets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYDELAYPACKETS_OFFSET))();
		}

		static ::System::Boolean TryDelayPacket(::System::UInt16 a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET))();
		}

		static ::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET))();
		}

		static ::System::Void RemoveHandlers(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET))(a1);
		}

		static ::System::Void Notify(::RPG::Client::NotifyType a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET))(a1, a2, a3);
		}

		static ::System::Void NotifyToLua(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET))(a1, a2);
		}

		static ::System::Void AddNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RemoveNotifyHandlers(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET))(a1);
		}

		static ::System::Void _ProcessPendingNotifyHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET))();
		}

		static ::System::Boolean _IsPendingToRemove(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Boolean(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 _GetHandlerHashCode(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Int32(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnAddLuaNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void OnRemoveLuaNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void OnAddLuaPacketHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OnRemoveLuaPacketHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET))(a1, a2);
		}

		static ::System::Void ClearLuaListenCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET))();
		}

		static ::System::Void Notify_1(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Void(*)(::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET))(a1);
		}

		static ::System::Void NotifyPacket(::System::UInt16 a1, ::System::UInt32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _NotifyRspGroup(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>* a1, ::System::UInt16 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _NotifyRspGroupLua(::System::Int32 a1, ::System::UInt16 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddRspHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::RPG::Client::RspHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddAlwaysRspHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::RPG::Client::RspHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveRspHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::RPG::Client::RspHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveAlwaysRspHandler(::RPG::Client::NotifyGroup a1, ::System::UInt16 a2, ::RPG::Client::RspHandler* a3)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _RemoveRspHandlers(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET))(a1);
		}

		static ::System::Void _ProcessPendingRspHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET))();
		}
	};
}
