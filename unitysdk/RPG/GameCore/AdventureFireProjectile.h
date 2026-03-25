#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureFireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_014C9985CC051CC7_OFFSET UNITYSDK_OFFSET(0x16F53B20)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_72712D531700284F_OFFSET UNITYSDK_OFFSET(0x16F53AA0)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F53AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFireProjectile_TypeDefinitionIndex = 18493;

	class AdventureFireProjectile : public ::RPG::GameCore::AdventureFireProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_72712D531700284F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_72712D531700284F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_014C9985CC051CC7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILE_METHOD_4_014C9985CC051CC7_OFFSET))(a1, a2);
		}
	};
}
