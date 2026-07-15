#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_BATTLEUIUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FC9F20)
#define RPG_CLIENT_BATTLEUIUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC9F60)
#define RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET UNITYSDK_OFFSET(0x19FC9F70)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c_TypeDefinitionIndex = 68809;

	class BattleUIUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleUIUtils___c** StaticGet___9()
		{
			return (::RPG::Client::BattleUIUtils___c**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils___c_TypeDefinitionIndex)->GetStaticField(0x5D890);
		}
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BattleUIUtils___c_TypeDefinitionIndex)->GetStaticField(0x5D898);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTeamDetailDialog_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__SHOWTEAMDETAILDIALOG_B__4_0_OFFSET))(this);
		}
	};
}
