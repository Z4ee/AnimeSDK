#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x187722F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18772330)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C___ONBINDVIEWMODEL_B__12_5_OFFSET UNITYSDK_OFFSET(0x18772340)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectTabControl___c_TypeDefinitionIndex = 76595;

	class ChallengeTierceStageSelectTabControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectTabControl___c_TypeDefinitionIndex)->GetStaticField(0x61180);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__12_5()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectTabControl___c_TypeDefinitionIndex)->GetStaticField(0x61188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::String* __OnBindViewModel_b__12_5(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABCONTROL___C___ONBINDVIEWMODEL_B__12_5_OFFSET))(this, a1);
		}
	};
}
