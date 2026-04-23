#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IGridFightTraitEffect; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5AD600)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS10_0__GETEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA5B0080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c__DisplayClass10_0_TypeDefinitionIndex = 60234;

	class GridFightTrait___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEffect_b__0(::RPG::Client::IGridFightTraitEffect* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__DISPLAYCLASS10_0__GETEFFECT_B__0_OFFSET))(this, x);
		}
	};
}
