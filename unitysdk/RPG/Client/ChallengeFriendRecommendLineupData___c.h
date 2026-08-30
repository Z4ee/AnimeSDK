#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_24;
class Class_1_6D0244BBBB07BA13_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA343C0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA34400)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET UNITYSDK_OFFSET(0xCA34410)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET UNITYSDK_OFFSET(0xCA344E0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET UNITYSDK_OFFSET(0xCA345C0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET UNITYSDK_OFFSET(0xCA34630)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex = 63200;

	class ChallengeFriendRecommendLineupData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeFriendRecommendLineupData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeFriendRecommendLineupData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x21360);
		}
		static ::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::Class_1_21DCD4640D389503_24*>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::Class_1_21DCD4640D389503_24*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x21368);
		}
		static ::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::Class_1_21DCD4640D389503_24*>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::Class_1_21DCD4640D389503_24*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x21370);
		}
		static ::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x21378);
		}
		static ::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_1_6D0244BBBB07BA13_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x21380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_0(::Class_1_6D0244BBBB07BA13_1* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6D0244BBBB07BA13_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_1(::Class_1_6D0244BBBB07BA13_1* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_6D0244BBBB07BA13_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET))(this, a1);
		}

		::Class_1_21DCD4640D389503_24* __CreateRecommendChallengeLineupsInfo_b__29_2(::Class_1_6D0244BBBB07BA13_1* a1)
		{
			return ((::Class_1_21DCD4640D389503_24*(*)(::PVOID, ::Class_1_6D0244BBBB07BA13_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET))(this, a1);
		}

		::Class_1_21DCD4640D389503_24* __CreateRecommendChallengeLineupsInfo_b__29_3(::Class_1_6D0244BBBB07BA13_1* a1)
		{
			return ((::Class_1_21DCD4640D389503_24*(*)(::PVOID, ::Class_1_6D0244BBBB07BA13_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET))(this, a1);
		}
	};
}
