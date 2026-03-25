#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x984C300)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x984BA00)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__ISLOCKED_OFFSET UNITYSDK_OFFSET(0x984C410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_LockedConstrait_TypeDefinitionIndex = 52650;

	class GridFightGridOperationValidator_LockedConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* startData, ::RPG::Client::GridFightGridData* endData, ::RPG::Client::GridFightGridMoveValidateResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT_VALIDATE_OFFSET))(this, startData, endData, result);
		}

		::System::Boolean _IsLocked(::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__ISLOCKED_OFFSET))(this, grid);
		}
	};
}
