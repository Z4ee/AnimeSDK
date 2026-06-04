#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBattleBulletTypeExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_METHOD_2_FAE249A1B5E7AFCE_OFFSET UNITYSDK_OFFSET(0x1961F320)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletTypeConfig_TypeDefinitionIndex = 14937;

	class ChenLingBattleBulletTypeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleBulletType BulletType; // 0x10
		::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig* BulletTypeExtraConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FAE249A1B5E7AFCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETTYPECONFIG_METHOD_2_FAE249A1B5E7AFCE_OFFSET))(a1, a2);
		}
	};
}
