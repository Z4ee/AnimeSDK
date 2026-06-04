#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBulletTypeExtraConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBezierPointConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_METHOD_3_0245D81A68E32567_OFFSET UNITYSDK_OFFSET(0x1961F5B0)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_METHOD_3_506E0236F0FAC389_OFFSET UNITYSDK_OFFSET(0x1961F610)
#define RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1961F600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletMagicMissileExtraConfig_TypeDefinitionIndex = 14942;

	class ChenLingBattleBulletMagicMissileExtraConfig : public ::RPG::GameCore::ChenLingBattleBulletTypeExtraConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChenLingBattleBezierPointConfig*>* ControlPoints; // 0x10
		::RPG::GameCore::BaseChenLingBattleValueGetter* ExtraCountAdd; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0245D81A68E32567(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_METHOD_3_0245D81A68E32567_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_506E0236F0FAC389(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleBulletMagicMissileExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBULLETMAGICMISSILEEXTRACONFIG_METHOD_3_506E0236F0FAC389_OFFSET))(a1, a2);
		}
	};
}
