#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_METHOD_3_E558D91C88788E46_OFFSET UNITYSDK_OFFSET(0x1D30E430)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_METHOD_3_F006F3778E086F09_OFFSET UNITYSDK_OFFSET(0x1D30E480)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D30E540)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameTaskConfig_TypeDefinitionIndex = 10339;

	class LittleGameTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E558D91C88788E46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGameTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGameTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_METHOD_3_E558D91C88788E46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F006F3778E086F09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGameTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGameTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMETASKCONFIG_METHOD_3_F006F3778E086F09_OFFSET))(a1, a2);
		}
	};
}
