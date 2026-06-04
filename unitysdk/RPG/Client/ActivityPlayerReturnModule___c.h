#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_92B1BD6FC8375724;
class Class_1_A509A996D269C6F2_2;
class Class_1_BB62CC0FD1E45ADE_10;
class Class_1_D8AE373904B194A5;
namespace RPG::Client { class ItemData; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB1F2F30)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB1F2F60)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET UNITYSDK_OFFSET(0xB1F3140)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET UNITYSDK_OFFSET(0xB1F3170)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET UNITYSDK_OFFSET(0xB1F31C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET UNITYSDK_OFFSET(0xB1F30C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET UNITYSDK_OFFSET(0xB1F30F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET UNITYSDK_OFFSET(0xB1F3040)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET UNITYSDK_OFFSET(0xB1F3070)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__184_0_OFFSET UNITYSDK_OFFSET(0xB1F31D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET UNITYSDK_OFFSET(0xB1F2F70)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET UNITYSDK_OFFSET(0xB1F2FB0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET UNITYSDK_OFFSET(0xB1F2FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___c_TypeDefinitionIndex = 57858;

	class ActivityPlayerReturnModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__184_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59160);
		}
		static ::System::Action** StaticGet___9__94_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59168);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_D8AE373904B194A5*>** StaticGet___9__94_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_D8AE373904B194A5*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59170);
		}
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59178);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__94_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59180);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59188);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59190);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>** StaticGet___9__57_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::ItemData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x59198);
		}
		static ::RPG::Client::ActivityPlayerReturnModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPlayerReturnModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x591A0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x591A8);
		}
		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x591B0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x591B8);
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

		::System::UInt32 __RefreshCurInviteConfig_b__57_0(::RPG::GameCore::PlayerReturnInviteRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_0_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* __RefreshCurInviteConfig_b__57_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> a1)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIG_B__57_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetInviterInfoWWWReq_b__92_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>* _SendGetInviterInfoWWWReq_b__92_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__92_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetInviteeInfoWWWReq_b__93_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>* _SendGetInviteeInfoWWWReq_b__93_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__93_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendBindInvitationCodeWWWReq_b__94_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_0_OFFSET))(this, a1);
		}

		::Class_1_D8AE373904B194A5* _SendBindInvitationCodeWWWReq_b__94_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::Class_1_D8AE373904B194A5*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_1_OFFSET))(this, a1);
		}

		::System::Void _SendBindInvitationCodeWWWReq_b__94_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__94_2_OFFSET))(this);
		}

		::System::Boolean __OnPlayerReturnInfoQueryScRsp_b__184_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__184_0_OFFSET))(this, a1);
		}
	};
}
