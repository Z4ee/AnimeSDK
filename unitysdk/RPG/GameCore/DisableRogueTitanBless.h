#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DISABLEROGUETITANBLESS_METHOD_3_31BCF2B65581EFE9_OFFSET UNITYSDK_OFFSET(0x1DB0AEA0)
#define RPG_GAMECORE_DISABLEROGUETITANBLESS_METHOD_3_467ADD47683D3CF8_OFFSET UNITYSDK_OFFSET(0x1DB0AEE0)
#define RPG_GAMECORE_DISABLEROGUETITANBLESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0AED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableRogueTitanBless_TypeDefinitionIndex = 22853;

	class DisableRogueTitanBless : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsRevert; // 0x18
		::System::UInt32 MazeBuffID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_31BCF2B65581EFE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableRogueTitanBless*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableRogueTitanBless*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS_METHOD_3_31BCF2B65581EFE9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_467ADD47683D3CF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DisableRogueTitanBless* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DisableRogueTitanBless*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEROGUETITANBLESS_METHOD_3_467ADD47683D3CF8_OFFSET))(a1, a2);
		}
	};
}
