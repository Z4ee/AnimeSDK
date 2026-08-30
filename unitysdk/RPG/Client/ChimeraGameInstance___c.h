#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5FC9C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5FCA00)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE___C___PUSHINITCOMMANDS_B__29_0_OFFSET UNITYSDK_OFFSET(0x1B5FCA10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance___c_TypeDefinitionIndex = 60555;

	class ChimeraGameInstance___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ChimeraGameInstance___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraGameInstance___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x55F50);
		}
		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraGameInstance___c_TypeDefinitionIndex)->GetStaticField(0x55F58);
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
