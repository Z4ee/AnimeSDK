#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_1184CBB4A9BE1646_OFFSET UNITYSDK_OFFSET(0x185E5810)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET UNITYSDK_OFFSET(0x185E7410)
#define RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185E7550)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int LittleGamePredicateConfig_TypeDefinitionIndex = 10185;

	class LittleGamePredicateConfig : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1184CBB4A9BE1646(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_1184CBB4A9BE1646_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F6192B10094B463(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::LittleGameShare::LittleGamePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_LITTLEGAMEPREDICATECONFIG_METHOD_4_4F6192B10094B463_OFFSET))(a1, a2);
		}
	};
}
