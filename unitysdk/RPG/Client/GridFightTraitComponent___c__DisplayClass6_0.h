#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98CDBC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x98CDF40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c__DisplayClass6_0_TypeDefinitionIndex = 53123;

	class GridFightTraitComponent___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectType effectType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitByEffectType_b__0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__DISPLAYCLASS6_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET))(this, x);
		}
	};
}
