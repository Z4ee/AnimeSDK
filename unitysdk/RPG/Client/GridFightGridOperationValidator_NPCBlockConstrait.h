#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }
namespace RPG::Client { class GridFightNPC; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x984C5A0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x984B9E0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__SHOULDBLOCK_OFFSET UNITYSDK_OFFSET(0x984C830)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_NPCBlockConstrait_TypeDefinitionIndex = 52648;

	class GridFightGridOperationValidator_NPCBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* startData, ::RPG::Client::GridFightGridData* endData, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, startData, endData, result);
		}

		::System::Boolean _ShouldBlock(::RPG::Client::GridFightNPC* npc, ::RPG::Client::GridFightGridData* dest, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__SHOULDBLOCK_OFFSET))(this, npc, dest, result);
		}
	};
}
