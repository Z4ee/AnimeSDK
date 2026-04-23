#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoleSwitchCondType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189D5180)
#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189D5350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSwitchConfigRow_TypeDefinitionIndex = 12801;

	class GridFightRoleSwitchConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 RoleID; // 0x18
		::System::UInt32 BaseRoleID; // 0x1C
		::RPG::GameCore::RoleSwitchCondType Condition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleSwitchConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleSwitchConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
