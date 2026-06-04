#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_ESCAPE_METHOD_4_AC2712B06C27E2BE_OFFSET UNITYSDK_OFFSET(0x19C02080)
#define RPG_GAMECORE_ST_MAIN_ESCAPE_METHOD_4_E0080B1904F87FC9_OFFSET UNITYSDK_OFFSET(0x19C18A40)
#define RPG_GAMECORE_ST_MAIN_ESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C02000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_Escape_TypeDefinitionIndex = 18984;

	class ST_Main_Escape : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Radius; // 0x18
		::System::Single MoveRadius; // 0x1C
		::System::Single Angle; // 0x20
		::System::UInt32 CandidatePoint; // 0x24
		::System::Single ConstC; // 0x28
		::System::Single Pow; // 0x2C
		::System::Single MaxRunAwayDistance; // 0x30
		::System::Single MaxRunAwayTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E0080B1904F87FC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Escape*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Escape*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE_METHOD_4_E0080B1904F87FC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AC2712B06C27E2BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_Escape* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ESCAPE_METHOD_4_AC2712B06C27E2BE_OFFSET))(a1, a2);
		}
	};
}
