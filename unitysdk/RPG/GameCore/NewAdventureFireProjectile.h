#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureFireProjectileBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_CE5B8DB4BD351B70_OFFSET UNITYSDK_OFFSET(0x199CC850)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_EFBC1088406F6CD7_OFFSET UNITYSDK_OFFSET(0x199CC8D0)
#define RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE__CTOR_OFFSET UNITYSDK_OFFSET(0x199CC8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NewAdventureFireProjectile_TypeDefinitionIndex = 19076;

	class NewAdventureFireProjectile : public ::RPG::GameCore::AdventureFireProjectileBase
	{
	public:
		::RPG::GameCore::NewProjectileConfig* NewProjectile; // 0x40
		::RPG::GameCore::TargetEvaluator* CustomAnchorTarget; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CE5B8DB4BD351B70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewAdventureFireProjectile*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewAdventureFireProjectile*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_CE5B8DB4BD351B70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_EFBC1088406F6CD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NEWADVENTUREFIREPROJECTILE_METHOD_4_EFBC1088406F6CD7_OFFSET))(a1, a2);
		}
	};
}
