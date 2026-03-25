#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7C11C261870F1926_4;
class Class_1_CE90A3B454F32DFE;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x92C5C10)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x92C5C50)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET UNITYSDK_OFFSET(0x92C5C60)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET UNITYSDK_OFFSET(0x92C5D30)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET UNITYSDK_OFFSET(0x92C5E10)
#define RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET UNITYSDK_OFFSET(0x92C5E80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex = 51225;

	class ChallengeFriendRecommendLineupData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChallengeFriendRecommendLineupData___c** StaticGet___9()
		{
			return (::RPG::Client::ChallengeFriendRecommendLineupData___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44CB0);
		}
		static ::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::Class_1_7C11C261870F1926_4*>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::Class_1_7C11C261870F1926_4*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44CB8);
		}
		static ::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44CC0);
		}
		static ::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44CC8);
		}
		static ::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::Class_1_7C11C261870F1926_4*>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::Class_1_CE90A3B454F32DFE*, ::Class_1_7C11C261870F1926_4*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeFriendRecommendLineupData___c_TypeDefinitionIndex)->GetStaticField(0x44CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_0(::Class_1_CE90A3B454F32DFE* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CE90A3B454F32DFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_0_OFFSET))(this, data);
		}

		::System::Boolean __CreateRecommendChallengeLineupsInfo_b__29_1(::Class_1_CE90A3B454F32DFE* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_CE90A3B454F32DFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_1_OFFSET))(this, data);
		}

		::Class_1_7C11C261870F1926_4* __CreateRecommendChallengeLineupsInfo_b__29_2(::Class_1_CE90A3B454F32DFE* data)
		{
			return ((::Class_1_7C11C261870F1926_4*(*)(::PVOID, ::Class_1_CE90A3B454F32DFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_2_OFFSET))(this, data);
		}

		::Class_1_7C11C261870F1926_4* __CreateRecommendChallengeLineupsInfo_b__29_3(::Class_1_CE90A3B454F32DFE* data)
		{
			return ((::Class_1_7C11C261870F1926_4*(*)(::PVOID, ::Class_1_CE90A3B454F32DFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEFRIENDRECOMMENDLINEUPDATA___C___CREATERECOMMENDCHALLENGELINEUPSINFO_B__29_3_OFFSET))(this, data);
		}
	};
}
