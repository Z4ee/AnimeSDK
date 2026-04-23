#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xA4EB760)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4EBAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_ProjectionBlockConstrait_TypeDefinitionIndex = 59702;

	class GridFightGridOperationValidator_ProjectionBlockConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* startData, ::RPG::Client::GridFightGridData* endData, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_PROJECTIONBLOCKCONSTRAIT_VALIDATE_OFFSET))(this, startData, endData, result);
		}
	};
}
