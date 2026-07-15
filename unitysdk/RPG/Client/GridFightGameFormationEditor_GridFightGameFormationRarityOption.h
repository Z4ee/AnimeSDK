#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_GETICON_OFFSET UNITYSDK_OFFSET(0x1ABDA220)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_GETNAME_OFFSET UNITYSDK_OFFSET(0x1ABDA170)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_SATISFY_OFFSET UNITYSDK_OFFSET(0x1ABDA0D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABD9690)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_GridFightGameFormationRarityOption_TypeDefinitionIndex = 61723;

	class GridFightGameFormationEditor_GridFightGameFormationRarityOption : public ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption
	{
	public:
		::System::UInt32 Rarity; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightGameFormationEditor_Filter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_Filter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Satisfy(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_SATISFY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_GETNAME_OFFSET))(this);
		}

		::System::String* GetIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONRARITYOPTION_GETICON_OFFSET))(this);
		}
	};
}
