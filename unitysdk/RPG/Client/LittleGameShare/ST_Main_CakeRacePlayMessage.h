#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_METHOD_5_7718D964872D8FF0_OFFSET UNITYSDK_OFFSET(0x1B9E88D0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_METHOD_5_F61EB0A515C8E3A4_OFFSET UNITYSDK_OFFSET(0x1B9ED190)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E88C0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRacePlayMessage_TypeDefinitionIndex = 10002;

	class ST_Main_CakeRacePlayMessage : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_F61EB0A515C8E3A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_METHOD_5_F61EB0A515C8E3A4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_7718D964872D8FF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRacePlayMessage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEPLAYMESSAGE_METHOD_5_7718D964872D8FF0_OFFSET))(a1, a2);
		}
	};
}
