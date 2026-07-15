#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_34D861EC1B1CDD27;
class Class_1_5610B7568BF432BE;
class Class_1_7AB88D713F5121B3_56;
class Class_1_7AB88D713F5121B3_57;
class Class_1_7AB88D713F5121B3_58;
class Class_1_917011F650CA881D;
class Class_1_92B1BD6FC8375724;
class Class_1_945ACFB1FEBC7A2C_31;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GetRogueTournBuildRefHistoryHttpRsp; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA56B70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA56BA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET UNITYSDK_OFFSET(0x1AA571B0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET UNITYSDK_OFFSET(0x1AA56D20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET UNITYSDK_OFFSET(0x1AA56D50)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET UNITYSDK_OFFSET(0x1AA56F20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET UNITYSDK_OFFSET(0x1AA56F50)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET UNITYSDK_OFFSET(0x1AA56DA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET UNITYSDK_OFFSET(0x1AA56DD0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET UNITYSDK_OFFSET(0x1AA56EA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET UNITYSDK_OFFSET(0x1AA56ED0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET UNITYSDK_OFFSET(0x1AA56E20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET UNITYSDK_OFFSET(0x1AA56E50)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1AA56BB0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AA56BC0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET UNITYSDK_OFFSET(0x1AA56FD0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET UNITYSDK_OFFSET(0x1AA570B0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET UNITYSDK_OFFSET(0x1AA56FA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET UNITYSDK_OFFSET(0x1AA56C20)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET UNITYSDK_OFFSET(0x1AA56C50)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET UNITYSDK_OFFSET(0x1AA56BD0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET UNITYSDK_OFFSET(0x1AA56CA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET UNITYSDK_OFFSET(0x1AA56CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c_TypeDefinitionIndex = 64789;

	class RogueTournModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*, ::Class_1_917011F650CA881D*>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*, ::Class_1_917011F650CA881D*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B290);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_917011F650CA881D*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::Class_1_917011F650CA881D*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B298);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>*>** StaticGet___9__39_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2A0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2A8);
		}
		static ::RPG::Client::RogueTournModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2B0);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>** StaticGet___9__87_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2B8);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2C0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2C8);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2D0);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2D8);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__194_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2E0);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2E8);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2F0);
		}
		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B2F8);
		}
		static ::System::Action** StaticGet___9__110_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B300);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>*>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B308);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_58*>*>** StaticGet___9__40_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_58*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B310);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B318);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B320);
		}
		static ::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::Class_1_296A7AC90F028539*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B328);
		}
		static ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B330);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x2B338);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SetRogueTournRegularModeCachedLineup_b__3_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SetRogueTournWeekChallengeModeCachedLineup_b__4_0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET))(this, a1);
		}

		::Class_1_917011F650CA881D* __SendGetRogueTournBuildRefStaticDataCdnHttpReq_b__31_0(::Class_1_296A7AC90F028539* a1)
		{
			return ((::Class_1_917011F650CA881D*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_0(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET))(this, a1);
		}

		::Class_1_917011F650CA881D* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_1(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>* a1)
		{
			return ((::Class_1_917011F650CA881D*(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_31*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_56*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendSetRogueTournBuildRefLikeHttpReq_b__39_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>* _SendSetRogueTournBuildRefLikeHttpReq_b__39_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_57*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_58*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_58*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_0(::Class_1_92B1BD6FC8375724* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_296A7AC90F028539*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET))(this, a1);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_1(::Class_1_296A7AC90F028539* a1)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*(*)(::PVOID, ::Class_1_296A7AC90F028539*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET))(this, a1);
		}

		::RPG::Client::MongoObjectId __OnGetRogueTournBuildRefInteractDataHttpRsp_b__45_0(::System::String* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* _ShowCollectionExhibitionPageFromEntrancePromised_b__87_0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET))(this);
		}

		::System::Void __OnCmdEnterSceneByServerScNotify_b__110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET))(this);
		}

		::System::Boolean _get_IsAutoShowEntrancePageAfterGotoPromised_b__194_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET))(this, a1);
		}
	};
}
