#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ProjectileData; }

#define RPG_GAMECORE_FIREPROJECTILE_METHOD_4_1D295D1C659491A2_OFFSET UNITYSDK_OFFSET(0x171DA770)
#define RPG_GAMECORE_FIREPROJECTILE_METHOD_4_BF9B7529062BC21A_OFFSET UNITYSDK_OFFSET(0x171DA810)
#define RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x171DA7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FireProjectile_TypeDefinitionIndex = 20763;

	class FireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::ProjectileData* Projectile; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1D295D1C659491A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_4_1D295D1C659491A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BF9B7529062BC21A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIREPROJECTILE_METHOD_4_BF9B7529062BC21A_OFFSET))(a1, a2);
		}
	};
}
