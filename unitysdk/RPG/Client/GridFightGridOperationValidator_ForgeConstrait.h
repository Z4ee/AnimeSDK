#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridData; }
namespace RPG::Client { class GridFightGridMoveValidateResult; }

#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT_VALIDATE_OFFSET UNITYSDK_OFFSET(0xD1F2450)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F2040)
#define RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT__ISFORGEPLACEMENT_OFFSET UNITYSDK_OFFSET(0xD1F2840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridOperationValidator_ForgeConstrait_TypeDefinitionIndex = 64910;

	class GridFightGridOperationValidator_ForgeConstrait : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void Validate(::RPG::Client::GridFightGridData* a1, ::RPG::Client::GridFightGridData* a2, ::RPG::Client::GridFightGridMoveValidateResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridData*, ::RPG::Client::GridFightGridMoveValidateResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT_VALIDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsForgePlacement(::RPG::Client::GridFightPlacementType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPlacementType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDOPERATIONVALIDATOR_FORGECONSTRAIT__ISFORGEPLACEMENT_OFFSET))(this, a1);
		}
	};
}
