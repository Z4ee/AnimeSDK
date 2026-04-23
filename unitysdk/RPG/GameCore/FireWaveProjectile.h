#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireWaveProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_76913E34BC1484D1_OFFSET UNITYSDK_OFFSET(0x188E8B30)
#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_B90538C6AA89A2D9_OFFSET UNITYSDK_OFFSET(0x188E8AA0)
#define RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectile_TypeDefinitionIndex = 21468;

	class FireWaveProjectile : public ::RPG::GameCore::FireWaveProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B90538C6AA89A2D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_B90538C6AA89A2D9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_76913E34BC1484D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_76913E34BC1484D1_OFFSET))(a1, a2);
		}
	};
}
