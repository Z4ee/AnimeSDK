#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightParticleEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F8AB0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__PLAYCYRENEACTIVEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xD0FA550)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass31_0_TypeDefinitionIndex = 64489;

	class GridFightEffectController___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightParticleEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCyreneActiveEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS31_0__PLAYCYRENEACTIVEEFFECT_B__0_OFFSET))(this);
		}
	};
}
