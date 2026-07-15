#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_4134E8F767D2C081_OFFSET UNITYSDK_OFFSET(0x1C3793E0)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_FB16DA14828A572E_OFFSET UNITYSDK_OFFSET(0x1C379270)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3793D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBuffTypeExtraConfig_TypeDefinitionIndex = 15187;

	class ChenLingBattleBuffTypeExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleValueGetter*>* CommonParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FB16DA14828A572E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_FB16DA14828A572E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_4134E8F767D2C081(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_METHOD_2_4134E8F767D2C081_OFFSET))(a1, a2);
		}
	};
}
