#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION_METHOD_3_00321FD48E40AB10_OFFSET UNITYSDK_OFFSET(0x19631100)
#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION_METHOD_3_076F9B2EF8FAAAC9_OFFSET UNITYSDK_OFFSET(0x19631080)
#define RPG_GAMECORE_CHESSROGUEDOORINTERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x196310D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueDoorInteraction_TypeDefinitionIndex = 20873;

	class ChessRogueDoorInteraction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean InteractWithConsole; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_076F9B2EF8FAAAC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessRogueDoorInteraction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessRogueDoorInteraction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION_METHOD_3_076F9B2EF8FAAAC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00321FD48E40AB10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChessRogueDoorInteraction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChessRogueDoorInteraction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHESSROGUEDOORINTERACTION_METHOD_3_00321FD48E40AB10_OFFSET))(a1, a2);
		}
	};
}
