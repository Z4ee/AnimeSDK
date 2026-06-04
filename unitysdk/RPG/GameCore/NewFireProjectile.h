#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_2188B7BB7146C7EA_OFFSET UNITYSDK_OFFSET(0x199CD8B0)
#define RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_E19174291781676D_OFFSET UNITYSDK_OFFSET(0x199CD810)
#define RPG_GAMECORE_NEWFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x199CD870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireProjectile_TypeDefinitionIndex = 21348;

	class NewFireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E19174291781676D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_E19174291781676D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2188B7BB7146C7EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_2188B7BB7146C7EA_OFFSET))(a1, a2);
		}
	};
}
