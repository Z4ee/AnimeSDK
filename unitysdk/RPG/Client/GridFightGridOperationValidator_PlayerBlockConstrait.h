#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x984CC50)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x984B9C0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__ISBOARDPLACEMENT_OFFSET UNITYSDK_OFFSET(0x984D010)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_PlayerBlockConstrait_TypeDefinitionIndex = 52647;

	class GridFightGridOperationValidator_PlayerBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* startData, ::RPG::Client::GridFightGridData* endData, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, startData, endData, result);
		}

		::System::Boolean _IsBoardPlacement(::RPG::Client::GridFightPlacementType placement)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PLAYERBLOCKCONSTRAIT__ISBOARDPLACEMENT_OFFSET))(this, placement);
		}
	};
}
