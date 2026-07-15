#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS65_0__ADDEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0x1ABD8320)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD5410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass65_0_TypeDefinitionIndex = 61736;

	class GridFightGameFormationEditor___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::System::UInt32 equipID; // 0x10
		::System::UInt32 craftedID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddEquip_b__0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS65_0__ADDEQUIP_B__0_OFFSET))(this, a1);
		}
	};
}
