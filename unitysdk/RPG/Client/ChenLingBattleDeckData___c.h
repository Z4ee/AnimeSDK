#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class CardConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D5260)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D5290)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__GETCARDINDEXLISTBYTYPE_B__12_1_OFFSET UNITYSDK_OFFSET(0xB5D52B0)
#define RPG_CLIENT_CHENLINGBATTLEDECKDATA___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xB5D52A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingBattleDeckData___c_TypeDefinitionIndex = 57425;

	class ChenLingBattleDeckData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleDeckData___c_TypeDefinitionIndex)->GetStaticField(0x60850);
		}
		static ::RPG::Client::ChenLingBattleDeckData___c** StaticGet___9()
		{
			return (::RPG::Client::ChenLingBattleDeckData___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleDeckData___c_TypeDefinitionIndex)->GetStaticField(0x60858);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::ChenLingBattle::CardConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ChenLingBattleDeckData___c_TypeDefinitionIndex)->GetStaticField(0x60860);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChenLingBattle::CardConfig* __ctor_b__0_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChenLingBattle::CardConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetCardIndexListByType_b__12_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::ChenLingBattle::CardConfig*, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLEDECKDATA___C__GETCARDINDEXLISTBYTYPE_B__12_1_OFFSET))(this, a1);
		}
	};
}
