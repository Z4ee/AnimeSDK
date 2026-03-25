#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }

#define RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_276C2C77A253A714_OFFSET UNITYSDK_OFFSET(0x17471EE0)
#define RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_B8F11FA84BE31C58_OFFSET UNITYSDK_OFFSET(0x17471F80)
#define RPG_GAMECORE_NEWFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x17471F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewFireProjectile_TypeDefinitionIndex = 20764;

	class NewFireProjectile : public ::RPG::GameCore::FireProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_276C2C77A253A714(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_276C2C77A253A714_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B8F11FA84BE31C58(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWFIREPROJECTILE_METHOD_4_B8F11FA84BE31C58_OFFSET))(a1, a2);
		}
	};
}
