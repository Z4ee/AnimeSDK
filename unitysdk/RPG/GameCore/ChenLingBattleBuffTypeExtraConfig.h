#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_80EB83DBE0C73CCC_OFFSET UNITYSDK_OFFSET(0x187E10A0)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_C3329CBD1B7B2FB3_OFFSET UNITYSDK_OFFSET(0x187E0F40)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187E1090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBuffTypeExtraConfig_TypeDefinitionIndex = 14960;

	class ChenLingBattleBuffTypeExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleValueGetter*>* CommonParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C3329CBD1B7B2FB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_C3329CBD1B7B2FB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_80EB83DBE0C73CCC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_80EB83DBE0C73CCC_OFFSET))(a1, a2);
		}
	};
}
