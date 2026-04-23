#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTIMERELAYFLAME_METHOD_3_428D35C0AB0A6315_OFFSET UNITYSDK_OFFSET(0x18CABC10)
#define RPG_GAMECORE_RESETTIMERELAYFLAME_METHOD_3_5804AA83DD7C0801_OFFSET UNITYSDK_OFFSET(0x18CABB00)
#define RPG_GAMECORE_RESETTIMERELAYFLAME__CTOR_OFFSET UNITYSDK_OFFSET(0x18CABBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTimeRelayFlame_TypeDefinitionIndex = 20896;

	class ResetTimeRelayFlame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5804AA83DD7C0801(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTimeRelayFlame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTimeRelayFlame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME_METHOD_3_5804AA83DD7C0801_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_428D35C0AB0A6315(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTimeRelayFlame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTimeRelayFlame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTIMERELAYFLAME_METHOD_3_428D35C0AB0A6315_OFFSET))(a1, a2);
		}
	};
}
