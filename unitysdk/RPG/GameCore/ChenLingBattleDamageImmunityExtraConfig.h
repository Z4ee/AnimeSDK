#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffTypeExtraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_C9067D2162CE0CAB_OFFSET UNITYSDK_OFFSET(0x1C3794E0)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_CC9A4BBF97191255_OFFSET UNITYSDK_OFFSET(0x1C379E90)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3794D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleDamageImmunityExtraConfig_TypeDefinitionIndex = 15188;

	class ChenLingBattleDamageImmunityExtraConfig : public ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC9A4BBF97191255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_CC9A4BBF97191255_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C9067D2162CE0CAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_METHOD_3_C9067D2162CE0CAB_OFFSET))(a1, a2);
		}
	};
}
