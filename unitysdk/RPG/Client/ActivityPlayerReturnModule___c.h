#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_92B1BD6FC8375724;
class Class_1_983E3C7FD339FC5A;
class Class_1_A509A996D269C6F2_2;
class Class_1_BB62CC0FD1E45ADE_10;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FA5E50)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8FA5E80)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET UNITYSDK_OFFSET(0x8FA6060)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET UNITYSDK_OFFSET(0x8FA6090)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET UNITYSDK_OFFSET(0x8FA60E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET UNITYSDK_OFFSET(0x8FA5FE0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET UNITYSDK_OFFSET(0x8FA6010)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET UNITYSDK_OFFSET(0x8FA5F60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET UNITYSDK_OFFSET(0x8FA5F90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__181_0_OFFSET UNITYSDK_OFFSET(0x8FA60F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET UNITYSDK_OFFSET(0x8FA5E90)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET UNITYSDK_OFFSET(0x8FA5ED0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET UNITYSDK_OFFSET(0x8FA5EF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___c_TypeDefinitionIndex = 50224;

	class ActivityPlayerReturnModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F820);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F828);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F830);
		}
		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F838);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>** StaticGet___9__57_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F840);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F848);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F850);
		}
		static ::RPG::Client::ActivityPlayerReturnModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPlayerReturnModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F858);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F860);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_983E3C7FD339FC5A*>** StaticGet___9__94_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_983E3C7FD339FC5A*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F868);
		}
		static ::System::Action** StaticGet___9__94_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F870);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__181_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x2F878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnPlayerReturnTakeExtraHcoinScNotify_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET))(this);
		}

		::System::UInt32 __RefreshCurInviteConfig_b__57_0(::RPG::GameCore::PlayerReturnInviteRow* row)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET))(this, row);
		}

		::RPG::Client::ItemData* __RefreshCurInviteConfig_b__57_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> kv)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET))(this, kv);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetInviterInfoWWWReq_b__92_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>* _SendGetInviterInfoWWWReq_b__92_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetInviteeInfoWWWReq_b__93_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>* _SendGetInviteeInfoWWWReq_b__93_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendBindInvitationCodeWWWReq_b__94_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET))(this, req);
		}

		::Class_1_983E3C7FD339FC5A* _SendBindInvitationCodeWWWReq_b__94_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::Class_1_983E3C7FD339FC5A*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET))(this, rsp);
		}

		::System::Void _SendBindInvitationCodeWWWReq_b__94_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET))(this);
		}

		::System::Boolean __OnPlayerReturnInfoQueryScRsp_b__181_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__181_0_OFFSET))(this, x);
		}
	};
}
