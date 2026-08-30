#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA03C20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA03C60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_0_OFFSET UNITYSDK_OFFSET(0xCA03C70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_1_OFFSET UNITYSDK_OFFSET(0xCA03C90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_2_OFFSET UNITYSDK_OFFSET(0xCA03CB0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultWindow___c_TypeDefinitionIndex = 80213;

	class ChallengeTierceResultWindow___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32, ::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>>** StaticGet___9__19_0()
		{
			return (::System::Func_3<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32, ::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceResultWindow___c_TypeDefinitionIndex)->GetStaticField(0x1DE80);
		}
		static ::System::Func_2<::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>, ::System::Int32>** StaticGet___9__19_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceResultWindow___c_TypeDefinitionIndex)->GetStaticField(0x1DE88);
		}
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceResultWindow___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceResultWindow___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceResultWindow___c_TypeDefinitionIndex)->GetStaticField(0x1DE90);
		}
		static ::System::Func_2<::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceResultWindow___c_TypeDefinitionIndex)->GetStaticField(0x1DE98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32> __CreateAnimationCoroutine_b__19_0(::RPG::Client::Challenge::ChallengeTargetViewModel* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>(*)(::PVOID, ::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean __CreateAnimationCoroutine_b__19_1(::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_1_OFFSET))(this, a1);
		}

		::System::Int32 __CreateAnimationCoroutine_b__19_2(::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::RPG::Client::Challenge::ChallengeTargetViewModel*, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___C___CREATEANIMATIONCOROUTINE_B__19_2_OFFSET))(this, a1);
		}
	};
}
