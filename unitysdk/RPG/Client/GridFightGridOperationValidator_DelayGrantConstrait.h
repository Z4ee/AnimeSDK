#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_DELAYGRANTCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x984BA20)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_DELAYGRANTCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x984BA10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_DelayGrantConstrait_TypeDefinitionIndex = 52652;

	class GridFightGridOperationValidator_DelayGrantConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_DELAYGRANTCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* startData, ::RPG::Client::GridFightGridData* endData, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_DELAYGRANTCONSTRAIT_VALIDATE_OFFSET))(this, startData, endData, result);
		}
	};
}
