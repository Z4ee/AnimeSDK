#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_CHESSROGUEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C1A8430)
#define RPG_CLIENT_CHESSROGUEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A8460)
#define RPG_CLIENT_CHESSROGUEMODULE___C__INIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C1A8470)
#define RPG_CLIENT_CHESSROGUEMODULE___C__ONLOGINFINISH_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C1A8510)

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueModule___c_TypeDefinitionIndex = 66931;

	class ChessRogueModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueModule___c_TypeDefinitionIndex)->GetStaticField(0x513C0);
		}
		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueModule___c_TypeDefinitionIndex)->GetStaticField(0x513C8);
		}
		static ::RPG::Client::ChessRogueModule___c** StaticGet___9()
		{
			return (::RPG::Client::ChessRogueModule___c**)Il2CppClass::FromTypeDefinitionIndex(ChessRogueModule___c_TypeDefinitionIndex)->GetStaticField(0x513D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__INIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnLoginFinish_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEMODULE___C__ONLOGINFINISH_B__2_0_OFFSET))(this);
		}
	};
}
