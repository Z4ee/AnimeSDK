#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AE2660)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AE26A0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x9AE26B0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenArrangeGameState___c_TypeDefinitionIndex = 69570;

	class ActivityHipplenArrangeGameState___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenArrangeGameState___c_TypeDefinitionIndex)->GetStaticField(0x23620);
		}
		static ::RPG::Client::ActivityHipplen::ActivityHipplenArrangeGameState___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityHipplen::ActivityHipplenArrangeGameState___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityHipplenArrangeGameState___c_TypeDefinitionIndex)->GetStaticField(0x23628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RPG_Client_ActivityHipplen_IActivityHipplenGameState_OnEnter_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENARRANGEGAMESTATE___C__RPG_CLIENT_ACTIVITYHIPPLEN_IACTIVITYHIPPLENGAMESTATE_ONENTER_B__2_0_OFFSET))(this);
		}
	};
}
