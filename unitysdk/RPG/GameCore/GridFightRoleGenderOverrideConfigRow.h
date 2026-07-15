#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D0730B0)
#define RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D073260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleGenderOverrideConfigRow_TypeDefinitionIndex = 13060;

	class GridFightRoleGenderOverrideConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonOverridePath; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 Star; // 0x1C
		::System::UInt32 RoleID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightRoleGenderOverrideConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLEGENDEROVERRIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
