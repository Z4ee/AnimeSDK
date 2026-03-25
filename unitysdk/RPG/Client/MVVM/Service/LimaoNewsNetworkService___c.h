#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_52;
class Class_1_FA4F4A67B1C04320_485;
class Class_1_FA4F4A67B1C04320_487;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A8AE80)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9A8AEC0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x9A8AED0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0x9A8AEE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0x9A8AF20)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 61035;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x289C0);
		}
		static ::System::Action_1<::Class_1_FA4F4A67B1C04320_487*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_FA4F4A67B1C04320_487*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x289C8);
		}
		static ::System::Action_1<::Class_1_FA4F4A67B1C04320_485*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_FA4F4A67B1C04320_485*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x289D0);
		}
		static ::System::Action_1<::Class_1_120319518E6F6581_52*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_1_120319518E6F6581_52*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x289D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::Class_1_FA4F4A67B1C04320_485* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_485*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::Class_1_120319518E6F6581_52* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_52*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::Class_1_FA4F4A67B1C04320_487* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_487*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, rsp);
		}
	};
}
