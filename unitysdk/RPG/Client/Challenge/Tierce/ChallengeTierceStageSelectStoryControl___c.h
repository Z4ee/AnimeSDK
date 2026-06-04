#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB4E0B90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E0BD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_1_OFFSET UNITYSDK_OFFSET(0xB4E0BE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C___ONBINDVIEWMODEL_B__65_13_OFFSET UNITYSDK_OFFSET(0xB4E0D50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectStoryControl___c_TypeDefinitionIndex = 74209;

	class ChallengeTierceStageSelectStoryControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B** StaticGet___9__55_1()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl_Class_3_6EEFE48F0F19B50B**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectStoryControl___c_TypeDefinitionIndex)->GetStaticField(0x5ACA0);
		}
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectStoryControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectStoryControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectStoryControl___c_TypeDefinitionIndex)->GetStaticField(0x5ACA8);
		}
		static ::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>** StaticGet___9__65_13()
		{
			return (::System::Func_2<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectStoryControl___c_TypeDefinitionIndex)->GetStaticField(0x5ACB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Action* _set_PrivateStageRecommendDamageTypes_b__55_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C__SET_PRIVATESTAGERECOMMENDDAMAGETYPES_B__55_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 __OnBindViewModel_b__65_13(::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTORYCONTROL___C___ONBINDVIEWMODEL_B__65_13_OFFSET))(this, a1);
		}
	};
}
