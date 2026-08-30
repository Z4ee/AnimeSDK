#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightConsumableItemData; }

#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD36FEA0)
#define RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS5_0__ISCONSUMABLEBLOCKBYTUTORIAL_B__0_OFFSET UNITYSDK_OFFSET(0xD373D10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTutorialManager___c__DisplayClass5_0_TypeDefinitionIndex = 65571;

	class GridFightTutorialManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 consumableID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsConsumableBlockByTutorial_b__0(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTUTORIALMANAGER___C__DISPLAYCLASS5_0__ISCONSUMABLEBLOCKBYTUTORIAL_B__0_OFFSET))(this, a1);
		}
	};
}
