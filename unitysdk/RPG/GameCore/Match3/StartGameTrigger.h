#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3TriggerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_METHOD_4_4395B0DE9F0E2D77_OFFSET UNITYSDK_OFFSET(0x1D2620B0)
#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_METHOD_4_6F4A868D5C71A386_OFFSET UNITYSDK_OFFSET(0x1D264DF0)
#define RPG_GAMECORE_MATCH3_STARTGAMETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2620A0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int StartGameTrigger_TypeDefinitionIndex = 24594;

	class StartGameTrigger : public ::RPG::GameCore::Match3::Match3TriggerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_6F4A868D5C71A386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartGameTrigger*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartGameTrigger*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_METHOD_4_6F4A868D5C71A386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4395B0DE9F0E2D77(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::StartGameTrigger* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::StartGameTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_STARTGAMETRIGGER_METHOD_4_4395B0DE9F0E2D77_OFFSET))(a1, a2);
		}
	};
}
