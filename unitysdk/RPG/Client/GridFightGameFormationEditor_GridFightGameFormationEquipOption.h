#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5A2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_GridFightGameFormationEquipOption_TypeDefinitionIndex = 60428;

	class GridFightGameFormationEditor_GridFightGameFormationEquipOption : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipItemConfig* EquipConfig; // 0x10
		::RPG::Client::GridFightHandBookEquipItemType ItemType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPOPTION__CTOR_OFFSET))(this);
		}
	};
}
