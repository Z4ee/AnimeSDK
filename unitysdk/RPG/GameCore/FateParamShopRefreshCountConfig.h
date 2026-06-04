#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_6_17D9AC8A94EB68FF_OFFSET UNITYSDK_OFFSET(0x197159C0)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_6_8526DD625AECBA23_OFFSET UNITYSDK_OFFSET(0x19715B80)
#define RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19715AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamShopRefreshCountConfig_TypeDefinitionIndex = 15799;

	class FateParamShopRefreshCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_17D9AC8A94EB68FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamShopRefreshCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_6_17D9AC8A94EB68FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8526DD625AECBA23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMSHOPREFRESHCOUNTCONFIG_METHOD_6_8526DD625AECBA23_OFFSET))(a1, a2);
		}
	};
}
