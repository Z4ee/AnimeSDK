#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleResource; }
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBulletTypeConfig; }
namespace RPG::GameCore { class ChenLingBattleBulletView; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_METHOD_2_B00A18D73DAC7269_OFFSET UNITYSDK_OFFSET(0x1961CDB0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961F310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletConfig_TypeDefinitionIndex = 14936;

	class ChenLingBattleBulletConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingBattleBulletTypeConfig* BulletTypeConfig; // 0x10
		::RPG::GameCore::ChenLingBattleBulletView* BulletView; // 0x18
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleResource*>* OnHitResource; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* Speed; // 0x30
		::System::Boolean EnableRetarget; // 0x38
		::RPG::GameCore::FixPoint RetargetMinDistance; // 0x40
		::RPG::GameCore::FixPoint RetargetAngle; // 0x48
		::RPG::GameCore::FixPoint RetargetMaxDistance; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B00A18D73DAC7269(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETCONFIG_METHOD_2_B00A18D73DAC7269_OFFSET))(a1, a2);
		}
	};
}
