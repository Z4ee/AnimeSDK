#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class GridFightGameFormationEditor_Filter; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GETICON_OFFSET UNITYSDK_OFFSET(0xD1B4EB0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GETNAME_OFFSET UNITYSDK_OFFSET(0xD1B4D20)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD1B4C30)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GET_ISTRAIT_OFFSET UNITYSDK_OFFSET(0xD1B4B40)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_SATISFY_OFFSET UNITYSDK_OFFSET(0xD1B4B80)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0xD1B3D90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_GridFightGameFormationTraitOption_TypeDefinitionIndex = 64708;

	class GridFightGameFormationEditor_GridFightGameFormationTraitOption : public ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption
	{
	public:
		::System::UInt32 TraitID; // 0x18

		::System::Void _ctor(::RPG::Client::GridFightGameFormationEditor_Filter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_Filter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GET_ISTRAIT_OFFSET))(this);
		}

		::System::Boolean Satisfy(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_SATISFY_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GET_CONFIG_OFFSET))(this);
		}

		::RPG::Client::TextID GetName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GETNAME_OFFSET))(this);
		}

		::System::String* GetIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_GRIDFIGHTGAMEFORMATIONTRAITOPTION_GETICON_OFFSET))(this);
		}
	};
}
