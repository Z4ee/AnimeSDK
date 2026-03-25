#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1727EC40)
#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1727EDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGenderOverrideConfigRow_TypeDefinitionIndex = 12393;

	class GridFightRoleGenderOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonOverridePath; // 0x10
		::System::UInt32 Star; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
