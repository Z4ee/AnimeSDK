#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }
namespace RPG::Client { class GridFightNPC; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD1F3110)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F36E0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__SHOULDBLOCK_OFFSET UNITYSDK_OFFSET(0xD1F33A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_NPCBlockConstrait_TypeDefinitionIndex = 64909;

	class GridFightGridOperationValidator_NPCBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _ShouldBlock(::RPG::Client::GridFightNPC* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightNPC*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_NPCBLOCKCONSTRAIT__SHOULDBLOCK_OFFSET))(this, a1, a2, a3);
		}
	};
}
