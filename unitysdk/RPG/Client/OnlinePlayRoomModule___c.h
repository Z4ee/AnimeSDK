#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FE2718AB7E599C80;
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD9EA8A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EA8E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_1_OFFSET UNITYSDK_OFFSET(0xD9EA9C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERINDEX_B__28_0_OFFSET UNITYSDK_OFFSET(0xD9EAA00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__39_0_OFFSET UNITYSDK_OFFSET(0xD9EAAC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__32_3_OFFSET UNITYSDK_OFFSET(0xD9EAA40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_B__33_0_OFFSET UNITYSDK_OFFSET(0xD9EAA80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__15_0_OFFSET UNITYSDK_OFFSET(0xD9EA930)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__5_0_OFFSET UNITYSDK_OFFSET(0xD9EA8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c_TypeDefinitionIndex = 66436;

	class OnlinePlayRoomModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_FE2718AB7E599C80*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::Class_1_FE2718AB7E599C80*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD30);
		}
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD38);
		}
		static ::System::Action** StaticGet___9__32_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD40);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>** StaticGet___9__33_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD48);
		}
		static ::System::Comparison_1<::Class_1_FE2718AB7E599C80*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::Class_1_FE2718AB7E599C80*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD50);
		}
		static ::RPG::Client::OnlinePlayRoomModule___c** StaticGet___9()
		{
			return (::RPG::Client::OnlinePlayRoomModule___c**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD58);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD60);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x3DD68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSocialPlayGameplayOperationScNotify_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__5_0_OFFSET))(this);
		}

		::System::Void _TryqueryOnlineRoomStatus_b__15_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__15_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_1(::Class_1_FE2718AB7E599C80* a1, ::Class_1_FE2718AB7E599C80* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FE2718AB7E599C80*, ::Class_1_FE2718AB7E599C80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetOnlineRoomPlayerIndex_b__28_0(::Class_1_FE2718AB7E599C80* a1, ::Class_1_FE2718AB7E599C80* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FE2718AB7E599C80*, ::Class_1_FE2718AB7E599C80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERINDEX_B__28_0_OFFSET))(this, a1, a2);
		}

		::System::Void _TransferToArrangePage_b__32_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__32_3_OFFSET))(this);
		}

		::System::Int32 _TryGetPendingVisitPlayerBriefDisplayData_b__33_0(::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a1, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_B__33_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetRecentVisitorList_b__39_0(::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a1, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__39_0_OFFSET))(this, a1, a2);
		}
	};
}
