#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GETICON_OFFSET UNITYSDK_OFFSET(0xD1B46B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GETNAME_OFFSET UNITYSDK_OFFSET(0xD1B45E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD1B4430)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_SATISFY_OFFSET UNITYSDK_OFFSET(0xD1B44F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_UNUSE_OFFSET UNITYSDK_OFFSET(0xD1B4490)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3770)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_GridFightGameFormationEquipTypeFilterOption_TypeDefinitionIndex = 64706;

	class GridFightGameFormationEditor_GridFightGameFormationEquipTypeFilterOption : public ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption
	{
	public:
		::RPG::Client::GridFightHandBookEquipItemType Category; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightGameFormationEditor_Filter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_Filter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void UnUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_UNUSE_OFFSET))(this);
		}

		::System::Boolean Satisfy(::RPG::Client::GridFightEquipItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_SATISFY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GETNAME_OFFSET))(this);
		}

		::System::String* GetIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONEQUIPTYPEFILTEROPTION_GETICON_OFFSET))(this);
		}
	};
}
