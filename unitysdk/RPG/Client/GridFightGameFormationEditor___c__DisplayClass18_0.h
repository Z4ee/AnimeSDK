#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CANPUTROLE_B__1_OFFSET UNITYSDK_OFFSET(0xBB58A60)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB528C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass18_0_TypeDefinitionIndex = 60441;

	class GridFightGameFormationEditor___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::UInt32 posIndex; // 0x10
		::System::UInt32 avatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanPutRole_b__1(::RPG::Client::GridFightFormationRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightFormationRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS18_0__CANPUTROLE_B__1_OFFSET))(this, a1);
		}
	};
}
