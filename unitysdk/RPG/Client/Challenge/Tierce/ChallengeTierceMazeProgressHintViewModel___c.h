#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCC22A0BAD3D5A17;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C86A910)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86A950)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETLEFTROUNDCOUNT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1C86A960)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETOBTAINEDSCORE_B__14_0_OFFSET UNITYSDK_OFFSET(0x1C86AB00)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeProgressHintViewModel___c_TypeDefinitionIndex = 80261;

	class ChallengeTierceMazeProgressHintViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceMazeProgressHintViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1B960);
		}
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceMazeProgressHintViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceMazeProgressHintViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1B968);
		}
		static ::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::Class_1_FCC22A0BAD3D5A17*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceMazeProgressHintViewModel___c_TypeDefinitionIndex)->GetStaticField(0x1B970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __GetLeftRoundCount_b__13_0(::Class_1_FCC22A0BAD3D5A17* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETLEFTROUNDCOUNT_B__13_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetObtainedScore_b__14_0(::Class_1_FCC22A0BAD3D5A17* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_FCC22A0BAD3D5A17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEPROGRESSHINTVIEWMODEL___C___GETOBTAINEDSCORE_B__14_0_OFFSET))(this, a1);
		}
	};
}
