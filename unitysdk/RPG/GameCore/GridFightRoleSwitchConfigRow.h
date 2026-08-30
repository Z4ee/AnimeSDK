#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RoleSwitchCondType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D165030)
#define RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D165200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSwitchConfigRow_TypeDefinitionIndex = 13427;

	class GridFightRoleSwitchConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::RoleSwitchCondType Condition; // 0x18
		::System::UInt32 RoleID; // 0x1C
		::System::UInt32 BaseRoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleSwitchConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleSwitchConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLESWITCHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
