#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9846940)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS17_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x9847B50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass17_0_TypeDefinitionIndex = 53097;

	class GridFightGameTrait___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraitByEffectType_b__0(::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS17_0__GETTRAITBYEFFECTTYPE_B__0_OFFSET))(this, trait);
		}
	};
}
