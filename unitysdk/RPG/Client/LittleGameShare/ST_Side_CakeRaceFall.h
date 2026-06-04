#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_METHOD_5_0110F9823B876265_OFFSET UNITYSDK_OFFSET(0x193BA9C0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_METHOD_5_05DC59C39842C635_OFFSET UNITYSDK_OFFSET(0x193BA8E0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL__CTOR_OFFSET UNITYSDK_OFFSET(0x193BA970)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceFall_TypeDefinitionIndex = 9967;

	class ST_Side_CakeRaceFall : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_05DC59C39842C635(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_METHOD_5_05DC59C39842C635_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_0110F9823B876265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceFall*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACEFALL_METHOD_5_0110F9823B876265_OFFSET))(a1, a2);
		}
	};
}
