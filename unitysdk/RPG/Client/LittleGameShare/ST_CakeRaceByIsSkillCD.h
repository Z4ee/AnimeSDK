#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGamePredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_METHOD_5_07E4554F39C2787D_OFFSET UNITYSDK_OFFSET(0x16E86A40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_METHOD_5_8D0DC6E783AD59AE_OFFSET UNITYSDK_OFFSET(0x16E89D60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD__CTOR_OFFSET UNITYSDK_OFFSET(0x16E869F0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_CakeRaceByIsSkillCD_TypeDefinitionIndex = 10002;

	class ST_CakeRaceByIsSkillCD : public ::RPG::Client::LittleGameShare::LittleGamePredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8D0DC6E783AD59AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_METHOD_5_8D0DC6E783AD59AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_07E4554F39C2787D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_CakeRaceByIsSkillCD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_CAKERACEBYISSKILLCD_METHOD_5_07E4554F39C2787D_OFFSET))(a1, a2);
		}
	};
}
