#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_METHOD_4_4D1CDCD9589F74A7_OFFSET UNITYSDK_OFFSET(0x1CD511F0)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_METHOD_4_CB890B25D5D40713_OFFSET UNITYSDK_OFFSET(0x1CD4F390)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD512B0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGameSTTaskConfig_TypeDefinitionIndex = 10341;

	class LittleGameSTTaskConfig : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CB890B25D5D40713(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_METHOD_4_CB890B25D5D40713_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4D1CDCD9589F74A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGameSTTaskConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMESTTASKCONFIG_METHOD_4_4D1CDCD9589F74A7_OFFSET))(a1, a2);
		}
	};
}
