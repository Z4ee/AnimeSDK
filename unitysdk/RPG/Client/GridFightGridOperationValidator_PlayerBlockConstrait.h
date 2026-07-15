#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x194FE980)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x194FCEE0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__ISBOARDPLACEMENT_OFFSET UNITYSDK_OFFSET(0x194FEE70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_PlayerBlockConstrait_TypeDefinitionIndex = 61924;

	class GridFightGridOperationValidator_PlayerBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsBoardPlacement(::RPG::Client::GridFightPlacementType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__ISBOARDPLACEMENT_OFFSET))(this, a1);
		}
	};
}
