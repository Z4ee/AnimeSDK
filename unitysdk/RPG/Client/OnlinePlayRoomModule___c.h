#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F97A746160B55249;
class Class_1_FAB056C163F8DE9A;
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client::SocialPlay { class SocialPlayMapUIBridge; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9F3D70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD9F3DB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__69_0_OFFSET UNITYSDK_OFFSET(0xD9F3F90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__69_1_OFFSET UNITYSDK_OFFSET(0xD9F40F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_B__39_0_OFFSET UNITYSDK_OFFSET(0xD9F3ED0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__38_0_OFFSET UNITYSDK_OFFSET(0xD9F3E90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__68_0_OFFSET UNITYSDK_OFFSET(0xD9F3F50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GET__FIRSTPENDINGVISITINFO_B__128_0_OFFSET UNITYSDK_OFFSET(0xD9F4190)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__61_3_OFFSET UNITYSDK_OFFSET(0xD9F3F10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__35_0_OFFSET UNITYSDK_OFFSET(0xD9F3E00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___GETONLINEPLAYERINFOLISTINROOM_B__81_0_OFFSET UNITYSDK_OFFSET(0xD9F4180)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__9_0_OFFSET UNITYSDK_OFFSET(0xD9F3DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c_TypeDefinitionIndex = 66402;

	class OnlinePlayRoomModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__9_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE00);
		}
		static ::RPG::Client::OnlinePlayRoomModule___c** StaticGet___9()
		{
			return (::RPG::Client::OnlinePlayRoomModule___c**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE08);
		}
		static ::System::Action** StaticGet___9__61_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE10);
		}
		static ::System::Func_2<::Class_1_FAB056C163F8DE9A*, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>** StaticGet___9__69_1()
		{
			return (::System::Func_2<::Class_1_FAB056C163F8DE9A*, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE18);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>** StaticGet___9__68_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE20);
		}
		static ::System::Comparison_1<::Class_1_F97A746160B55249*>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::Class_1_F97A746160B55249*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE28);
		}
		static ::System::Comparison_1<::Class_1_FAB056C163F8DE9A*>** StaticGet___9__69_0()
		{
			return (::System::Comparison_1<::Class_1_FAB056C163F8DE9A*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE30);
		}
		static ::System::Comparison_1<::Class_1_F97A746160B55249*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::Class_1_F97A746160B55249*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE38);
		}
		static ::System::Func_2<::Class_1_F97A746160B55249*, ::System::Boolean>** StaticGet___9__81_0()
		{
			return (::System::Func_2<::Class_1_F97A746160B55249*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE40);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE48);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>** StaticGet___9__128_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0xAE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSocialPlayGameplayOperationScNotify_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__9_0_OFFSET))(this);
		}

		::System::Void _TryqueryOnlineRoomStatus_b__35_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__35_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__38_0(::Class_1_F97A746160B55249* a1, ::Class_1_F97A746160B55249* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_F97A746160B55249*, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__38_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataListByFloor_b__39_0(::Class_1_F97A746160B55249* a1, ::Class_1_F97A746160B55249* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_F97A746160B55249*, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_B__39_0_OFFSET))(this, a1, a2);
		}

		::System::Void _TransferToArrangePage_b__61_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__61_3_OFFSET))(this);
		}

		::System::Int32 _GetRecentVisitorList_b__68_0(::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a1, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__68_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetMapUIBridgeList_b__69_0(::Class_1_FAB056C163F8DE9A* a1, ::Class_1_FAB056C163F8DE9A* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FAB056C163F8DE9A*, ::Class_1_FAB056C163F8DE9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__69_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* _GetMapUIBridgeList_b__69_1(::Class_1_FAB056C163F8DE9A* a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapUIBridge*(*)(::PVOID, ::Class_1_FAB056C163F8DE9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETMAPUIBRIDGELIST_B__69_1_OFFSET))(this, a1);
		}

		::System::Boolean __GetOnlinePlayerInfoListInRoom_b__81_0(::Class_1_F97A746160B55249* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___GETONLINEPLAYERINFOLISTINROOM_B__81_0_OFFSET))(this, a1);
		}

		::System::Int32 _get__FirstPendingVisitInfo_b__128_0(::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a1, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GET__FIRSTPENDINGVISITINFO_B__128_0_OFFSET))(this, a1, a2);
		}
	};
}
