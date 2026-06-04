#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGridPutDownEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0EAD0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS24_0__PLAYGRIDPUTDOWNEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBB0EAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass24_0_TypeDefinitionIndex = 60270;

	class GridFightEffectController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightGridPutDownEffect* effect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGridPutDownEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS24_0__PLAYGRIDPUTDOWNEFFECT_B__0_OFFSET))(this);
		}
	};
}
