#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_2F346BBD0ECB22BB;
class Class_1_34D861EC1B1CDD27;
class Class_1_5610B7568BF432BE;
class Class_1_7AB88D713F5121B3_46;
class Class_1_7AB88D713F5121B3_47;
class Class_1_7AB88D713F5121B3_48;
class Class_1_92B1BD6FC8375724;
class Class_1_945ACFB1FEBC7A2C_27;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GetRogueTournBuildRefHistoryHttpRsp; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3AFDF0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA3AFE20)
#define RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET UNITYSDK_OFFSET(0xA3B0440)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET UNITYSDK_OFFSET(0xA3AFFA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET UNITYSDK_OFFSET(0xA3AFFD0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET UNITYSDK_OFFSET(0xA3B01A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET UNITYSDK_OFFSET(0xA3B01D0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET UNITYSDK_OFFSET(0xA3B0020)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET UNITYSDK_OFFSET(0xA3B0050)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET UNITYSDK_OFFSET(0xA3B0120)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET UNITYSDK_OFFSET(0xA3B0150)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET UNITYSDK_OFFSET(0xA3B00A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET UNITYSDK_OFFSET(0xA3B00D0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET UNITYSDK_OFFSET(0xA3AFE30)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET UNITYSDK_OFFSET(0xA3AFE40)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET UNITYSDK_OFFSET(0xA3B0250)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET UNITYSDK_OFFSET(0xA3B0340)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET UNITYSDK_OFFSET(0xA3B0220)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET UNITYSDK_OFFSET(0xA3AFEA0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET UNITYSDK_OFFSET(0xA3AFED0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET UNITYSDK_OFFSET(0xA3AFE50)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET UNITYSDK_OFFSET(0xA3AFF20)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET UNITYSDK_OFFSET(0xA3AFF50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c_TypeDefinitionIndex = 55298;

	class RogueTournModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>** StaticGet___9__38_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E370);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E378);
		}
		static ::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E380);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*>** StaticGet___9__40_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E388);
		}
		static ::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*, ::Class_1_2F346BBD0ECB22BB*>** StaticGet___9__32_1()
		{
			return (::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*, ::Class_1_2F346BBD0ECB22BB*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E390);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E398);
		}
		static ::RPG::Client::RogueTournModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3A0);
		}
		static ::System::Action** StaticGet___9__110_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3A8);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_2F346BBD0ECB22BB*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_2F346BBD0ECB22BB*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3B0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3B8);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>** StaticGet___9__36_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3C0);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>** StaticGet___9__87_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3C8);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__194_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3D0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3D8);
		}
		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3E0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3E8);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3F0);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E3F8);
		}
		static ::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::Class_1_92B1BD6FC8375724*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E400);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E408);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E410);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*>** StaticGet___9__39_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0x1E418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _SetRogueTournRegularModeCachedLineup_b__3_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNREGULARMODECACHEDLINEUP_B__3_0_OFFSET))(this, avatar);
		}

		::System::UInt32 _SetRogueTournWeekChallengeModeCachedLineup_b__4_0(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SETROGUETOURNWEEKCHALLENGEMODECACHEDLINEUP_B__4_0_OFFSET))(this, avatar);
		}

		::Class_1_2F346BBD0ECB22BB* __SendGetRogueTournBuildRefStaticDataCdnHttpReq_b__31_0(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::Class_1_2F346BBD0ECB22BB*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__31_0_OFFSET))(this, rsp);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_0(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_0_OFFSET))(this, rsp);
		}

		::Class_1_2F346BBD0ECB22BB* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__32_1(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>* rsp)
		{
			return ((::Class_1_2F346BBD0ECB22BB*(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_27*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__32_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__35_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__35_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__36_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__36_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__38_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__38_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendSetRogueTournBuildRefLikeHttpReq_b__39_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>* _SendSetRogueTournBuildRefLikeHttpReq_b__39_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__39_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__40_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__40_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_0(::Class_1_92B1BD6FC8375724* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__41_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__41_1_OFFSET))(this, rsp);
		}

		::RPG::Client::MongoObjectId __OnGetRogueTournBuildRefInteractDataHttpRsp_b__45_0(::System::String* id)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__45_0_OFFSET))(this, id);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* _ShowCollectionExhibitionPageFromEntrancePromised_b__87_0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__87_0_OFFSET))(this);
		}

		::System::Void __OnCmdEnterSceneByServerScNotify_b__110_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__110_0_OFFSET))(this);
		}

		::System::Boolean _get_IsAutoShowEntrancePageAfterGotoPromised_b__194_0(::System::Boolean isNotAutoShow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__194_0_OFFSET))(this, isNotAutoShow);
		}
	};
}
