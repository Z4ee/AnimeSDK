#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightFormationRole; }
namespace RPG::Client { class GridFightGameFormationEditor_EquipDressRule; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS8_0__CANDRESS_B__0_OFFSET UNITYSDK_OFFSET(0x1ABD84C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD02C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor___c__DisplayClass8_0_TypeDefinitionIndex = 61737;

	class GridFightGameFormationEditor___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightFormationRole* role; // 0x10
		::System::UInt32 equipID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__0(::RPG::Client::GridFightGameFormationEditor_EquipDressRule* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_EquipDressRule*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR___C__DISPLAYCLASS8_0__CANDRESS_B__0_OFFSET))(this, a1);
		}
	};
}
