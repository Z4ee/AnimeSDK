#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_METHOD_5_01A57DB0E8B2691D_OFFSET UNITYSDK_OFFSET(0x1B9E8800)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_METHOD_5_8843A94A9304FD29_OFFSET UNITYSDK_OFFSET(0x1B9ED0A0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E87F0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePlayEmoji_TypeDefinitionIndex = 10001;

	class ST_Main_CakeRacePlayEmoji : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8843A94A9304FD29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_METHOD_5_8843A94A9304FD29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_01A57DB0E8B2691D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayEmoji*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYEMOJI_METHOD_5_01A57DB0E8B2691D_OFFSET))(a1, a2);
		}
	};
}
