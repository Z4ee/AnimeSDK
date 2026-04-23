#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BCBC0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xA5BCBF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineAvatarActivateStateParser___c__DisplayClass1_0_TypeDefinitionIndex = 60281;

	class GridFightTraitRemarkLineAvatarActivateStateParser___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetIsActive_b__0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEAVATARACTIVATESTATEPARSER___C__DISPLAYCLASS1_0___GETISACTIVE_B__0_OFFSET))(this, x);
		}
	};
}
