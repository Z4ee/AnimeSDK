#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_BF927CBEA754F6BE;

#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_RESET_OFFSET UNITYSDK_OFFSET(0xAA77170)
#define RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAA77160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamFormationComponent_RowFormationLocationData_TypeDefinitionIndex = 46512;

	class TeamFormationComponent_RowFormationLocationData : public ::System::Object
	{
	public:
		::Class_2_BF927CBEA754F6BE* FormationComponent; // 0x10
		::RPG::MVector3 LocalFormationOffset; // 0x18
		::System::Boolean IgnoreFormationRefresh; // 0x24
		::System::Single RandomZOffset; // 0x28
		::System::Single FixedZOffset; // 0x2C
		::System::Int32 RowIndex; // 0x30

		::System::Void _ctor(::System::Int32 rowIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA__CTOR_OFFSET))(this, rowIndex);
		}

		::System::Void Reset(::Class_2_BF927CBEA754F6BE* target)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BF927CBEA754F6BE*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONCOMPONENT_ROWFORMATIONLOCATIONDATA_RESET_OFFSET))(this, target);
		}
	};
}
