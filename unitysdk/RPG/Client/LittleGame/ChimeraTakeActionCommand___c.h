#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA691A00)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA691A40)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0xA691A50)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTakeActionCommand___c_TypeDefinitionIndex = 70392;

	class ChimeraTakeActionCommand___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ChimeraTakeActionCommand___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChimeraTakeActionCommand___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTakeActionCommand___c_TypeDefinitionIndex)->GetStaticField(0x29470);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTakeActionCommand___c_TypeDefinitionIndex)->GetStaticField(0x29478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__EXECUTE_B__2_0_OFFSET))(this);
		}
	};
}
