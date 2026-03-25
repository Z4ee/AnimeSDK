#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_METHOD_5_05365EE80780A158_OFFSET UNITYSDK_OFFSET(0x16E8A450)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_METHOD_5_89FF8065F4AF78FD_OFFSET UNITYSDK_OFFSET(0x16E88430)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E883E0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceTransfer_TypeDefinitionIndex = 9987;

	class ST_Main_CakeRaceTransfer : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::UInt32 Duration; // 0x18
		::System::UInt32 FallGridY; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_05365EE80780A158(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_METHOD_5_05365EE80780A158_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_89FF8065F4AF78FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceTransfer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACETRANSFER_METHOD_5_89FF8065F4AF78FD_OFFSET))(a1, a2);
		}
	};
}
