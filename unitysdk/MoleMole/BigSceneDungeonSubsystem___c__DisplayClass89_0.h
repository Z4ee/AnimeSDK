#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS89_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1623A420)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS89_0__REGISTERSETUPZENKOVHIGHQUALITYDROPITEMONREADY_G__ONGADGETENTITYREADY_0_OFFSET UNITYSDK_OFFSET(0x1623A430)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c__DisplayClass89_0_TypeDefinitionIndex = 44144;

	class BigSceneDungeonSubsystem___c__DisplayClass89_0 : public ::System::Object
	{
	public:
		::MoleMole::EntityHandle gadgetEntity; // 0x10
		::System::Int32 itemId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS89_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterSetupZenkovHighQualityDropItemOnReady_g__OnGadgetEntityReady_0(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS89_0__REGISTERSETUPZENKOVHIGHQUALITYDROPITEMONREADY_G__ONGADGETENTITYREADY_0_OFFSET))(this, entity);
		}
	};
}
