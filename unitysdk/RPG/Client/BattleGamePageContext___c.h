#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F4ACA0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4ACE0)
#define RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET UNITYSDK_OFFSET(0x19F4ACF0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePageContext___c_TypeDefinitionIndex = 71602;

	class BattleGamePageContext___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__64_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePageContext___c_TypeDefinitionIndex)->GetStaticField(0xA6F0);
		}
		static ::RPG::Client::BattleGamePageContext___c** StaticGet___9()
		{
			return (::RPG::Client::BattleGamePageContext___c**)Il2CppClass::FromTypeDefinitionIndex(BattleGamePageContext___c_TypeDefinitionIndex)->GetStaticField(0xA6F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __ToggleAvatarPanel_b__64_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPAGECONTEXT___C___TOGGLEAVATARPANEL_B__64_0_OFFSET))(this);
		}
	};
}
