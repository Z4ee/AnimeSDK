#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_6_44103E091565A6CD_OFFSET UNITYSDK_OFFSET(0x188D7EF0)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_6_F90B5D054B868A46_OFFSET UNITYSDK_OFFSET(0x188D7CA0)
#define RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D7E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateParamHouguCountConfig_TypeDefinitionIndex = 15759;

	class FateParamHouguCountConfig : public ::RPG::GameCore::FateParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F90B5D054B868A46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamHouguCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamHouguCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_6_F90B5D054B868A46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_44103E091565A6CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateParamHouguCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateParamHouguCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEPARAMHOUGUCOUNTCONFIG_METHOD_6_44103E091565A6CD_OFFSET))(a1, a2);
		}
	};
}
