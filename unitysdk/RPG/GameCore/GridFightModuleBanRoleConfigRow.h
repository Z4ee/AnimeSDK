#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODULEBANROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x189C0C30)
#define RPG_GAMECORE_GRIDFIGHTMODULEBANROLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x189C0D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleBanRoleConfigRow_TypeDefinitionIndex = 12751;

	class GridFightModuleBanRoleConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 RoleId; // 0x10
		::System::UInt32 ModuleId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANROLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModuleBanRoleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULEBANROLECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
