#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_METHOD_5_81881C3AF212DCC6_OFFSET UNITYSDK_OFFSET(0x1B9ED820)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_METHOD_5_E792206B071B7532_OFFSET UNITYSDK_OFFSET(0x1B9E9A60)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9E9A50)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Side_CakeRaceStableScopeGuarder_TypeDefinitionIndex = 9985;

	class ST_Side_CakeRaceStableScopeGuarder : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_81881C3AF212DCC6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_METHOD_5_81881C3AF212DCC6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_E792206B071B7532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Side_CakeRaceStableScopeGuarder*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_SIDE_CAKERACESTABLESCOPEGUARDER_METHOD_5_E792206B071B7532_OFFSET))(a1, a2);
		}
	};
}
