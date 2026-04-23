#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ST_MAIN_FEARESCAPE_METHOD_4_1876D1A219E0DFF6_OFFSET UNITYSDK_OFFSET(0x18DF0ED0)
#define RPG_GAMECORE_ST_MAIN_FEARESCAPE_METHOD_4_D18533BAE0D73C99_OFFSET UNITYSDK_OFFSET(0x18DF1040)
#define RPG_GAMECORE_ST_MAIN_FEARESCAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DF0FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_FearEscape_TypeDefinitionIndex = 19078;

	class ST_Main_FearEscape : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1876D1A219E0DFF6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FearEscape*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FearEscape*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE_METHOD_4_1876D1A219E0DFF6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D18533BAE0D73C99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Main_FearEscape* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Main_FearEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_FEARESCAPE_METHOD_4_D18533BAE0D73C99_OFFSET))(a1, a2);
		}
	};
}
