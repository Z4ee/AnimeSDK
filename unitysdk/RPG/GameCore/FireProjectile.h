#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREPROJECTILE_METHOD_4_1D461DC189E6FCEB_OFFSET UNITYSDK_OFFSET(0x1E0DE580)
#define RPG_GAMECORE_FIREPROJECTILE_METHOD_4_5281656D54B81584_OFFSET UNITYSDK_OFFSET(0x1E0DE5E0)
#define RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DE5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireProjectile_TypeDefinitionIndex = 22329;

	class FireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D461DC189E6FCEB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_4_1D461DC189E6FCEB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5281656D54B81584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_4_5281656D54B81584_OFFSET))(a1, a2);
		}
	};
}
