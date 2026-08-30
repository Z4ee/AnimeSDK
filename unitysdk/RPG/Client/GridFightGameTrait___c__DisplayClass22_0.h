#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS22_0__CHECKHASTRAITBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0xD1EC7A0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD1EA0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass22_0_TypeDefinitionIndex = 65475;

	class GridFightGameTrait___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckHasTraitByEffectType_b__0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS22_0__CHECKHASTRAITBYEFFECTTYPE_B__0_OFFSET))(this, a1);
		}
	};
}
