#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDCCFA0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBDCCFE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C___ONCLEAR_B__7_0_OFFSET UNITYSDK_OFFSET(0xBDCCFF0)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingGameInstance___c_TypeDefinitionIndex = 72318;

	class ChenLingGameInstance___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChenLing::ChenLingGameInstance___c**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x49830);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChenLingGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x49838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnClear_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGGAMEINSTANCE___C___ONCLEAR_B__7_0_OFFSET))(this);
		}
	};
}
