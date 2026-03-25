#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffTypeExtraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_C4B6E4B99E93621B_OFFSET UNITYSDK_OFFSET(0x1707D070)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_CDAD6E776AD54219_OFFSET UNITYSDK_OFFSET(0x1707C6B0)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1707C6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleDamageImmunityExtraConfig_TypeDefinitionIndex = 14491;

	class ChenLingBattleDamageImmunityExtraConfig : public ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4B6E4B99E93621B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_C4B6E4B99E93621B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CDAD6E776AD54219(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_CDAD6E776AD54219_OFFSET))(a1, a2);
		}
	};
}
