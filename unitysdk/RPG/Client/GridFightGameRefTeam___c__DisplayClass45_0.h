#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7B620)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS45_0__GETEQUIPBYUID_B__0_OFFSET UNITYSDK_OFFSET(0xBB7DAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass45_0_TypeDefinitionIndex = 60592;

	class GridFightGameRefTeam___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipByUID_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS45_0__GETEQUIPBYUID_B__0_OFFSET))(this, a1);
		}
	};
}
