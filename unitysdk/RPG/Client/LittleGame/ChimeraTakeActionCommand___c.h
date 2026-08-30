#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC30A70)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC30AB0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATAKEACTIONCOMMAND___C__EXECUTE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AC30AC0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTakeActionCommand___c_TypeDefinitionIndex = 76157;

	class ChimeraTakeActionCommand___c : public ::System::Object
	{
	public:
		static ::RPG::Client::LittleGame::ChimeraTakeActionCommand___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::ChimeraTakeActionCommand___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTakeActionCommand___c_TypeDefinitionIndex)->GetStaticField(0x5FF50);
		}
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTakeActionCommand___c_TypeDefinitionIndex)->GetStaticField(0x5FF58);
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
