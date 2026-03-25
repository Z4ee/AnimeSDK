#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL_METHOD_4_1356CE08F6769A59_OFFSET UNITYSDK_OFFSET(0x17697B10)
#define RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL_METHOD_4_20661BBB31F5B46E_OFFSET UNITYSDK_OFFSET(0x17686300)
#define RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0x176862B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_HangUpByLevel_TypeDefinitionIndex = 18403;

	class ST_Main_HangUpByLevel : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1356CE08F6769A59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_HangUpByLevel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_HangUpByLevel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL_METHOD_4_1356CE08F6769A59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_20661BBB31F5B46E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_HangUpByLevel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_HangUpByLevel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_HANGUPBYLEVEL_METHOD_4_20661BBB31F5B46E_OFFSET))(a1, a2);
		}
	};
}
