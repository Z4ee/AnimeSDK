#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletTypeExtraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_METHOD_3_F668979627236BF3_OFFSET UNITYSDK_OFFSET(0x1C379AB0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_METHOD_3_F8ADF8C1FA561967_OFFSET UNITYSDK_OFFSET(0x1C379A50)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C379AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletRayExtraConfig_TypeDefinitionIndex = 15105;

	class ChenLingBattleBulletRayExtraConfig : public ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig
	{
	public:
		::System::Boolean IsPiercing; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* CollisionRadius; // 0x18
		::RPG::GameCore::BaseChenLingBattleValueGetter* Attenuation; // 0x20
		::RPG::GameCore::BaseChenLingBattleValueGetter* BulletNumber; // 0x28
		::RPG::GameCore::BaseChenLingBattleValueGetter* BulletDeflectionAngle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8ADF8C1FA561967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_METHOD_3_F8ADF8C1FA561967_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F668979627236BF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletRayExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETRAYEXTRACONFIG_METHOD_3_F668979627236BF3_OFFSET))(a1, a2);
		}
	};
}
