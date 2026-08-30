#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEPAUSEGAME_METHOD_3_8FA2B43F087AB73E_OFFSET UNITYSDK_OFFSET(0x1D1034B0)
#define RPG_GAMECORE_CAKERACEPAUSEGAME_METHOD_3_B9D688A87F80A3BD_OFFSET UNITYSDK_OFFSET(0x1D1034F0)
#define RPG_GAMECORE_CAKERACEPAUSEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1034E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRacePauseGame_TypeDefinitionIndex = 24021;

	class CakeRacePauseGame : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsPause; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8FA2B43F087AB73E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePauseGame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePauseGame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME_METHOD_3_8FA2B43F087AB73E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9D688A87F80A3BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRacePauseGame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRacePauseGame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEPAUSEGAME_METHOD_3_B9D688A87F80A3BD_OFFSET))(a1, a2);
		}
	};
}
