#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGrowUpEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA470270)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS21_0__PLAYGROWUPEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xA472AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass21_0_TypeDefinitionIndex = 59332;

	class GridFightEffectController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGrowUpEffect* effect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayGrowupEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS21_0__PLAYGROWUPEFFECT_B__0_OFFSET))(this);
		}
	};
}
