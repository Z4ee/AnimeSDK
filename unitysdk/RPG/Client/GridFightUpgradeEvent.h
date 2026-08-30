#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTUPGRADEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD3756A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUpgradeEvent_TypeDefinitionIndex = 65236;

	class GridFightUpgradeEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* FirstRemovedRole; // 0x10
		::RPG::Client::GridFightRole* SecondRemovedRole; // 0x18
		::RPG::Client::GridFightRole* UpgradedRole; // 0x20
		::System::Int32 SecondBuyIndex; // 0x28
		::System::Int32 FirstBuyIndex; // 0x2C

		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::RPG::Client::GridFightRole* a2, ::RPG::Client::GridFightRole* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUPGRADEEVENT__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
