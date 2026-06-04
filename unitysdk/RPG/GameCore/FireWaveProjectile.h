#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireWaveProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_AA1416FD3255B99E_OFFSET UNITYSDK_OFFSET(0x19725260)
#define RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_E62463419E9596F8_OFFSET UNITYSDK_OFFSET(0x197251D0)
#define RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19725230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireWaveProjectile_TypeDefinitionIndex = 21350;

	class FireWaveProjectile : public ::RPG::GameCore::FireWaveProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E62463419E9596F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_E62463419E9596F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AA1416FD3255B99E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireWaveProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREWAVEPROJECTILE_METHOD_4_AA1416FD3255B99E_OFFSET))(a1, a2);
		}
	};
}
