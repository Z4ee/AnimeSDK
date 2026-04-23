#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET UNITYSDK_OFFSET(0xA4B7E40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B7E30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_TraitOnlyDressRule___c__DisplayClass2_0_TypeDefinitionIndex = 59482;

	class GridFightGameFormationEditor_TraitOnlyDressRule___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* equipConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__0(::System::UInt32 traitID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_TRAITONLYDRESSRULE___C__DISPLAYCLASS2_0__CANDRESS_B__0_OFFSET))(this, traitID);
		}
	};
}
