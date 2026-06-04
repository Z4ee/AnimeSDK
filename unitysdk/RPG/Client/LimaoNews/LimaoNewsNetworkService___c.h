#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_531;
class Class_1_D17272E82AE804C2_533;
class Class_1_D1E0AD3915BCCF29_61;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD98780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD987C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xBD987D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0xBD987E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xBD98820)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 73782;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_D17272E82AE804C2_533*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_533*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x479E0);
		}
		static ::RPG::Client::LimaoNews::LimaoNewsNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::LimaoNews::LimaoNewsNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x479E8);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_531*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_531*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x479F0);
		}
		static ::System::Action_1<::Class_1_D1E0AD3915BCCF29_61*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_1_D1E0AD3915BCCF29_61*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x479F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::Class_1_D17272E82AE804C2_531* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_531*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::Class_1_D1E0AD3915BCCF29_61* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::Class_1_D17272E82AE804C2_533* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_533*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, a1);
		}
	};
}
