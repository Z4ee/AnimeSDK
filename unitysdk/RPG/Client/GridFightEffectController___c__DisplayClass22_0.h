#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGridPutDownEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97F5C60)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__PLAYGRIDPUTDOWNEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x97F7D60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass22_0_TypeDefinitionIndex = 52380;

	class GridFightEffectController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightGridPutDownEffect* effect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGridPutDownEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__PLAYGRIDPUTDOWNEFFECT_B__0_OFFSET))(this);
		}
	};
}
