#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureFireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_64ED24246515B748_OFFSET UNITYSDK_OFFSET(0x1CDF1BA0)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_9D965DE5F797CC66_OFFSET UNITYSDK_OFFSET(0x1CDF1B60)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF1B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFireProjectile_TypeDefinitionIndex = 19973;

	class AdventureFireProjectile : public ::RPG::GameCore::AdventureFireProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9D965DE5F797CC66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_9D965DE5F797CC66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_64ED24246515B748(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_64ED24246515B748_OFFSET))(a1, a2);
		}
	};
}
