#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChenLingBattleDeckData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x934DBF0)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x934DC30)
#define RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__GETUNLOCKEDDECKS_B__9_0_OFFSET UNITYSDK_OFFSET(0x934DC40)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckInfo___c_TypeDefinitionIndex = 49831;

	class ChenLingBattleDeckInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChenLingBattleDeckInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattleDeckInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleDeckInfo___c_TypeDefinitionIndex)->GetStaticField(0x462D0);
		}
		static ::System::Func_2<::RPG::Client::ChenLingBattleDeckData*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChenLingBattleDeckData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleDeckInfo___c_TypeDefinitionIndex)->GetStaticField(0x462D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetUnlockedDecks_b__9_0(::RPG::Client::ChenLingBattleDeckData* deck)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattleDeckData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKINFO___C__GETUNLOCKEDDECKS_B__9_0_OFFSET))(this, deck);
		}
	};
}
