#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4CDEB0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD4CDEF0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__EXECUTE_B__0_0_OFFSET UNITYSDK_OFFSET(0xD4CDF00)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkFinishCommand___c_TypeDefinitionIndex = 76169;

	class ChimeraWorkFinishCommand___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ChimeraWorkFinishCommand___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChimeraWorkFinishCommand___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkFinishCommand___c_TypeDefinitionIndex)->GetStaticField(0x62B20);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkFinishCommand___c_TypeDefinitionIndex)->GetStaticField(0x62B28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKFINISHCOMMAND___C__EXECUTE_B__0_0_OFFSET))(this);
		}
	};
}
