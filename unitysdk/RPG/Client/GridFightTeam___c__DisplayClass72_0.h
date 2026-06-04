#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS72_0__CONTAINSROLEONBOARD_B__0_OFFSET UNITYSDK_OFFSET(0xBC15F20)
#define RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBC11EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam___c__DisplayClass72_0_TypeDefinitionIndex = 60936;

	class GridFightTeam___c__DisplayClass72_0 : public ::System::Object
	{
	public:
		::System::UInt32 roleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ContainsRoleOnBoard_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM___C__DISPLAYCLASS72_0__CONTAINSROLEONBOARD_B__0_OFFSET))(this, a1);
		}
	};
}
