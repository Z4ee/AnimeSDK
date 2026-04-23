#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA02F8C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA02F900)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C___PUSHINITCOMMANDS_B__29_0_OFFSET UNITYSDK_OFFSET(0xA02F910)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance___c_TypeDefinitionIndex = 55743;

	class ChimeraGameInstance___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraGameInstance___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraGameInstance___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x57700);
		}
		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x57708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::Void __PushInitCommands_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE___C___PUSHINITCOMMANDS_B__29_0_OFFSET))(this);
		}
	};
}
