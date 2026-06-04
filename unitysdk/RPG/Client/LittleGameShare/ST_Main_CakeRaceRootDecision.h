#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_METHOD_5_15064AE286BCA10F_OFFSET UNITYSDK_OFFSET(0x193B9400)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_METHOD_5_AA3A6EE6AEB72989_OFFSET UNITYSDK_OFFSET(0x193B9260)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION__CTOR_OFFSET UNITYSDK_OFFSET(0x193B93B0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_CakeRaceRootDecision_TypeDefinitionIndex = 9974;

	class ST_Main_CakeRaceRootDecision : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_AA3A6EE6AEB72989(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_METHOD_5_AA3A6EE6AEB72989_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_15064AE286BCA10F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_CakeRaceRootDecision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_CAKERACEROOTDECISION_METHOD_5_15064AE286BCA10F_OFFSET))(a1, a2);
		}
	};
}
