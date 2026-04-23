#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B43C9D79E06CBD5E.h"
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

#define RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xABDB000)
#define RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xABD9B00)
#define RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xABDADD0)
#define RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET UNITYSDK_OFFSET(0xABDA700)
#define RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0xABD8860)
#define RPG_CLIENT_NOTIFYMANAGER_ENDDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xABD7F10)
#define RPG_CLIENT_NOTIFYMANAGER_ENDPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xABD8220)
#define RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xABD8350)
#define RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xABD8370)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET UNITYSDK_OFFSET(0xABCE510)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET UNITYSDK_OFFSET(0xABD9850)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET UNITYSDK_OFFSET(0xABDA810)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET UNITYSDK_OFFSET(0xABC9FB0)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xABDA0A0)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xABDA3A0)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xABDA210)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0xABDA570)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0xABDB340)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0xABD88E0)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0xABD9D30)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET UNITYSDK_OFFSET(0xABDB1B0)
#define RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xABD8360)
#define RPG_CLIENT_NOTIFYMANAGER_STARTDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xABD7C70)
#define RPG_CLIENT_NOTIFYMANAGER_STARTPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xABD81E0)
#define RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET UNITYSDK_OFFSET(0xABD8260)
#define RPG_CLIENT_NOTIFYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xABDB440)
#define RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET UNITYSDK_OFFSET(0xABD9FC0)
#define RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET UNITYSDK_OFFSET(0xABD9550)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYDELAYPACKETS_OFFSET UNITYSDK_OFFSET(0xABD8040)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET UNITYSDK_OFFSET(0xABDAA80)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET UNITYSDK_OFFSET(0xABDA8C0)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xABD96D0)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xABDACE0)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xABD8940)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET UNITYSDK_OFFSET(0xABD9040)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_TypeDefinitionIndex = 54679;

	class NotifyManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>** StaticGet__DelayPackets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC630);
		}
		static ::Il2CppArray<::Enum_3_B43C9D79E06CBD5E>** StaticGet_DelayProtoBlackList()
		{
			return (::Il2CppArray<::Enum_3_B43C9D79E06CBD5E>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC638);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>** StaticGet__AlwaysRspHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC640);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>** StaticGet__PendingNotifyHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC648);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__PendingToRemoves()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC650);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet__LuaPacketListenRequireRspObject()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC658);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC660);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__RetcodeNotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC668);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>** StaticGet__PendingRspHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC670);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyCSharpMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC678);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC680);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ShouldBlockErrorRspMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC688);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DelayIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC690);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>** StaticGet__LuaNotifyListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC698);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>** StaticGet__RspHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6A0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ProcessPendingRspHandlersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6A8);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6B0);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>** StaticGet__NotifyHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>** StaticGet__LuaPacketListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6C0);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0xC6C8);
		}
		static ::Unity::Profiling::ProfilerMarkerWithIntData* StaticGet_NotifyPacketMarker()
		{
			return (::Unity::Profiling::ProfilerMarkerWithIntData*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A30);
		}
		static ::System::Int32* StaticGet__LockNotifyHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A40);
		}
		static ::System::Int32* StaticGet__LockPacketHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A44);
		}
		static ::System::Boolean* StaticGet__IsLoadingDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A48);
		}
		static ::System::Boolean* StaticGet_UseDelayPacketOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A49);
		}
		static ::System::Boolean* StaticGet__IsDestroyed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A4A);
		}
		static ::System::Boolean* StaticGet__IsPendingMapDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4A4B);
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

		static ::System::Boolean TryDelayPacket(::System::UInt16 cmdID, ::System::UInt32 retcode, ::System::Object* rsp)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET))(cmdID, retcode, rsp);
		}

		static ::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET))();
		}

		static ::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET))(value);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET))();
		}

		static ::System::Void RemoveHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET))(owner);
		}

		static ::System::Void Notify(::RPG::Client::NotifyType type, ::System::Object* arg, ::System::Boolean notifyToLua)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET))(type, arg, notifyToLua);
		}

		static ::System::Void NotifyToLua(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET))(type, arg);
		}

		static ::System::Void AddNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET))(group, type, handler);
		}

		static ::System::Void RemoveNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET))(group, type, handler);
		}

		static ::System::Void _RemoveNotifyHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET))(owner);
		}

		static ::System::Void _ProcessPendingNotifyHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET))();
		}

		static ::System::Boolean _IsPendingToRemove(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Boolean(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET))(group, type, handler);
		}

		static ::System::Int32 _GetHandlerHashCode(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Int32(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET))(group, type, handler);
		}

		static ::System::Void OnAddLuaNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET))(group, type);
		}

		static ::System::Void OnRemoveLuaNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET))(group, type);
		}

		static ::System::Void OnAddLuaPacketHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::System::Boolean requireRsp)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET))(group, cmdID, requireRsp);
		}

		static ::System::Void OnRemoveLuaPacketHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET))(group, cmdID);
		}

		static ::System::Void ClearLuaListenCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET))();
		}

		static ::System::Void Notify_1(::RPG::Client::NetPacket* pkt)
		{
			return ((::System::Void(*)(::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET))(pkt);
		}

		static ::System::Void NotifyPacket(::System::UInt16 cmdID, ::System::UInt32 retcode, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET))(cmdID, retcode, rsp);
		}

		static ::System::Void _NotifyRspGroup(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>* rspHandlers, ::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET))(rspHandlers, cmdID, rsp);
		}

		static ::System::Void _NotifyRspGroupLua(::System::Int32 g, ::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET))(g, cmdID, rsp);
		}

		static ::System::Void AddRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void AddAlwaysRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void RemoveRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void RemoveAlwaysRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void _RemoveRspHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET))(owner);
		}

		static ::System::Void _ProcessPendingRspHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET))();
		}
	};
}
