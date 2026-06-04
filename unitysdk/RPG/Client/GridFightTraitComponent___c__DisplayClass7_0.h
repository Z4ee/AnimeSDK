#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC264D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS7_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xBC26940)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass7_0_TypeDefinitionIndex = 61180;

	class GridFightTraitComponent___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectType effectType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitByEffectType_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS7_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
