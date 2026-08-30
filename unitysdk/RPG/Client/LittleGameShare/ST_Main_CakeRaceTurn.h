#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_METHOD_5_57414EF4BAD36267_OFFSET UNITYSDK_OFFSET(0x1CD54B80)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_METHOD_5_9BC6C69BF9BD0415_OFFSET UNITYSDK_OFFSET(0x1CD50360)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD50350)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceTurn_TypeDefinitionIndex = 10316;

	class ST_Main_CakeRaceTurn : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_57414EF4BAD36267(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_METHOD_5_57414EF4BAD36267_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9BC6C69BF9BD0415(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTurn*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETURN_METHOD_5_9BC6C69BF9BD0415_OFFSET))(a1, a2);
		}
	};
}
