#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGrowUpEffect; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB0E9F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__PLAYHACKCOPYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xBB0EA00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass22_0_TypeDefinitionIndex = 60268;

	class GridFightEffectController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightGrowUpEffect* effect; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayHackCopyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS22_0__PLAYHACKCOPYEFFECT_B__0_OFFSET))(this);
		}
	};
}
