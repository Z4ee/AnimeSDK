#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_METHOD_2_06EECDD6DF72445D_OFFSET UNITYSDK_OFFSET(0x1C379C20)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_METHOD_2_624A70F1B52DB429_OFFSET UNITYSDK_OFFSET(0x1C379E20)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C379A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletTypeExtraConfig_TypeDefinitionIndex = 15104;

	class ChenLingBattleBulletTypeExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_06EECDD6DF72445D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_METHOD_2_06EECDD6DF72445D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_624A70F1B52DB429(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPEEXTRACONFIG_METHOD_2_624A70F1B52DB429_OFFSET))(a1, a2);
		}
	};
}
