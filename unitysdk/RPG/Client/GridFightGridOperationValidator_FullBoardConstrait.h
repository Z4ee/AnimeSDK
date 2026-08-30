#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FULLBOARDCONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD1F2890)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FULLBOARDCONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F2D50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_FullBoardConstrait_TypeDefinitionIndex = 64907;

	class GridFightGridOperationValidator_FullBoardConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FULLBOARDCONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FULLBOARDCONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
