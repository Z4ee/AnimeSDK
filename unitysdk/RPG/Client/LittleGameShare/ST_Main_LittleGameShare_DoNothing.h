#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameSTTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_METHOD_5_D44CD389D2A41168_OFFSET UNITYSDK_OFFSET(0x1CD54DB0)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_METHOD_5_F12AE8D3E62D2284_OFFSET UNITYSDK_OFFSET(0x1CD50B40)
#define RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD50B30)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Main_LittleGameShare_DoNothing_TypeDefinitionIndex = 10313;

	class ST_Main_LittleGameShare_DoNothing : public ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig
	{
	public:
		::System::Int32 DurationMs; // 0x18
		::System::Boolean UseRandom; // 0x1C
		::System::UInt32 MinDurationMs; // 0x20
		::System::UInt32 MaxDurationMs; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D44CD389D2A41168(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_METHOD_5_D44CD389D2A41168_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F12AE8D3E62D2284(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::ST_Main_LittleGameShare_DoNothing*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_ST_MAIN_LITTLEGAMESHARE_DONOTHING_METHOD_5_F12AE8D3E62D2284_OFFSET))(a1, a2);
		}
	};
}
