#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_781232649B0BA1D8;
class Class_1_FB0633E85BD6CF8E_6;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F2D3E0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F2D420)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET UNITYSDK_OFFSET(0x9F2D430)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET UNITYSDK_OFFSET(0x9F2D500)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET UNITYSDK_OFFSET(0x9F2D5E0)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET UNITYSDK_OFFSET(0x9F2D650)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex = 58149;

	class ChallengeFriendRecommendLineupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_781232649B0BA1D8*, ::Class_1_FB0633E85BD6CF8E_6*>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::Class_1_781232649B0BA1D8*, ::Class_1_FB0633E85BD6CF8E_6*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x47C90);
		}
		static ::System::Func_2<::Class_1_781232649B0BA1D8*, ::Class_1_FB0633E85BD6CF8E_6*>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::Class_1_781232649B0BA1D8*, ::Class_1_FB0633E85BD6CF8E_6*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x47C98);
		}
		static ::RPG::Client::ChallengeFriendRecommendLineupData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeFriendRecommendLineupData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x47CA0);
		}
		static ::System::Func_2<::Class_1_781232649B0BA1D8*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_781232649B0BA1D8*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x47CA8);
		}
		static ::System::Func_2<::Class_1_781232649B0BA1D8*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_1_781232649B0BA1D8*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x47CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_0(::Class_1_781232649B0BA1D8* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_781232649B0BA1D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET))(this, data);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_1(::Class_1_781232649B0BA1D8* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_781232649B0BA1D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET))(this, data);
		}

		::Class_1_FB0633E85BD6CF8E_6* __CreateRecommendChallengeLineupsInfo_b__29_2(::Class_1_781232649B0BA1D8* data)
		{
			return ((::Class_1_FB0633E85BD6CF8E_6*(*)(::PVOID, ::Class_1_781232649B0BA1D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET))(this, data);
		}

		::Class_1_FB0633E85BD6CF8E_6* __CreateRecommendChallengeLineupsInfo_b__29_3(::Class_1_781232649B0BA1D8* data)
		{
			return ((::Class_1_FB0633E85BD6CF8E_6*(*)(::PVOID, ::Class_1_781232649B0BA1D8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET))(this, data);
		}
	};
}
