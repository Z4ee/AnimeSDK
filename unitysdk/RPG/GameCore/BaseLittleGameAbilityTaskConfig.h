#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_METHOD_3_229FBC5123F7923B_OFFSET UNITYSDK_OFFSET(0x1A3E0BF0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_METHOD_3_74970D0393EB53B2_OFFSET UNITYSDK_OFFSET(0x1A3E08B0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E0CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityTaskConfig_TypeDefinitionIndex = 20594;

	class BaseLittleGameAbilityTaskConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_74970D0393EB53B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_METHOD_3_74970D0393EB53B2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_229FBC5123F7923B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseLittleGameAbilityTaskConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTASKCONFIG_METHOD_3_229FBC5123F7923B_OFFSET))(a1, a2);
		}
	};
}
