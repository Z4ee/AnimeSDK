#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1BA43BD0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA42DB0)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__ISLOCKED_OFFSET UNITYSDK_OFFSET(0x1BA43CF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_LockedConstrait_TypeDefinitionIndex = 64911;

	class GridFightGridOperationValidator_LockedConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsLocked(::RPG::Client::GridFightGridData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_LOCKEDCONSTRAIT__ISLOCKED_OFFSET))(this, a1);
		}
	};
}
